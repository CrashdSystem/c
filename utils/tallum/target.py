# Abstract interfaces for target platforms
from abc import ABC, abstractmethod
from dataclasses import dataclass
from . import ir

@dataclass
class VMmap:
    sp: str
    lcl: str
    arg: str
    this: str
    that: str
    temp: any
    acc: str
    bcc: str
    var1: str
    static_reg: str
    callstack: str

class Target(ABC):
    def __init__(self, name: str, bits: int, vmmap: VMmap):
        self.name = name
        self.bits = bits
        self.word = bits / 8
        self.map: VMmap = vmmap
        self.static = {}
    
    @abstractmethod
    def push(self, segment: str, index: int, lineno: int) -> str:
        pass
    
    @abstractmethod
    def pop(self, segment: str, index: int, lineno: int) -> str:
        pass
    
    @abstractmethod
    def unary(self, op: str) -> str:
        pass
    
    @abstractmethod
    def binary(self, op: str) -> str:
        pass
    
    @abstractmethod
    def label(self, label: str) -> str:
        pass
        
    @abstractmethod
    def goto(self, label: str) -> str:
        pass

    @abstractmethod
    def if_goto(self, label: str) -> str:
        pass
    @abstractmethod
    def call(self, func: str, args: int) -> str:
        pass
    @abstractmethod
    def function(self, func: str, nlocals: int) -> str:
        pass
    @abstractmethod
    def ret(self, ) -> str:
        pass
    @abstractmethod
    def optimize(self, asm: str) -> str:
        pass
    
    def translate(self, s: str, lineno: int) -> str:
        ss = s.split()
        if len(s) == 0 or len(ss) == 0:
            return ""
        
        command = ss[0]
        match command:
            case op if op in [ir.PUSH, ir.POP]:
                err, segment, index = ir.check_push_pop(ss, lineno)
                if err:
                    return segment
                else:
                    return self.push(segment, index, lineno) + "\n" if op == ir.PUSH else self.pop(segment, index, lineno)
            case op if op in ir.BINARY:
                return self.binary(op) + "\n"
            case op if op in ir.UNARY:
                return self.unary(op) + "\n"
            case ir.LABEL:
                err, lab = ir.check_branch(ss, lineno)
                if err:
                    return lab
                else: 
                    return self.label(lab)
            case ir.GOTO:
                err, lab = ir.check_branch(ss, lineno)
                if err:
                    return lab
                else: 
                    return self.goto(lab)
            case ir.IFGOTO:
                err, lab = ir.check_branch(ss, lineno)
                if err:
                    return lab
                else: 
                    return self.if_goto(lab)
            
            case ir.FUNCTION:
                err, func, var = ir.check_func(ss, lineno)
                if err:
                    return func
                else:
                    return self.function(func, var) 
            case ir.CALL:
                err, func, arg = ir.check_func(ss, lineno)
                if err:
                    return func
                else: 
                    return self.call(func, arg)
            case ir.RETURN:
                return self.ret()
            
            case _:
                ir.error(f"`{command}` is not a valid instruction", lineno)
                return f";! syntax error: invalid instrutction in line {lineno}"
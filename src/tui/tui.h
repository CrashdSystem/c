
char tui[105][305] = 
{ 
" ┏━registers━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓ ┏━control━━━━━━━━━━━━━━━━━━━━━━━━┓\n\r",
"╔╩═acc═╗┌──bcc─┐┌──r1──┐┌──r2──┐┌──r3──┐┌──r4──┐┌──hx──┐┌──lx──┐┃ ┃╔══pc══╗┌current─instuction────┐┃\n\r",
"║      ║│      ││      ││      ││      ││      ││      ││      │┃ ┃║      ║│                      │┃\n\r",
"╚╦═════╝└──────┘└──────┘└──────┘└──────┘└──────┘└──────┘└──────┘┃ ┃╚══════╝└──────────────────────┘┃\n\r",
" ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛ ┃┌─flags────────────────────────┐┃\n\r",
"┏━━memory━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓ ┃│                              │┃\n\r",
"┃┌─row─┬─x0─x1─x2─x3─x4─x5─x6─x7─x8─x9─xa─xb─xc─xd─xe─xf┐ ┌─st─┐┃ ┃│                              │┃\n\r",
"┃│     │                                                │ │    │┃ ┃└──────────────────────────────┘┃\n\r",
"┃│     │                                                │ │    │┃ ┃╔═debug════════════════════════╗┃\n\r",
"┃│     │                                                │ │    │┃ ┃║                              ║┃\n\r",
"┃│     │                                                │ │    │┃ ┃╚══════════════════════════════╝┃\n\r",
"┃│     │                                                │ │    │┃ ┃┌─mapped-output────────────────┐┃\n\r",
"┃│     │                                                │ │    │┃ ┃│                              │┃\n\r",
"┃│     │                                                │ │    │┃ ┃│                              │┃\n\r",
"┃│     │                                                │ │    │┃ ┃│                              │┃\n\r",
"┃│     │                                                │ │    │┃ ┃│                              │┃\n\r",
"┃│     │                                                │ │    │┃ ┃│                              │┃\n\r",
"┃│     │                                                │ │    │┃ ┃│                              │┃\n\r",
"┃│     │                                                │ │    │┃ ┃│                              │┃\n\r",
"┃│     │                                                │ │    │┃ ┃│                              │┃\n\r",
"┃│     │                                                │ │    │┃ ┃│                              │┃\n\r",
"┃│     │                                                │ │    │┃ ┃│                              │┃\n\r",
"┃│     │                                                │ │    │┃ ┃│                              │┃\n\r",
"┃│     │                                                │ │    │┃ ┃│                              │┃\n\r",
"┃│     │                                                │ │    │┃ ┃│                              │┃\n\r",
"┃│     │                                                │ │    │┃ ┃│                              │┃\n\r",
"┃│     │                                                │ │    │┃ ┃└──────────────────────────────┘┃\n\r",
"┃│     │                                                │ │    │┃ ┃╔═mapped-input═════════════════╗┃\n\r",
"┃│     │                                                │ │    │┃ ┃║                              ║┃\n\r",
"┃│     │                                                │ │    │┃ ┃║                              ║┃\n\r",
"┃│     │                                                │ │    │┃ ┃║                              ║┃\n\r",
"┃│     │                                                │ │    │┃ ┃║                              ║┃\n\r",
"┃│     │                                                │ │    │┃ ┃║                              ║┃\n\r",
"┃│     │                                                │ │    │┃ ┃║                              ║┃\n\r",
"┃│     │                                                │ │    │┃ ┃║                              ║┃\n\r",
"┃│     │                                                │ │    │┃ ┃║                              ║┃\n\r",
"┃│     │                                                │ │    │┃ ┃║                              ║┃\n\r",
"┃│     │                                                │ │    │┃ ┃║                              ║┃\n\r",
"┃│     │                                                │ │    │┃ ┃║                              ║┃\n\r",
"┃└─────┴────────────────────────────────────────────────┘ └────┘┃ ┃╚══════════════════════════════╝┃\n\r",
"┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛ ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n\r",
"╔═command══════════════════════════════════════════════════════════════════════════════════════════╗\n\r",
"║                                                                                                  ║\n\r",
"╚══════════════════════════════════════════════════════════════════════════════════════════════════╝\n\r"
};
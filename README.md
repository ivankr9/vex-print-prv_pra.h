# vex-print-prv_pra.h
include for Houdini dbg vex print

Vex functions for print data variables

Save this file to ~/houdinixx.x/vex/include/prv_pra.h

using with global disable in vex wrangles:
```
#include <prv_pra.h> 
#define dbg 1
if (dbg) prv('printed_value');
if (dbg) pra(array_to_print);

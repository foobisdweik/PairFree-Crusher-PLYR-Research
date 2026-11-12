/* Selected Master .35 functions. Static evidence only. */

/* Function at 0824551c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void route_candidate_0824551c(char *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = _DAT_08245548;
  uVar2 = _DAT_0824553c;
  if (param_1 != (char *)0x0) {
    if (*_DAT_08245544 != -1) {
      *param_1 = *_DAT_08245544;
      return;
    }
    *param_1 = '\0';
    uVar2 = uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x082eeb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_082eeb14)(_DAT_08245540,uVar2,0);
  return;
}


/* Literal references and instructions */
0824551c cbnz r0,0x08245528
0824551e mov r2,r0
08245520 ldr r1,[0x0824553c]
literal 0824553c = 60dcdf7
08245522 ldr r0,[0x08245540]
literal 08245540 = 83171ec
08245524 b.w 0x082eeb08
08245528 ldr r3,[0x08245544]
literal 08245544 = 420f43d
0824552a ldrb r3,[r3,#0x0]
0824552c cmp r3,#0xff
0824552e bne 0x08245538
08245530 movs r2,#0x0
08245532 ldr r1,[0x08245548]
literal 08245548 = 60dce48
08245534 strb r2,[r0,#0x0]
08245536 b 0x08245522
08245538 strb r3,[r0,#0x0]
0824553a bx lr
082eeb08 push {r0}
082eeb0a ldr r0,[0x082eeb14]
literal 082eeb14 = 4005845
082eeb0c mov r12,r0
082eeb0e pop {r0}
082eeb10 bx r12

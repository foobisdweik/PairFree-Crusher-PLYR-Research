/* Selected Master .35 functions. Static evidence only. */

/* Function at 081ad710 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint route_candidate_081ad710(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  switch(param_1) {
  case 3:
    uVar1 = 0x300;
    break;
  case 4:
    uVar1 = 0x400;
    break;
  case 5:
    uVar1 = 0x500;
    break;
  case 6:
    uVar1 = 0x600;
    break;
  default:
    goto LAB_081ad72a;
  }
  *puRam081ad764 = uVar1;
LAB_081ad72a:
  uVar2 = *_DAT_081ad768 >> 7;
  func_0x082ee038(_DAT_081ad770,_DAT_081ad76c,3,param_1 + -3,*_DAT_081ad768,uVar2);
  return uVar2;
}


/* Literal references and instructions */
081ad710 subs r3,r0,#0x3
081ad712 push {r0,r1,r4,lr}
081ad714 cmp r3,#0x3
081ad716 bhi 0x081ad72a
081ad718 tbb [pc,r3]
081ad72a ldr r2,[0x081ad768]
literal 081ad768 = 42080010
081ad72c ldr r1,[0x081ad76c]
literal 081ad76c = 6004b90
081ad72e ldr r2,[r2,#0x0]
081ad730 ldr r0,[0x081ad770]
literal 081ad770 = 8317534
081ad732 lsrs r4,r2,#0x7
081ad734 strd r2,r4,[sp,#0x0]
081ad738 movs r2,#0x3
081ad73a bl 0x082ee038
081ad73e mov r0,r4
081ad740 add sp,#0x8
081ad742 pop {r4,pc}

/* Function at 08241a60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void route_candidate_08241a60(undefined4 param_1,undefined4 param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uStack_c;
  
  bVar2 = 0;
  pbVar1 = _DAT_08241a8c;
  if (_DAT_08241a8c[4] != 0) {
    bVar2 = *_DAT_08241a90 ^ 1;
    pbVar1 = _DAT_08241a90;
  }
  uStack_c._1_3_ = (undefined3)((uint)param_2 >> 8);
  uStack_c = CONCAT31(uStack_c._1_3_,bVar2) & 0xffffff01;
  func_0x081def40(0x13,&uStack_c,1,pbVar1,param_1);
  func_0x082095e0(bVar2 & 1);
  return;
}


/* Literal references and instructions */
08241a60 push {r0,r1,r4,lr}
08241a62 ldr r3,[0x08241a8c]
literal 08241a8c = 4247688
08241a64 ldrb r4,[r3,#0x4]
08241a66 cbz r4,0x08241a70
08241a68 ldr r3,[0x08241a90]
literal 08241a90 = 4247690
08241a6a ldrb r4,[r3,#0x0]
08241a6c eor r4,r4,#0x1
08241a70 movs r2,#0x1
08241a72 and r4,r4,#0x1
08241a76 add r1,sp,#0x4
08241a78 movs r0,#0x13
08241a7a strb.w r4,[sp,#0x4]
08241a7e bl 0x081def40
08241a82 mov r0,r4
08241a84 bl 0x082095e0
08241a88 add sp,#0x8
08241a8a pop {r4,pc}

/* Function at 08241e60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 route_candidate_08241e60(void)

{
  return *_DAT_08241e68;
}


/* Literal references and instructions */
08241e60 ldr r3,[0x08241e68]
literal 08241e68 = 424769a
08241e62 ldrb r0,[r3,#0x0]
08241e64 bx lr

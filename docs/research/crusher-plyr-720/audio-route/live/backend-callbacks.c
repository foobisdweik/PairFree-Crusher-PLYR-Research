/* Selected Master .35 functions. Static evidence only. */

/* Function at 08246ce8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void route_candidate_08246ce8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  
  iVar4 = 0;
  iVar3 = _DAT_08246d2c;
  while( true ) {
    if (iVar4 == 6) {
      return;
    }
    piVar1 = (int *)(iVar3 + 0x38);
    iVar3 = iVar3 + 0x44;
    if (*piVar1 == param_1) break;
    iVar4 = iVar4 + 1;
  }
  puVar5 = (undefined1 *)(iVar4 * 0x44 + _DAT_08246d2c);
  if (puVar5 == (undefined1 *)0x0) {
    return;
  }
  func_0x082ee038(_DAT_08246d34,_DAT_08246d30,2,*puVar5,param_2,param_2,param_3);
  uVar2 = *puVar5;
  puVar5 = (undefined1 *)func_0x082ee408(8);
  if (puVar5 != (undefined1 *)0x0) {
    *puVar5 = uVar2;
    *(undefined4 *)(puVar5 + 4) = param_2;
    iVar3 = func_0x0823181c(0,4,0x36,1,puVar5,8,0,0);
    if (iVar3 != 0) {
      func_0x082ee4a8(puVar5);
      func_0x082eeb08(_DAT_08246c60,_DAT_08246c5c,3,uVar2,param_2,iVar3);
    }
  }
  return;
}


/* Literal references and instructions */
08246c10 push {r4,r5,r6,r7,lr}
08246c12 sub sp,#0x1c
08246c14 str r0,[sp,#0x14]
08246c16 movs r0,#0x8
08246c18 mov r5,r1
08246c1a mov r6,r2
08246c1c bl 0x082ee408
08246c20 mov r4,r0
08246c22 cbz r0,0x08246c58
08246c24 strb r5,[r0,#0x0]
08246c26 str r6,[r0,#0x4]
08246c28 movs r2,#0x8
08246c2a movs r0,#0x0
08246c2c strd r4,r2,[sp,#0x0]
08246c30 movs r1,#0x4
08246c32 movs r2,#0x36
08246c34 strd r0,r0,[sp,#0x8]
08246c38 ldr r3,[sp,#0x14]
08246c3a bl 0x0823181c
08246c3e mov r7,r0
08246c40 cbz r0,0x08246c58
08246c42 mov r0,r4
08246c44 bl 0x082ee4a8
08246c48 mov r3,r5
08246c4a movs r2,#0x3
08246c4c strd r6,r7,[sp,#0x0]
08246c50 ldr r1,[0x08246c5c]
literal 08246c5c = 60ddccd
08246c52 ldr r0,[0x08246c60]
literal 08246c60 = 83171ec
08246c54 bl 0x082eeb08
08246c58 add sp,#0x1c
08246c5a pop {r4,r5,r6,r7,pc}
08246ce8 push {r0,r1,r2,r4,r5,lr}
08246cea ldr r2,[0x08246d2c]
literal 08246d2c = 42479b8
08246cec mov r5,r1
08246cee movs r3,#0x0
08246cf0 mov r4,r2
08246cf2 cmp r3,#0x6
08246cf4 beq 0x08246d06
08246cf6 ldr r1,[r2,#0x38]
08246cf8 adds r2,#0x44
08246cfa cmp r1,r0
08246cfc bne 0x08246d0a
08246cfe movs r2,#0x44
08246d00 mla r4,r2,r3,r4
08246d04 cbnz r4,0x08246d0e
08246d06 add sp,#0xc
08246d08 pop {r4,r5,pc}
08246d0a adds r3,#0x1
08246d0c b 0x08246cf2
08246d0e str r5,[sp,#0x0]
08246d10 movs r2,#0x2
08246d12 ldrb r3,[r4,#0x0]
08246d14 ldr r1,[0x08246d30]
literal 08246d30 = 60dddc5
08246d16 ldr r0,[0x08246d34]
literal 08246d34 = 83171ec
08246d18 bl 0x082ee038
08246d1c mov r2,r5
08246d1e movs r0,#0x1
08246d20 ldrb r1,[r4,#0x0]
08246d22 add sp,#0xc
08246d24 pop.w {r4,r5,lr}
08246d28 b.w 0x08246c10

/* Function at 08246e44 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void route_candidate_08246e44(int param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((param_3 != (undefined1 *)0x0) && (1 < param_1 - 3U)) {
    func_0x082ee038(_DAT_08246e84,_DAT_08246e80,4,*param_3,param_1,param_3[0x15],param_3[0x24]);
    uVar1 = *param_3;
    uVar4 = 0;
    puVar2 = (undefined1 *)func_0x082ee408(8);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = uVar1;
      *(int *)(puVar2 + 4) = param_1;
      iVar3 = func_0x0823181c(0,4,0x36,uVar4,puVar2,8,0,0);
      if (iVar3 != 0) {
        func_0x082ee4a8(puVar2);
        func_0x082eeb08(_DAT_08246c60,_DAT_08246c5c,3,uVar1,param_1,iVar3);
      }
    }
    return;
  }
  return;
}


/* Literal references and instructions */
08246e44 push {r4,r5,lr}
08246e46 mov r5,r0
08246e48 mov r4,r2
08246e4a sub sp,#0x14
08246e4c cbz r2,0x08246e7c
08246e4e subs r3,r0,#0x3
08246e50 cmp r3,#0x1
08246e52 bls 0x08246e7c
08246e54 ldrb.w r3,[r2,#0x24]
08246e58 ldr r1,[0x08246e80]
literal 08246e80 = 60ddf23
08246e5a str r3,[sp,#0x8]
08246e5c ldrb r3,[r2,#0x15]
08246e5e strd r0,r3,[sp,#0x0]
08246e62 ldr r0,[0x08246e84]
literal 08246e84 = 83171ec
08246e64 ldrb r3,[r2,#0x0]
08246e66 movs r2,#0x4
08246e68 bl 0x082ee038
08246e6c mov r2,r5
08246e6e movs r0,#0x0
08246e70 ldrb r1,[r4,#0x0]
08246e72 add sp,#0x14
08246e74 pop.w {r4,r5,lr}
08246e78 b.w 0x08246c10
08246e7c add sp,#0x14
08246e7e pop {r4,r5,pc}

/* Function at 08246e14 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void route_candidate_08246e14(int param_1,uint param_2,undefined1 *param_3,undefined4 param_4)

{
  uint uVar1;
  
  if (param_3 != (undefined1 *)0x0) {
    uVar1 = param_2 & 0xffff | param_1 << 0x10;
    func_0x08246c10(4,*param_3,uVar1,param_4,param_1,param_2,param_3);
    func_0x082ee038(_DAT_08246e40,_DAT_08246e3c,2,*param_3,uVar1);
  }
  return;
}


/* Literal references and instructions */
08246e14 push {r0,r1,r2,r4,r5,lr}
08246e16 mov r5,r2
08246e18 cbz r2,0x08246e38
08246e1a uxth r1,r1
08246e1c orr.w r4,r1,r0, lsl #0x10
08246e20 mov r2,r4
08246e22 movs r0,#0x4
08246e24 ldrb r1,[r5,#0x0]
08246e26 bl 0x08246c10
08246e2a str r4,[sp,#0x0]
08246e2c movs r2,#0x2
08246e2e ldrb r3,[r5,#0x0]
08246e30 ldr r1,[0x08246e3c]
literal 08246e3c = 60ddec9
08246e32 ldr r0,[0x08246e40]
literal 08246e40 = 83171ec
08246e34 bl 0x082ee038
08246e38 add sp,#0xc
08246e3a pop {r4,r5,pc}

/* Function at 082190d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int route_candidate_082190d8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = param_1;
  func_0x082196f8();
  iVar3 = 0;
  iVar2 = _DAT_0821913c;
  do {
    if (iVar3 == 0x19) {
      iVar2 = 0;
LAB_0821910e:
      func_0x08219768();
      if (iVar2 == 0) {
        func_0x082ee038(_DAT_08219144,_DAT_08219140,1,param_1,uVar4,param_2,param_3);
      }
      else {
        func_0x082ee038(_DAT_08219144,_DAT_08219148,2,iVar3,param_1,param_2,param_3);
      }
      return iVar2;
    }
    uVar1 = *(ushort *)(iVar2 + 0x10);
    iVar2 = iVar2 + 0x38;
    if ((uVar1 & 1) == 0) {
      iVar2 = _DAT_0821913c + iVar3 * 0x38;
      *(undefined4 *)(_DAT_0821913c + iVar3 * 0x38) = 0x1000000;
      *(uint *)(iVar2 + 4) = uVar1 & 1;
      *(char *)(iVar2 + 8) = (char)param_1;
      *(ushort *)(iVar2 + 0x10) = uVar1 | 1;
      goto LAB_0821910e;
    }
    iVar3 = iVar3 + 1;
  } while( true );
}


/* Literal references and instructions */
082190d8 push {r0,r1,r2,r4,r5,r6,r7,lr}
082190da mov r6,r0
082190dc bl 0x082196f8
082190e0 ldr r2,[0x0821913c]
literal 0821913c = 423e790
082190e2 movs r5,#0x0
082190e4 mov r1,r2
082190e6 cmp r5,#0x19
082190e8 bne 0x082190ee
082190ea movs r4,#0x0
082190ec b 0x0821910e
082190ee ldrh r3,[r2,#0x10]
082190f0 adds r2,#0x38
082190f2 ands r0,r3,#0x1
082190f6 bne 0x08219126
082190f8 movs r2,#0x38
082190fa mov.w r7,#0x1000000
082190fe muls r2,r5
08219100 orr r3,r3,#0x1
08219104 adds r4,r1,r2
08219106 str r7,[r1,r2]
08219108 str r0,[r4,#0x4]
0821910a strb r6,[r4,#0x8]
0821910c strh r3,[r4,#0x10]
0821910e bl 0x08219768
08219112 cbnz r4,0x0821912a
08219114 mov r3,r6
08219116 movs r2,#0x1
08219118 ldr r1,[0x08219140]
literal 08219140 = 60a186e
0821911a ldr r0,[0x08219144]
literal 08219144 = 831699c
0821911c bl 0x082ee038
08219120 mov r0,r4
08219122 add sp,#0xc
08219124 pop {r4,r5,r6,r7,pc}
08219126 adds r5,#0x1
08219128 b 0x082190e6
0821912a mov r3,r5
0821912c movs r2,#0x2
0821912e ldr r1,[0x08219148]
literal 08219148 = 60a18b3
08219130 ldr r0,[0x08219144]
literal 08219144 = 831699c
08219132 str r6,[sp,#0x0]
08219134 bl 0x082ee038
08219138 b 0x08219120

/* Function at 08219250 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void route_candidate_08219250(int param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uStack_14;
  
  func_0x082196f8();
  if (param_1 == 0) {
    uVar6 = func_0x082ee038(_DAT_08219280,_DAT_0821927c,0);
  }
  else {
    uVar6 = func_0x08219ddc(param_1,param_2);
  }
  uStack_14 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar3 = (undefined4)uVar6;
  func_0x082eeb38(&uStack_14);
  piVar2 = _DAT_082197c4;
  iVar5 = *_DAT_082197c4;
  iVar4 = *_DAT_082197c8;
  func_0x082ef438(uStack_14);
  if (iVar5 == iVar4) {
    cVar1 = *_DAT_082197cc;
    if (cVar1 == '\0') {
      func_0x082ee038(_DAT_082197d4,_DAT_082197d0,0);
      uVar3 = *_DAT_082197d8;
      *piVar2 = 0;
      func_0x082ee7d8(uVar3,0,0,0);
    }
    else {
      *_DAT_082197cc = cVar1 + -1;
      func_0x082ee038(_DAT_082197d4,_DAT_082197dc,1,cVar1 + -1,uVar3);
    }
  }
  else {
    func_0x082ee038(_DAT_082197d4,_DAT_082197e0,0);
  }
  return;
}


/* Literal references and instructions */
08219250 push {r0,r1,r2,lr}
08219252 strd r1,r0,[sp,#0x0]
08219256 bl 0x082196f8
0821925a ldr r0,[sp,#0x4]
0821925c cbz r0,0x0821926e
0821925e ldr r1,[sp,#0x0]
08219260 bl 0x08219ddc
08219264 add sp,#0xc
08219266 pop.w lr
0821926a b.w 0x08219768
0821926e mov r2,r0
08219270 ldr r1,[0x0821927c]
literal 0821927c = 60a1a4e
08219272 ldr r0,[0x08219280]
literal 08219280 = 831699c
08219274 bl 0x082ee038
08219278 b 0x08219264
08219768 push {r0,r1,r4,r5,r6,lr}
0821976a add r0,sp,#0x4
0821976c bl 0x082eeb38
08219770 ldr r5,[0x082197c4]
literal 082197c4 = 423f008
08219772 ldr r3,[0x082197c8]
literal 082197c8 = 42128b0
08219774 ldr r6,[r5,#0x0]
08219776 ldr r4,[r3,#0x0]
08219778 ldr r0,[sp,#0x4]
0821977a bl 0x082ef438
0821977e cmp r6,r4
08219780 bne 0x082197b8
08219782 ldr r2,[0x082197cc]
literal 082197cc = 423f020
08219784 ldrb r4,[r2,#0x0]
08219786 cbnz r4,0x082197a6
08219788 mov r2,r4
0821978a ldr r1,[0x082197d0]
literal 082197d0 = 60a2249
0821978c ldr r0,[0x082197d4]
literal 082197d4 = 831699c
0821978e bl 0x082ee038
08219792 ldr r0,[0x082197d8]
literal 082197d8 = 423f01c
08219794 mov r3,r4
08219796 mov r2,r4
08219798 mov r1,r4
0821979a ldr r0,[r0,#0x0]
0821979c str r4,[r5,#0x0]
0821979e bl 0x082ee7d8
082197a2 add sp,#0x8
082197a4 pop {r4,r5,r6,pc}
082197a6 subs r3,r4,#0x1
082197a8 uxtb r3,r3
082197aa strb r3,[r2,#0x0]
082197ac ldr r1,[0x082197dc]
literal 082197dc = 60a2274
082197ae movs r2,#0x1
082197b0 ldr r0,[0x082197d4]
literal 082197d4 = 831699c
082197b2 bl 0x082ee038
082197b6 b 0x082197a2
082197b8 movs r2,#0x0
082197ba ldr r1,[0x082197e0]
literal 082197e0 = 60a22a3
082197bc ldr r0,[0x082197d4]
literal 082197d4 = 831699c
082197be bl 0x082ee038
082197c2 b 0x082197a2

/* Function at 0821943c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void route_candidate_0821943c(uint *param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  undefined8 uVar11;
  
  iVar8 = _DAT_082194fc;
  func_0x082ee038(_DAT_08219500,_DAT_082194f8,5,param_1,*(undefined1 *)((int)param_1 + 7),
                  (char)param_1[3],param_1[2],*(undefined1 *)((int)param_1 + 6));
  func_0x082196f8();
  uVar6 = (uint)*(byte *)((int)param_1 + 7);
  uVar5 = *(int *)(iVar8 + uVar6 * 8) + 1;
  *(uint *)(iVar8 + uVar6 * 8) = uVar5;
  *param_1 = uVar5;
  puVar9 = *(uint **)(iVar8 + uVar6 * 8 + 4);
  if (puVar9 == (uint *)0x0) {
    func_0x08219014(param_1,*(undefined1 *)((int)param_1 + 7));
    uVar4 = 0;
  }
  else if (puVar9 == param_1) {
    uVar4 = 0x11;
    param_1 = puVar9;
  }
  else {
    uVar6 = (uint)*(byte *)((int)param_1 + 7);
    iVar10 = iVar8 + uVar6 * 8;
    puVar7 = *(undefined4 **)(iVar10 + 4);
    func_0x082ee038(_DAT_08219500,_DAT_08219504,10,puVar7,*(undefined1 *)((int)puVar7 + 7),puVar7[2]
                    ,*(undefined1 *)(puVar7 + 3),*puVar7,param_1,uVar6,param_1[2],(char)param_1[3],
                    uVar5);
    puVar9 = *(uint **)(iVar10 + 4);
    bVar1 = (byte)puVar9[3];
    if ((bVar1 < (byte)param_1[3]) || ((bVar1 <= (byte)param_1[3] && (*puVar9 < *param_1)))) {
      func_0x08219388(param_1);
      uVar4 = 3;
      param_1 = *(uint **)(iVar8 + uVar6 * 8 + 4);
    }
    else {
      uVar4 = 1;
    }
  }
  uVar11 = func_0x08219074(param_1,uVar4);
  uVar4 = (undefined4)uVar11;
  func_0x082eeb38(&stack0xffffffec);
  piVar3 = _DAT_082197c4;
  iVar10 = *_DAT_082197c4;
  iVar8 = *_DAT_082197c8;
  func_0x082ef438((int)((ulonglong)uVar11 >> 0x20));
  if (iVar10 == iVar8) {
    cVar2 = *_DAT_082197cc;
    if (cVar2 == '\0') {
      func_0x082ee038(_DAT_082197d4,_DAT_082197d0,0);
      uVar4 = *_DAT_082197d8;
      *piVar3 = 0;
      func_0x082ee7d8(uVar4,0,0,0);
    }
    else {
      *_DAT_082197cc = cVar2 + -1;
      func_0x082ee038(_DAT_082197d4,_DAT_082197dc,1,cVar2 + -1,uVar4);
    }
  }
  else {
    func_0x082ee038(_DAT_082197d4,_DAT_082197e0,0);
  }
  return;
}


/* Literal references and instructions */
0821943c push {r4,r5,r6,r7,lr}
0821943e mov r4,r0
08219440 ldrb r3,[r0,#0x6]
08219442 sub sp,#0x2c
08219444 str r3,[sp,#0xc]
08219446 ldr r3,[r0,#0x8]
08219448 movs r2,#0x5
0821944a str r3,[sp,#0x8]
0821944c ldrb r3,[r0,#0xc]
0821944e ldr r1,[0x082194f8]
literal 082194f8 = 60a1d68
08219450 str r3,[sp,#0x4]
08219452 ldrb r3,[r0,#0x7]
08219454 ldr r6,[0x082194fc]
literal 082194fc = 423ed08
08219456 str r3,[sp,#0x0]
08219458 mov r3,r0
0821945a ldr r0,[0x08219500]
literal 08219500 = 831699c
0821945c bl 0x082ee038
08219460 bl 0x082196f8
08219464 ldrb r3,[r4,#0x7]
08219466 ldr.w r2,[r6,r3,lsl #0x3]
0821946a adds r2,#0x1
0821946c str.w r2,[r6,r3,lsl #0x3]
08219470 str r2,[r4,#0x0]
08219472 add.w r3,r6,r3, lsl #0x3
08219476 ldr r5,[r3,#0x4]
08219478 cbnz r5,0x08219494
0821947a ldrb r1,[r4,#0x7]
0821947c mov r0,r4
0821947e bl 0x08219014
08219482 mov r1,r5
08219484 mov r0,r4
08219486 bl 0x08219074
0821948a add sp,#0x2c
0821948c pop.w {r4,r5,r6,r7,lr}
08219490 b.w 0x08219768
08219494 cmp r5,r4
08219496 beq 0x082194f0
08219498 ldrb r1,[r4,#0x7]
0821949a ldr r0,[0x08219500]
literal 08219500 = 831699c
0821949c add.w r5,r6,r1, lsl #0x3
082194a0 ldr r3,[r5,#0x4]
082194a2 str r2,[sp,#0x20]
082194a4 ldrb r2,[r4,#0xc]
082194a6 str r4,[sp,#0x10]
082194a8 str r2,[sp,#0x1c]
082194aa ldr r2,[r4,#0x8]
082194ac lsls r7,r1,#0x3
082194ae strd r1,r2,[sp,#0x14]
082194b2 ldr r2,[r3,#0x0]
082194b4 ldr r1,[0x08219504]
literal 08219504 = 60a1dfd
082194b6 str r2,[sp,#0xc]
082194b8 ldrb r2,[r3,#0xc]
082194ba str r2,[sp,#0x8]
082194bc ldr r2,[r3,#0x8]
082194be str r2,[sp,#0x4]
082194c0 ldrb r2,[r3,#0x7]
082194c2 str r2,[sp,#0x0]
082194c4 movs r2,#0xa
082194c6 bl 0x082ee038
082194ca ldr r3,[r5,#0x4]
082194cc ldrb r1,[r4,#0xc]
082194ce ldrb r2,[r3,#0xc]
082194d0 cmp r1,r2
082194d2 bhi 0x082194e2
082194d4 bcc 0x082194de
082194d6 ldr r2,[r4,#0x0]
082194d8 ldr r3,[r3,#0x0]
082194da cmp r2,r3
082194dc bhi 0x082194e2
082194de movs r1,#0x1
082194e0 b 0x08219484
082194e2 mov r0,r4
082194e4 bl 0x08219388
082194e8 adds r3,r6,r7
082194ea movs r1,#0x3
082194ec ldr r0,[r3,#0x4]
082194ee b 0x08219486
082194f0 movs r1,#0x11
082194f2 mov r0,r5
082194f4 b 0x08219486
08219768 push {r0,r1,r4,r5,r6,lr}
0821976a add r0,sp,#0x4
0821976c bl 0x082eeb38
08219770 ldr r5,[0x082197c4]
literal 082197c4 = 423f008
08219772 ldr r3,[0x082197c8]
literal 082197c8 = 42128b0
08219774 ldr r6,[r5,#0x0]
08219776 ldr r4,[r3,#0x0]
08219778 ldr r0,[sp,#0x4]
0821977a bl 0x082ef438
0821977e cmp r6,r4
08219780 bne 0x082197b8
08219782 ldr r2,[0x082197cc]
literal 082197cc = 423f020
08219784 ldrb r4,[r2,#0x0]
08219786 cbnz r4,0x082197a6
08219788 mov r2,r4
0821978a ldr r1,[0x082197d0]
literal 082197d0 = 60a2249
0821978c ldr r0,[0x082197d4]
literal 082197d4 = 831699c
0821978e bl 0x082ee038
08219792 ldr r0,[0x082197d8]
literal 082197d8 = 423f01c
08219794 mov r3,r4
08219796 mov r2,r4
08219798 mov r1,r4
0821979a ldr r0,[r0,#0x0]
0821979c str r4,[r5,#0x0]
0821979e bl 0x082ee7d8
082197a2 add sp,#0x8
082197a4 pop {r4,r5,r6,pc}
082197a6 subs r3,r4,#0x1
082197a8 uxtb r3,r3
082197aa strb r3,[r2,#0x0]
082197ac ldr r1,[0x082197dc]
literal 082197dc = 60a2274
082197ae movs r2,#0x1
082197b0 ldr r0,[0x082197d4]
literal 082197d4 = 831699c
082197b2 bl 0x082ee038
082197b6 b 0x082197a2
082197b8 movs r2,#0x0
082197ba ldr r1,[0x082197e0]
literal 082197e0 = 60a22a3
082197bc ldr r0,[0x082197d4]
literal 082197d4 = 831699c
082197be bl 0x082ee038
082197c2 b 0x082197a2

/* Selected Master .35 functions. Pointer-derived MCU mapping. Static evidence only. */

/* function at 0824d4a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint ds_0824d4a8(void)

{
  uint uVar1;
  undefined2 auStack_14 [4];
  
  auStack_14[0] = 0x101;
  uVar1 = ds_081f8c14(_DAT_0824d4e8,auStack_14,2,0,0,100);
  if (uVar1 == 0) {
    func_0x082ee038(_DAT_0824d4f0,_DAT_0824d4ec,0);
  }
  else {
    func_0x082ee9d8(_DAT_0824d4f0,_DAT_0824d4f4,0);
  }
  return uVar1 & 0xff;
}


/* function at 0824d4f8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint ds_0824d4f8(void)

{
  uint3 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined2 auStack_1c [2];
  char cStack_18;
  char cStack_17;
  undefined1 uStack_16;
  byte bStack_15;
  byte bStack_14;
  byte bStack_13;
  
  auStack_1c[0] = 0x201;
  uVar2 = *_DAT_0824d5d4;
  cStack_18 = (char)uVar2;
  cStack_17 = (char)((uint)uVar2 >> 8);
  uStack_16 = (undefined1)((uint)uVar2 >> 0x10);
  bStack_15 = (byte)((uint)uVar2 >> 0x18);
  bStack_14 = (byte)*(undefined2 *)(_DAT_0824d5d4 + 1);
  bStack_13 = (byte)((ushort)*(undefined2 *)(_DAT_0824d5d4 + 1) >> 8);
  ds_081f8c14(_DAT_0824d5d8,auStack_1c,2,0,0,100);
  func_0x082ee498(10);
  iVar3 = ds_081f8c14(_DAT_0824d5d8,0,0,&cStack_18,6,100);
  if (iVar3 == 0) {
    if (cStack_18 == '\x02') {
      uVar1 = CONCAT12(bStack_15,CONCAT11(uStack_16,cStack_17));
      uVar4 = CONCAT13(bStack_14,uVar1) << 0x18 | ((uVar1 & 0xff00) >> 8) << 0x10 |
              (uint)bStack_15 << 8 | (uint)bStack_14;
      func_0x082ee038(_DAT_0824d5e0,_DAT_0824d5dc,2,2,uVar4);
    }
    else if ((cStack_18 == '\x01') && (cStack_17 == '\x02')) {
      uVar1 = CONCAT12(bStack_14,CONCAT11(bStack_15,uStack_16));
      uVar4 = CONCAT13(bStack_13,uVar1) << 0x18 | ((uVar1 & 0xff00) >> 8) << 0x10 |
              (uint)bStack_14 << 8 | (uint)bStack_13;
      func_0x082ee038(_DAT_0824d5e0,_DAT_0824d5e4,3,1,2,uVar4);
    }
    else {
      func_0x082ee038(_DAT_0824d5e0,_DAT_0824d5e8,6,cStack_18,cStack_17,uStack_16,bStack_15,
                      bStack_14,bStack_13);
      aux_0823181c(0,1,1,0xbc,0,0,0,100);
      uVar4 = 0xaaaaaaaa;
    }
  }
  else {
    func_0x082ee038(_DAT_0824d5e0,_DAT_0824d5ec,0);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}


/* function at 0824d9cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ds_0824d9cc(void)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [68];
  
  func_0x0824d808();
  func_0x0824d85c();
  func_0x0824d8c0();
  func_0x0824d944();
  func_0x082528d0(auStack_60,0,0x40);
  func_0x082528d0(_DAT_0824db04,0,0x40);
  piVar2 = _DAT_0824db08;
  iVar1 = _DAT_0824db04;
  uStack_68 = 0xa0;
  *_DAT_0824db08 = *_DAT_0824db08 + 1;
  func_0x082ee988(iVar1,&uStack_68,4);
  func_0x082ee988(_DAT_0824db0c,piVar2,4);
  func_0x081ab610(_DAT_0824db10,auStack_60,0x30);
  uVar4 = _DAT_0824db18;
  puVar3 = _DAT_0824db14;
  uStack_64 = 0;
  *_DAT_0824db14 = 0x1600;
  func_0x082ee988(uVar4,&uStack_64,4);
  func_0x082ee988(_DAT_0824db1c,puVar3,4);
  func_0x082ee988(_DAT_0824db20,auStack_60,0x30);
  func_0x082ee038(_DAT_0824db28,_DAT_0824db24,4,uStack_68,*piVar2,uStack_64,*puVar3);
  func_0x0824d7d0(500);
  iVar1 = _DAT_0824db04;
  iVar7 = _DAT_0824db04 + 4;
  for (uVar6 = 0x30; uVar6 < *puVar3; uVar6 = uVar6 + 0x38) {
    func_0x082528d0(auStack_60,0,0x40);
    func_0x082528d0(iVar1,0,0x40);
    uStack_68 = 0;
    *piVar2 = *piVar2 + 1;
    func_0x082ee988(iVar1,&uStack_68,4);
    func_0x082ee988(iVar7,piVar2,4);
    func_0x082ee038(_DAT_0824db28,_DAT_0824db2c,3,uStack_68,*piVar2,*puVar3 - uVar6);
    if (*puVar3 - uVar6 < 0x39) {
      func_0x081ab610(uVar6 + 0x87ec000,auStack_60,*puVar3 - uVar6);
      iVar5 = *puVar3 - uVar6;
    }
    else {
      func_0x081ab610(uVar6 + 0x87ec000,auStack_60,0x38);
      iVar5 = 0x38;
    }
    func_0x082ee988(_DAT_0824db18,auStack_60,iVar5);
    func_0x0824d7d0(100);
  }
  return;
}


/* function at 08243d24 */

void ds_08243d24(int param_1)

{
  undefined4 uStack_1c;
  undefined2 auStack_18 [8];
  
  func_0x082528d0(auStack_18,0,0x10);
  if (param_1 == 0) {
    uStack_1c = 0x32;
  }
  else {
    uStack_1c = 0x31;
  }
  auStack_18[0] = 2;
  func_0x082439a4(&uStack_1c,0);
  return;
}


/* listing 0823a29c..0823a2f4 (linear sweep) */
0823a29c ldr.w r7,[r1],#0x4
0823a2a0 adds r7,r2,r7
0823a2a2 beq 0x0823a2b4
0823a2a4 mul r2,r12,r2
0823a2a8 udiv r2,r2,r7
0823a2ac uxtb r2,r2
0823a2ae cmp r3,r2
0823a2b0 it cc
0823a2b2 mov.cc r3,r2
0823a2b4 cmp r0,r1
0823a2b6 bne 0x0823a29a
0823a2b8 lsls r3,r3,#0x8
0823a2ba orr r3,r3,#0x2
0823a2be movs r2,#0x2
0823a2c0 movs r0,#0x18
0823a2c2 add r1,sp,#0x24
0823a2c4 strh.w r3,[sp,#0x24]
0823a2c8 bl 0x0823ffc8
0823a2cc b 0x0823a082
0823a2ce movs r1,#0x1
0823a2d0 mov r0,r1
0823a2d2 bl 0x0824d428
0823a2d6 movs r1,#0x1
0823a2d8 movs r0,#0x0
0823a2da bl 0x0824d428
0823a2de movs r1,#0x0
0823a2e0 movs r0,#0x2
0823a2e2 bl 0x0824d428
0823a2e6 b 0x0823a184
0823a2e8 bl 0x08243c58
0823a2ec b 0x0823a184
0823a2ee movs r1,#0x20
0823a2f0 movs r0,#0x29
0823a2f2 bl 0x0824348e

/* listing 0824a91c..0824a944 (linear sweep) */
0824a91c movw r0,#0x133
0824a920 mov r1,r3
0824a922 ldrb r2,[r2,#0x0]
0824a924 bl 0x081ba188
0824a928 movs r2,#0x0
0824a92a ldr r1,[0x0824ab0c]
0824a92c ldr r0,[0x0824aafc]
0824a92e bl 0x082ee038
0824a932 bl 0x0824d388
0824a936 bl 0x0824cee0
0824a93a movs r0,#0x0
0824a93c bl 0x0824a208
0824a940 bl 0x0824db30
0824a944 movs r1,#0x2

/* listing 0824add0..0824adfc (linear sweep) */
0824add0 b 0x0824a8b2
0824add2 bl 0x0824a844
0824add6 movs r4,#0x0
0824add8 b 0x0824a8b2
0824adda bl 0x0824a4c0
0824adde movs r4,#0x1
0824ade0 b 0x0824a8b2
0824ade2 bl 0x08242518
0824ade6 movs r4,#0x0
0824ade8 b 0x0824a8b2
0824adea bl 0x0824d3cc
0824adee movs r4,#0x0
0824adf0 b 0x0824a8b2
0824adf2 bl 0x0824d4f8
0824adf6 movs r4,#0x0
0824adf8 b 0x0824a8b2
0824adfa uxtb r0,r4
0824adfc cmp r0,#0x5

/* listing 0824bd2e..0824bd80 (linear sweep) */
0824bd2e bl 0x08241b4c
0824bd32 ldr r3,[0x0824be48]
0824bd34 mov r5,r0
0824bd36 ldrb r4,[r3,#0x0]
0824bd38 cbnz r4,0x0824bd70
0824bd3a bl 0x0824d664
0824bd3e cmp r0,#0x2
0824bd40 bne 0x0824bd70
0824bd42 ldrb r0,[r5,#0x4]
0824bd44 eor r0,r0,#0x1
0824bd48 bl 0x08243d24
0824bd4c ldrb r0,[r5,#0x4]
0824bd4e eor r0,r0,#0x1
0824bd52 bl 0x08241b60
0824bd56 ldrb r0,[r5,#0x4]
0824bd58 bl 0x082401f8
0824bd5c movs r3,#0x8b
0824bd5e movs r2,#0x1
0824bd60 movs r1,#0x3
0824bd62 mov r0,r4
0824bd64 strd r4,r4,[sp,#0x8]
0824bd68 strd r4,r4,[sp,#0x0]
0824bd6c bl 0x0823181c
0824bd70 movs r2,#0x0
0824bd72 ldr r1,[0x0824be50]
0824bd74 ldr r0,[0x0824be24]
0824bd76 bl 0x082ee038
0824bd7a movs r4,#0x0
0824bd7c b.w 0x0824a8b2
0824bd80 bl 0x08243e28

/* listing 0824db3c..0824db80 (linear sweep) */
0824db3c bl 0x082edf58
0824db40 str r0,[r4,#0x0]
0824db42 movs r3,#0x5
0824db44 movs r2,#0x1
0824db46 ldr r1,[0x0824db80]
0824db48 ldr r0,[0x0824db84]
0824db4a bl 0x082ee038
0824db4e bl 0x0824d4f8
0824db52 cmp r0,#0x5
0824db54 beq 0x0824db78
0824db56 cmp.w r0,#0xaaaaaaaa
0824db5a beq 0x0824db78
0824db5c movs r2,#0x0
0824db5e ldr r1,[0x0824db88]
0824db60 ldr r0,[0x0824db84]
0824db62 bl 0x082ee038
0824db66 bl 0x0824d4a8
0824db6a movs r0,#0x64
0824db6c bl 0x082ee498
0824db70 pop.w {r4,lr}
0824db74 b.w 0x0824d9cc
0824db78 pop {r4,pc}
0824db7a nop
0824db7c ??
0824db7e lsls r0,r4,#0x10
0824db80 cmp r2,r1

/* listing 0824d6a8..0824d6d6 (linear sweep) */
0824d6a8 push {r4,lr}
0824d6aa bl 0x0824d664
0824d6ae mov r4,r0
0824d6b0 mov r3,r0
0824d6b2 movs r2,#0x1
0824d6b4 ldr r1,[0x0824d6d0]
0824d6b6 ldr r0,[0x0824d6d4]
0824d6b8 bl 0x082ee038
0824d6bc cmp r4,#0x2
0824d6be bne 0x0824d6c8
0824d6c0 pop.w {r4,lr}
0824d6c4 b.w 0x0824d5f0
0824d6c8 pop.w {r4,lr}
0824d6cc b.w 0x0824d628
0824d6d0 subs r5,#0x7a
0824d6d2 lsls r6,r1,#0x18
0824d6d4 strb r4,[r5,#0x7]
0824d6d6 lsrs r1,r6,#0x20

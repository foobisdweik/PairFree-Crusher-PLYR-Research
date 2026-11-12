/* Selected Master .35 functions. Pointer-derived MCU mapping. Static evidence only. */

/* function at 0824cbe0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ds_0824cbe0(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  bVar1 = *_DAT_0824cc1c;
  uVar2 = (uint)bVar1;
  if (uVar2 != 0xff) {
    if (uVar2 != *_DAT_0824cc20) {
      uVar4 = *_DAT_0824cc20 + 0x14;
      if (uVar4 < uVar2) {
        bVar1 = (byte)uVar4;
      }
      *_DAT_0824cc20 = bVar1;
      func_0x0824d104();
      uVar5 = *_DAT_0824cc24;
      uVar3 = func_0x082eefe8();
      func_0x082ef238(uVar5,1,uVar3,0,0,param_2);
    }
  }
  return;
}


/* function at 0824cd08 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ds_0824cd08(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  byte abStack_92 [2];
  uint uStack_90;
  byte abStack_84 [108];
  
  abStack_84[0] = 0;
  abStack_84[1] = 0;
  abStack_84[2] = 0;
  abStack_84[3] = 0;
  func_0x082528d0(abStack_84 + 4,0,0x66);
  iVar2 = ds_0824d1fc(abStack_84 + 1,0x69);
  uVar3 = _DAT_0824cd94;
  if (iVar2 != 0) {
    func_0x082ee988(abStack_84 + param_1 * 0xf + -0xe,param_2,param_3);
    uVar1 = _DAT_0824cd9c;
    uVar3 = _DAT_0824cd98;
    for (iVar2 = 1; iVar2 != 0x6a; iVar2 = iVar2 + 1) {
      uStack_90 = (uint)abStack_84[iVar2];
      func_0x082ee038(uVar3,uVar1,2,iVar2);
    }
    iVar2 = func_0x0824d23c(abStack_84,0x6a);
    uVar3 = _DAT_0824cda0;
    if (iVar2 != 0) {
      func_0x0824d1ec(0);
      return 1;
    }
  }
  func_0x082ee9d8(_DAT_0824cd98,uVar3,0);
  func_0x0824d1ec(0);
  return 0;
}


/* function at 0824cda4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ds_0824cda4(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_9a [6];
  uint uStack_94;
  undefined4 uStack_8c;
  undefined1 auStack_88 [104];
  
  uStack_8c = 0;
  func_0x082528d0(auStack_88,0,0x66);
  iVar3 = ds_0824d1fc((int)&uStack_8c + 1,0x69);
  uVar2 = _DAT_0824ce3c;
  uVar1 = _DAT_0824ce38;
  if (iVar3 == 0) {
    func_0x082eeb08(_DAT_0824ce38,_DAT_0824ce34,0);
  }
  else {
    for (iVar3 = 1; iVar3 != 0x6a; iVar3 = iVar3 + 1) {
      func_0x082ee038(uVar1,uVar2,2,iVar3,auStack_88[iVar3 + -4]);
    }
    uStack_94 = (8 - param_1) * 0xf;
    if (param_3 <= uStack_94) {
      uStack_94 = param_3;
    }
    func_0x082528d0(param_2,0);
    func_0x082ee988(param_2,auStack_9a + param_1 * 0xf,uStack_94);
  }
  func_0x0824d1ec(0);
  return;
}


/* function at 0824ceb4 */

void ds_0824ceb4(byte param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  byte bStack_9;
  undefined4 uStack_8;
  
  uStack_8 = param_3;
  bStack_9 = param_1;
  uVar1 = func_0x0824d2dc();
  if (bStack_9 != uVar1) {
    ds_0824d278((uint)bStack_9);
    func_0x081c6324(0xf673,&bStack_9,1);
  }
  return;
}


/* function at 0824cfb8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0824cfb8(void)

{
  undefined4 in_r3;
  
  func_0x0824cf2c(0x45,0);
  func_0x082ee498(0x28);
                    /* WARNING: Could not recover jumptable at 0x082ee040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_082ee044)(_DAT_0824cfdc,_DAT_0824cfd8,0,in_r3);
  return;
}


/* function at 0824cff0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ds_0824cff0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_24 [5];
  
  puVar3 = auStack_24;
  puVar4 = _DAT_0824d020;
  do {
    uVar1 = *puVar4;
    uVar2 = puVar4[1];
    puVar4 = puVar4 + 2;
    *puVar3 = uVar1;
    puVar3[1] = uVar2;
    puVar3 = puVar3 + 2;
  } while (puVar4 != _DAT_0824d020 + 4);
  *puVar3 = *puVar4;
  func_0x082ee988(_DAT_0824d024,auStack_24,0x14);
  return;
}


/* function at 0824d106 */

/* WARNING: Possible PIC construction at 0x0824d132: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0824d136) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ds_0824d106(uint param_1)

{
  int iVar1;
  undefined2 extraout_var;
  uint uVar2;
  bool in_ZR;
  bool in_CY;
  undefined1 uStack_28;
  undefined3 uStack_27;
  undefined4 uStack_24;
  uint uStack_20;
  
  if (in_CY && !in_ZR) {
    param_1 = 100;
  }
  else if (param_1 < 5) {
    uVar2 = 0x80;
    goto LAB_0824d120;
  }
  uVar2 = (int)(param_1 - 4) / 5;
  if (0x13 < uVar2) {
    uVar2 = 0x13;
  }
  uVar2 = (uint)*(byte *)(_DAT_0824d14c + uVar2);
LAB_0824d120:
  func_0x082ee038(_DAT_0824d154,_DAT_0824d150,2,param_1);
  uStack_24 = 2;
  _uStack_28 = CONCAT31(CONCAT21(extraout_var,(char)uVar2),0x2c);
  uStack_20 = uVar2;
  iVar1 = ds_081f8c14(_DAT_0824cf64,&uStack_28,2,0,0,100);
  if (iVar1 != 0) {
    func_0x082eeb08(_LAB_0824cf6c,_LAB_0824cf68,2,0x2c,uVar2);
  }
  return;
}


/* function at 0824d194 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ds_0824d194(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uStack_c;
  
  uVar1 = param_1 - 0x900U & 0xffff;
  uStack_c = param_3;
  if (uVar1 < 0xf724) {
    iVar2 = func_0x081c62f8(uVar1,param_2,&uStack_c,param_1,param_1);
    if (iVar2 == 0) {
      func_0x082ee038(_DAT_0824d1e0,_DAT_0824d1e8,0);
      return 1;
    }
    func_0x082ee9d8(_DAT_0824d1e0,_DAT_0824d1e4,0);
  }
  else {
    func_0x082ee9d8(_DAT_0824d1e0,_DAT_0824d1dc,1);
  }
  return 0;
}


/* function at 0824c864 */

byte * ds_0824c864(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint *puVar4;
  byte *pbVar5;
  undefined4 uVar6;
  byte *pbVar7;
  ushort uVar8;
  uint uVar9;
  
  if ((param_1[1] != 0x5a) && (param_1[1] != 0x5c)) {
LAB_0824c8bc:
    return (byte *)0x0;
  }
  switch(*(ushort *)(param_1 + 4) - 0x2cd0) {
  case 0:
    puVar4 = (uint *)func_0x082ee408(5);
    *puVar4 = (uint)param_1[6];
    *(undefined1 *)(puVar4 + 1) = 0;
    aux_0823181c(0,3,1,0x89,puVar4,5,0,0);
    uVar6 = 0x2cd0;
    bVar1 = *param_1;
    goto code_r0x0824c8f0;
  case 1:
    pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2cd1,2,param_3,param_2,param_3,param_4);
    if (pbVar5 == (byte *)0x0) {
      return (byte *)0x0;
    }
    *pbVar5 = 0;
    bVar3 = func_0x0824ccbc();
    pbVar5[1] = bVar3;
    return pbVar5;
  case 2:
    func_0x0824a308(param_1[6] != 0);
    uVar6 = 0x2cd2;
    bVar3 = *param_1;
    goto code_r0x0824c918;
  case 3:
    pbVar7 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2cd3,1,param_3,param_2,param_3,param_4);
    uVar9 = *(ushort *)(param_1 + 2) - 3 & 0xff;
    if (0x11 < (uVar9 * 0xef & 0xff)) {
      func_0x082ee038(uRam0824cacc,uRam0824cac8,1);
code_r0x0824c956:
      bVar3 = 1;
      goto code_r0x0824c958;
    }
    uVar2 = (8 - (uint)param_1[6]) * 0xf;
    if ((int)uVar2 < (int)uVar9) {
      uVar9 = uVar2 & 0xff;
    }
    func_0x0824ce46((uint)param_1[6],param_1 + 7,uVar9);
    uVar6 = uRam0824cad0;
    goto code_r0x0824c978;
  case 4:
    func_0x082ee038(uRam0824cacc,uRam0824cad4,0,*(ushort *)(param_1 + 4) - 0x2cd0,param_1);
    func_0x0824ce40();
    pbVar5 = (byte *)func_0x082ee408(6);
    bVar3 = param_1[6];
    pbVar5[1] = (byte)param_3;
    *pbVar5 = bVar3;
    *(uint *)(pbVar5 + 2) = (uint)param_1[7];
    aux_0823181c(0,3,1,0xb9,pbVar5,6,0,0x28);
    bVar1 = *param_1;
    uVar6 = 0x2cd4;
code_r0x0824c8f0:
    bVar3 = 0;
    pbVar5 = (byte *)func_0x081f3f5e(bVar1 >> 4,0x5b,uVar6,1,param_3);
    if (pbVar5 == (byte *)0x0) {
      return (byte *)0x0;
    }
code_r0x0824c8fe:
    *pbVar5 = bVar3;
    return pbVar5;
  case 5:
    bVar3 = func_0x0824ce88(param_1[6] - 1);
    *pbRam0824cad8 = param_1[6];
    pbVar5 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2cd5,1,param_3);
    if (pbVar5 == (byte *)0x0) {
      return (byte *)0x0;
    }
    bVar3 = bVar3 ^ 1;
    goto code_r0x0824c8fe;
  case 6:
    pbVar7 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2cd6,1,param_3,param_2,param_3,param_4);
    uVar8 = *(short *)(param_1 + 2) - 3U & 0xff;
    uVar9 = param_1[6] - 1 & 0xff;
    if ((uVar8 != 0x69) || (3 < param_1[6] - 0x21)) {
      func_0x082eeb08(uRam0824cacc,uRam0824cadc,2,uVar9,uVar8);
      if (pbVar7 == (byte *)0x0) {
        return (byte *)0x0;
      }
      goto code_r0x0824c956;
    }
    func_0x0824ccc8(uVar9,param_1 + 7);
    uVar6 = uRam0824cae0;
code_r0x0824c978:
    func_0x082ee038(uRam0824cacc,uVar6,0);
    goto code_r0x0824c97e;
  case 7:
    func_0x082ee038(uRam0824cacc,uRam0824cae4,1,param_1[6],param_1);
    ds_0824ceb4(param_1[6]);
    bVar3 = *param_1;
    uVar6 = 0x2cd7;
code_r0x0824c918:
    pbVar7 = (byte *)func_0x081f3f5e(bVar3 >> 4,0x5b,uVar6,1,param_3);
code_r0x0824c97e:
    if (pbVar7 == (byte *)0x0) {
      return (byte *)0x0;
    }
    break;
  case 8:
    pbVar7 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2cd8,2,param_3,param_2,param_3,param_4);
    uVar6 = func_0x0824cf26();
    func_0x082ee038(uRam0824cacc,uRam0824cae8,1,uVar6);
    if (pbVar7 != (byte *)0x0) {
      pbVar7[1] = (byte)uVar6;
    }
    break;
  case 9:
    pbVar7 = (byte *)func_0x081f3f5e(*param_1 >> 4,0x5b,0x2cd9,2,param_3,param_2,param_3,param_4);
    pbVar5 = pbRam0824cad8;
    func_0x082ee038(uRam0824cacc,uRam0824caec,1,*pbRam0824cad8);
    if (pbVar7 != (byte *)0x0) {
      pbVar7[1] = *pbVar5;
    }
    break;
  default:
    goto LAB_0824c8bc;
  }
  bVar3 = 0;
code_r0x0824c958:
  *pbVar7 = bVar3;
  return pbVar7;
}


/* function at 0824a2f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool ds_0824a2f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char in_ZR;
  
  if (in_ZR != '\0') {
    func_0x082ee988(param_1,_DAT_0824a304,param_3,param_4,param_4);
  }
  return in_ZR != '\0';
}


/* function at 081f77e8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * ds_081f77e8(int param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  int iVar6;
  
  puVar3 = (undefined1 *)func_0x081f3f28(0x5b,*(undefined2 *)(param_1 + 4),1,param_3);
  uVar5 = _DAT_081f789c;
  if (puVar3 == (undefined1 *)0x0) goto LAB_081f7800;
  *puVar3 = 0xff;
  if (*(short *)(param_1 + 4) == 0x1100) {
    iVar6 = func_0x081d304c((char)*(undefined2 *)(param_1 + 6),1,0);
  }
  else {
    if (*(short *)(param_1 + 4) != 0x1101) {
      return puVar3;
    }
    func_0x082ee038(_DAT_081f78a0,_DAT_081f78a4,1,*(undefined2 *)(param_1 + 6));
    uVar1 = *(ushort *)(param_1 + 6);
    if (uVar1 == 0xa6) {
      iVar6 = func_0x081f77a0();
    }
    else if (uVar1 < 0xa7) {
      if (uVar1 == 0xa4) {
        uVar5 = 1;
      }
      else {
        if (uVar1 != 0xa5) goto LAB_081f784e;
        uVar5 = 0;
      }
      iVar6 = func_0x081f7764(uVar5);
    }
    else {
      if (uVar1 == 0xb4) {
        uVar2 = func_0x081ad4a2();
        goto LAB_081f7882;
      }
      if (uVar1 == 0xb5) {
        uVar2 = func_0x0824ccbc();
        goto LAB_081f7882;
      }
LAB_081f784e:
      puVar4 = (undefined2 *)func_0x082ee408(2);
      uVar5 = _DAT_081f78a8;
      if (puVar4 == (undefined2 *)0x0) {
LAB_081f7800:
        func_0x082eeb08(_DAT_081f78a0,uVar5,0);
        return puVar3;
      }
      func_0x082528d0(puVar4,0,2);
      *puVar4 = *(undefined2 *)(param_1 + 6);
      iVar6 = func_0x081f42d0(0x1b,puVar4);
    }
  }
  if (iVar6 != 0) {
    return puVar3;
  }
  uVar2 = 0;
LAB_081f7882:
  *puVar3 = uVar2;
  return puVar3;
}


/* listing 0824cc2c..0824cd06 (linear sweep) */
0824cc2c movs r0,#0x0
0824cc2e b.w 0x0824cfe0
0824cc32 movs r0,#0x1
0824cc34 b.w 0x0824cfe0
0824cc38 ldr r3,[0x0824cc54]
0824cc3a ldr r2,[0x0824cc58]
0824cc3c ldrb r3,[r3,#0x0]
0824cc3e ldrb r0,[r2,#0x0]
0824cc40 cmp r3,r0
0824cc42 bcs 0x0824cc50
0824cc44 subs r0,r0,r3
0824cc46 cmp r0,#0x31
0824cc48 ite le
0824cc4a mov.le r0,#0x0
0824cc4c mov.gt r0,#0x1
0824cc4e bx lr
0824cc50 movs r0,#0x0
0824cc52 bx lr
0824cc54 ??
0824cc56 lsls r0,r4,#0x10
0824cc58 ??
0824cc5a lsls r0,r4,#0x10
0824cc5c push {r0,r1,r2,r4,r5,lr}
0824cc5e ldr r5,[0x0824cca4]
0824cc60 ldr r4,[0x0824cca8]
0824cc62 ldr r3,[r5,#0x0]
0824cc64 strb r0,[r4,#0x0]
0824cc66 cbnz r3,0x0824cc78
0824cc68 ldr r2,[0x0824ccac]
0824cc6a movs r1,#0x64
0824cc6c str r2,[sp,#0x0]
0824cc6e ldr r0,[0x0824ccb0]
0824cc70 mov r2,r3
0824cc72 bl 0x082edf08
0824cc76 str r0,[r5,#0x0]
0824cc78 bl 0x0824cc38
0824cc7c cbz r0,0x0824cc98
0824cc7e movs r0,#0x0
0824cc80 bl 0x0824cbe0
0824cc84 movs r3,#0x0
0824cc86 movs r1,#0xf
0824cc88 str r3,[sp,#0x0]
0824cc8a movs r0,#0x23
0824cc8c movs r3,#0x1
0824cc8e ldr r2,[0x0824cca8]
0824cc90 bl 0x0823e550
0824cc94 add sp,#0xc
0824cc96 pop {r4,r5,pc}
0824cc98 ldrb r0,[r4,#0x0]
0824cc9a ldr r3,[0x0824ccb4]
0824cc9c strb r0,[r3,#0x0]
0824cc9e bl 0x0824d104
0824cca2 b 0x0824cc84
0824cca4 ldrb r0,[r7,#0x10]
0824cca6 lsls r4,r4,#0x10
0824cca8 ??
0824ccaa lsls r0,r4,#0x10
0824ccac ldmia r3!,{r0,r5,r6,r7}
0824ccae lsrs r4,r4,#0x20
0824ccb0 bic r8,r6,#0xaf0000
0824ccb4 ??
0824ccb6 lsls r0,r4,#0x10
0824ccb8 b.w 0x0824cc5c
0824ccbc ldr r3,[0x0824ccc4]
0824ccbe ldrb r0,[r3,#0x0]
0824ccc0 bx lr
0824ccc2 nop
0824ccc4 ??
0824ccc6 lsls r0,r4,#0x10
0824ccc8 push {r4,lr}
0824ccca sub.w r4,r0,#0x20
0824ccce cmp r4,#0x3
0824ccd0 bls 0x0824cce0
0824ccd2 movs r2,#0x0
0824ccd4 ldr r1,[0x0824ccf4]
0824ccd6 ldr r0,[0x0824ccf8]
0824ccd8 bl 0x082ee9d8
0824ccdc movs r0,#0x0
0824ccde pop {r4,pc}
0824cce0 cmp r2,#0x69
0824cce2 beq 0x0824ccea
0824cce4 movs r2,#0x0
0824cce6 ldr r1,[0x0824ccfc]
0824cce8 b 0x0824ccd6
0824ccea pop.w {r4,lr}
0824ccee b.w 0x0824d158
0824ccf2 nop
0824ccf4 cmp r7,#0x75
0824ccf6 lsls r6,r1,#0x18
0824ccf8 strb r4,[r6,#0x14]
0824ccfa lsrs r1,r6,#0x20
0824ccfc cmp r7,#0xb8
0824ccfe lsls r6,r1,#0x18
0824cd00 movs r2,#0x69
0824cd02 b.w 0x0824d194
0824cd06 movs r0,r0

/* listing 0824d000..0824d030 (linear sweep) */
0824d000 ldr r0,[r3,#0x0]
0824d002 ldr r1,[r3,#0x4]
0824d004 adds r3,#0x8
0824d006 stmia r4!,{r0,r1}
0824d008 cmp r3,r6
0824d00a mov r2,r4
0824d00c bne 0x0824cffe
0824d00e ldr r0,[r3,#0x0]
0824d010 movs r2,#0x14
0824d012 str r0,[r4,#0x0]
0824d014 mov r1,r5
0824d016 ldr r0,[0x0824d024]
0824d018 bl 0x082ee988
0824d01c add sp,#0x18
0824d01e pop {r4,r5,r6,pc}
0824d020 bics r8,r2,#0xaf0000
0824d024 ldrb r4,[r7,#0x10]
0824d026 lsls r4,r4,#0x10
0824d028 movs r3,#0x14
0824d02a push {r0,r1,r2,r4,r5,lr}
0824d02c movw r0,#0xf5fd
0824d030 ldr r1,[0x0824d0b4]

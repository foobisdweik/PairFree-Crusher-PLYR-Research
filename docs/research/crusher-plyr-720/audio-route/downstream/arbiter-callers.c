/* Selected Master .35 functions. Pointer-derived MCU mapping. Static evidence only. */

/* function at 081f8c14 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ds_081f8c14(int *param_1,int param_2,int param_3,int param_4,int param_5,undefined2 param_6)

{
  int iVar1;
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  int *piStack_38;
  undefined1 uStack_34;
  int iStack_30;
  int iStack_2c;
  uint uStack_28;
  int iStack_24;
  uint uStack_20;
  int iStack_1c;
  
  func_0x082528d0(auStack_40,0,0x28);
  if (*param_1 == 0) {
    func_0x0825442c(_DAT_081f8cfc + 0x44,_DAT_081f8cfc,0xfc);
  }
  auStack_40[0] = *(undefined1 *)((int)param_1 + 5);
  uStack_34 = *(undefined1 *)((int)param_1 + 7);
  uStack_20 = (uint)(param_5 != 0);
  iStack_1c = param_5;
  uStack_28 = (uint)(param_3 != 0);
  if (param_5 == 0) {
    iStack_2c = 0;
  }
  else {
    iStack_2c = param_1[2];
  }
  if (param_3 == 0) {
    iStack_30 = 0;
  }
  else {
    iStack_30 = param_1[3];
  }
  uStack_3c = _DAT_081f8d00;
  for (iVar1 = 0; iVar1 != param_3; iVar1 = iVar1 + 1) {
    *(undefined1 *)(param_1[3] + iVar1) = *(undefined1 *)(param_2 + iVar1);
  }
  *(undefined1 *)(param_1 + 1) = 0;
  piStack_38 = param_1;
  iStack_24 = param_3;
  iVar1 = func_0x081acb44(*(undefined1 *)((int)param_1 + 6),auStack_40);
  if (iVar1 == 0) {
    iVar1 = func_0x082edf48(*param_1,param_6);
    if (iVar1 == 1) {
      if ((char)param_1[1] == '\0') {
        for (iVar1 = 0; iVar1 != param_5; iVar1 = iVar1 + 1) {
          *(undefined1 *)(param_4 + iVar1) = *(undefined1 *)(param_1[2] + iVar1);
        }
        return 0;
      }
      func_0x082eeb08(_DAT_081f8d08,_DAT_081f8d14,2,*(undefined1 *)((int)param_1 + 7),
                      (int)*_DAT_081f8d10);
    }
    else {
      func_0x082eeb08(_DAT_081f8d08,_DAT_081f8d0c,1,*(undefined1 *)((int)param_1 + 7));
    }
    iVar1 = -4;
  }
  else {
    func_0x082eeb08(_DAT_081f8d08,_DAT_081f8d04,2,*(undefined1 *)((int)param_1 + 7),iVar1);
  }
  return iVar1;
}


/* function at 0824d2fc */

void ds_0824d2fc(void)

{
  aux_0823181c(0,1,1,0xac,0,0,0,100);
  return;
}


/* function at 0824d5f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ds_0824d5f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  aux_0824d428(2,0,param_3,param_4,param_1,param_2,param_3,param_4 & 0xffffff);
  aux_0823e550(0x23,0xb,&stack0xfffffff7,1,0);
  func_0x082ee038(_DAT_0824d624,_DAT_0824d620,0);
  return;
}


/* function at 0824d628 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ds_0824d628(void)

{
  undefined1 auStack_11 [5];
  
  auStack_11[0] = 1;
  aux_0824d428(2,1);
  aux_0823e550(0x23,0xb,auStack_11,1,0);
  func_0x082ee038(_DAT_0824d660,_DAT_0824d65c,0);
  return;
}


/* function at 08239754 */

/* WARNING: Possible PIC construction at 0x082397ce: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x082397d2) */
/* WARNING: Removing unreachable block (ram,0x081c9008) */
/* WARNING: Removing unreachable block (ram,0x081c9018) */
/* WARNING: Removing unreachable block (ram,0x081c8ffc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ds_08239754(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_58 [4];
  uint uStack_54;
  uint uStack_48;
  uint uStack_3c;
  uint uStack_38;
  
  uVar5 = func_0x082ee038(_DAT_08239808,_DAT_08239804,4,param_1[1]);
  if (param_1[1] == 0) {
    bVar1 = *param_1;
    uVar7 = (uint)bVar1;
    if (uVar7 == 1) {
      if (((param_1[4] == 0) && (param_1[9] == 0xfe)) && (bVar2 = param_1[5], bVar2 == 0)) {
        func_0x082ee038(_DAT_08239808,_DAT_0823980c,0);
        func_0x082ee038(_DAT_08239808,_DAT_08239810,0);
        aux_0824d428(1,0);
        aux_0824d428(0,0);
        aux_0824d428(2,1);
        func_0x0824d4a4();
        func_0x0824cc28();
        *_DAT_08239814 = bVar1;
        if (*_DAT_081c909c == 0) {
          uVar5 = 0xffffffff;
        }
        else if (_DAT_081c909c[1] == 0) {
          uVar5 = 0xfffffffb;
        }
        else {
          uStack_3c = (uint)bVar2;
          uStack_38 = uVar7;
          func_0x081c5ff4();
          func_0x081c8f08(0,auStack_58);
          uVar7 = uStack_54;
          func_0x081c5e54(_DAT_081c90a0,3,0,1,0);
          uVar5 = func_0x081c5ea4();
          uVar3 = uStack_48;
          iVar6 = 0;
          uVar8 = uVar7;
          while (uVar7 - uVar8 < uVar3) {
            if (uVar7 < uVar8) {
              func_0x081c5fa0();
            }
            if ((uStack_48 == uVar3) && (uVar8 == 0)) break;
            func_0x081c856c(0,iVar6);
            func_0x081c8f08(0,auStack_58);
            iVar6 = iVar6 + 1;
            uVar8 = uStack_54;
          }
          uVar4 = func_0x081c5ea4();
          uVar5 = func_0x081c5eb8(uVar5,uVar4);
          func_0x081c8240(0);
          func_0x081c5e54(_DAT_081c90a4,3,0,iVar6,uVar5);
          func_0x081c603c();
          uVar5 = 0;
        }
        return uVar5;
      }
    }
    else if (((uVar7 == 2) && (param_1[4] == 0)) && (param_1[5] == 0)) {
      func_0x082ee038(_DAT_08239808,_DAT_08239818);
      uVar5 = func_0x0824cc28();
      *_DAT_08239814 = 1;
    }
  }
  return uVar5;
}


/* function at 0824c114 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * ds_0824c114(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  short sVar2;
  undefined2 *puVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int iVar8;
  
  func_0x082ee038(_DAT_0824c37c,_DAT_0824c378,3,*(undefined1 *)(param_1 + 1),
                  *(undefined2 *)(param_1 + 4),param_3);
  sVar2 = *(short *)(param_1 + 4);
  if (sVar2 != 2) {
    if (sVar2 != 3) {
      if (sVar2 == 0) {
        cVar1 = *(char *)(param_1 + 6);
        if (cVar1 == '\x01') {
          puVar6 = (undefined1 *)func_0x081f3f28(0x5b,0,4,param_3);
          if (puVar6 == (undefined1 *)0x0) {
            return (undefined1 *)0x0;
          }
          *(undefined2 *)(puVar6 + 1) = *_DAT_0824c380;
          uVar4 = func_0x0824ccbc();
          puVar6[3] = uVar4;
        }
        else {
          if (cVar1 != '\n') {
            if (cVar1 != '\0') {
              return (undefined1 *)0x0;
            }
            puVar6 = (undefined1 *)func_0x081f3f28(0x5b,0,1,param_3);
            puVar3 = _DAT_0824c380;
            if (puVar6 != (undefined1 *)0x0) {
              *puVar6 = 0;
              *puVar3 = 0;
              return puVar6;
            }
            return (undefined1 *)0x0;
          }
          puVar6 = (undefined1 *)func_0x081f3f28(0x5b,0,3,param_3);
          if (puVar6 == (undefined1 *)0x0) {
            return (undefined1 *)0x0;
          }
          uVar4 = func_0x0824a2e0();
          puVar6[1] = uVar4;
          uVar4 = func_0x0824a2d4();
          puVar6[2] = uVar4;
        }
        *puVar6 = 0;
        return puVar6;
      }
LAB_0824c164:
      return (undefined1 *)0x0;
    }
    switch(*(undefined1 *)(param_1 + 6)) {
    case 0:
      puVar6 = (undefined1 *)func_0x081f3f28(0x5b,3,2,param_3);
      if (puVar6 != (undefined1 *)0x0) {
        *puVar6 = 0;
        uVar4 = func_0x0824ccbc();
        puVar6[1] = uVar4;
        return puVar6;
      }
      return (undefined1 *)0x0;
    case 1:
      puVar6 = (undefined1 *)func_0x081f3f28(0x5b,3,1,param_3);
      if (puVar6 == (undefined1 *)0x0) {
        return (undefined1 *)0x0;
      }
      bVar5 = *(byte *)(param_1 + 7);
      if (99 < bVar5) {
        bVar5 = 100;
      }
      func_0x0824ccb8(bVar5);
      break;
    case 2:
      puVar6 = (undefined1 *)func_0x081f3f28(0x5b,3,1,param_3);
      if (puVar6 == (undefined1 *)0x0) {
        return (undefined1 *)0x0;
      }
      func_0x0824a308(*(char *)(param_1 + 7) != '\0');
      break;
    case 3:
      puVar6 = (undefined1 *)func_0x081f3f28(0x5b,3,0x15,param_3);
      if (puVar6 == (undefined1 *)0x0) {
        return (undefined1 *)0x0;
      }
      iVar8 = func_0x0824d0e8(puVar6 + 1,0x14);
      if (iVar8 == 0) {
code_r0x0824c372:
        uVar4 = 1;
        goto code_r0x0824c1ea;
      }
      break;
    case 4:
      puVar6 = (undefined1 *)func_0x081f3f28(0x5b,3,1,param_3);
      if (puVar6 == (undefined1 *)0x0) {
        return (undefined1 *)0x0;
      }
      iVar8 = func_0x0824d0cc(param_1 + 7,0x14);
      if (iVar8 == 0) goto code_r0x0824c372;
      func_0x081c6324(0xf5fd,param_1 + 7,0x14);
      break;
    default:
      goto LAB_0824c164;
    }
    goto code_r0x0824c1e8;
  }
  switch(*(undefined1 *)(param_1 + 6)) {
  case 0:
    puVar6 = (undefined1 *)func_0x081f3f28(0x5b,2,1,param_3);
    if (puVar6 == (undefined1 *)0x0) {
      return (undefined1 *)0x0;
    }
    aux_0824d428(2,*(char *)(param_1 + 7) == '\0');
    break;
  case 1:
    puVar6 = (undefined1 *)func_0x081f3f28(0x5b,2,1,param_3);
    if (puVar6 == (undefined1 *)0x0) {
      return (undefined1 *)0x0;
    }
    func_0x0822eecc(3);
    break;
  case 2:
    puVar6 = (undefined1 *)func_0x081f3f28(0x5b,2,2,param_3);
    if (puVar6 == (undefined1 *)0x0) {
      return (undefined1 *)0x0;
    }
    uVar4 = func_0x0822eef4();
    goto code_r0x0824c21e;
  case 3:
    puVar6 = (undefined1 *)func_0x081f3f28(0x5b,2,2,param_3);
    if (puVar6 == (undefined1 *)0x0) {
      return (undefined1 *)0x0;
    }
    uVar4 = func_0x0824a318();
code_r0x0824c21e:
    puVar6[1] = uVar4;
    break;
  default:
    goto LAB_0824c164;
  case 10:
    puVar6 = (undefined1 *)func_0x081f3f28(0x5b,2,1,param_3);
    if (puVar6 == (undefined1 *)0x0) {
      return (undefined1 *)0x0;
    }
    func_0x08239918();
    break;
  case 0xb:
    puVar6 = (undefined1 *)func_0x081f3f28(0x5b,2,1,param_3);
    if (puVar6 == (undefined1 *)0x0) {
      return (undefined1 *)0x0;
    }
    *puRam0824c384 = 1;
    break;
  case 0xc:
    puVar6 = (undefined1 *)func_0x081f3f28(0x5b,2,1,param_3);
    if (puVar6 == (undefined1 *)0x0) {
      return (undefined1 *)0x0;
    }
    func_0x0824d4a8();
    func_0x082ee498(100);
    func_0x0824d9cc();
    break;
  case 0xd:
    puVar6 = (undefined1 *)func_0x081f3f28(0x5b,2,5,param_3);
    if (puVar6 == (undefined1 *)0x0) {
      return (undefined1 *)0x0;
    }
    uVar7 = func_0x0824d4f8();
    *(undefined4 *)(puVar6 + 1) = uVar7;
  }
code_r0x0824c1e8:
  uVar4 = 0;
code_r0x0824c1ea:
  *puVar6 = uVar4;
  return puVar6;
}


/* listing 0824b2a0..0824b300 */
0824b2a0 movw r1,#0x6464
0824b2a4 ldrh r2,[r5,#0x2]
0824b2a6 cmp r2,r1
0824b2a8 beq 0x0824b2b0
0824b2aa ldrh r3,[r4,#0x2]
0824b2ac cmp r3,r1
0824b2ae bne 0x0824b2ba
0824b2b0 bl 0x08243c84
0824b2b4 movs r4,#0x0
0824b2b6 b.w 0x0824a8b2
0824b2ba cbz r2,0x0824b2c2
0824b2bc cmp r3,#0x0
0824b2be bne.w 0x0824adce
0824b2c2 bl 0x08243cd4
0824b2c6 movs r4,#0x0
0824b2c8 b.w 0x0824a8b2

/* listing 0824bd10..0824bd60 */
0824bd10 mov r0,r4
0824bd12 strd r4,r4,[sp,#0x8]
0824bd16 strd r4,r4,[sp,#0x0]
0824bd1a bl 0x0823181c
0824bd1e movs r2,#0x1
0824bd20 ldrb r3,[r5,#0x0]
0824bd22 ldr r1,[0x0824be4c]
0824bd24 ldr r0,[0x0824be24]
0824bd26 bl 0x082ee038
0824bd2a b.w 0x0824a8b2

/* listing 0824bdc0..0824bea8 */
0824bdc0 b.w 0x0824a8b2

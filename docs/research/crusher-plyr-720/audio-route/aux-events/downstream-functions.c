/* Selected Master .35 functions. Pointer-derived MCU mapping. */

/* function at 0824560c */

void aux_0824560c(undefined4 param_1)

{
  aux_0823181c(0,4,1,0x26,param_1,0,0,0);
  return;
}


/* function at 082454bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void aux_082454bc(undefined4 param_1,int param_2,undefined4 param_3,uint param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_14;
  
  puVar1 = _DAT_08245508;
  iVar3 = param_2;
  uStack_14 = param_4;
  func_0x082ee038(_DAT_08245510,_DAT_0824550c,2,*_DAT_08245508,param_1,param_2,param_3);
  *puVar1 = (char)param_1;
  if (param_2 != 0) {
    uStack_14 = uStack_14 & 0xffff0000;
    func_0x082eb3c8(&uStack_14,2,_DAT_08245514,param_1);
    uVar2 = func_0x081c6324(0xf323,&uStack_14,2);
    func_0x082ee038(_DAT_08245510,_DAT_08245518,2,*puVar1,uVar2,iVar3,param_3);
  }
  return;
}


/* function at 082455a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint aux_082455a4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_lr;
  
  pcVar1 = _DAT_082455fc;
  if (param_1 == 1) {
    func_0x08247842();
    if (*pcVar1 == '\0') {
      func_0x08247842(*_DAT_08245600);
    }
    if (*_DAT_08245604 == '\0') {
      func_0x0824d6d8(2);
    }
  }
  else {
    uVar4 = func_0x0824786e(*_DAT_082455f8);
    if (*pcVar1 == '\0') {
      func_0x0824d700(2);
      uVar4 = func_0x0824786e(*_DAT_08245600);
    }
    if (param_1 != 1) {
      return uVar4;
    }
  }
  uVar2 = _DAT_08245608;
  iVar3 = aux_0823181c(1,4,0x13,4,0,0,0,0,param_4,unaff_r4,unaff_r5,unaff_lr);
  if (iVar3 != 0) {
    func_0x082eeb08(_DAT_0823626c,_DAT_08236270,2,iVar3,uVar2);
  }
  return (uint)(iVar3 == 0);
}


/* function at 0823ffc8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void aux_0823ffc8(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  iVar4 = param_3;
  iVar1 = func_0x0824a2d4();
  if (iVar1 == 0) {
    iVar1 = func_0x081f44a8();
    func_0x082ee038(_DAT_08240068,_DAT_08240064,3,param_1,param_2,param_3,iVar4);
    if (iVar1 == 0xffff) {
      uVar2 = 6;
    }
    else {
      uVar2 = 7;
    }
    func_0x081ecf2a(uVar2);
    uVar2 = func_0x081ecf38();
    puVar3 = (undefined2 *)func_0x081f3f28(0x5c,0x2c82,param_3 + 2U & 0xffff,uVar2);
    if (puVar3 == (undefined2 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x082eeb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*_DAT_082eeb14)(_DAT_08240068,_DAT_0824006c,0);
      return;
    }
    *puVar3 = (short)param_1;
    func_0x082ee988(puVar3 + 1,param_2,param_3);
    iVar4 = func_0x081ee5b8(puVar3,uVar2,0);
    func_0x082ee038(_DAT_08240068,_DAT_08240070,1,iVar4);
    if (iVar4 != 0) {
      iVar4 = func_0x081ed12e(puVar3);
      func_0x082ee038(_DAT_081ed1f4,_DAT_081ed1f0,1,iVar4,unaff_r4,unaff_lr);
      if (iVar4 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x082ee4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*_DAT_082ee4b4)(iVar4);
      return;
    }
  }
  return;
}


/* function at 0824d700 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void aux_0824d700(int param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  uint extraout_r3;
  undefined4 uVar2;
  undefined4 uStack_c;
  
  uVar2 = _DAT_0824d720;
  *(undefined1 *)(_DAT_0824d71c + param_1) = 0;
  func_0x082ee038(_DAT_0824d724,uVar2,1,param_1);
  iVar1 = func_0x0824d664();
  func_0x082ee038(_DAT_0824d6d4,_DAT_0824d6d0,1,iVar1);
  if (iVar1 == 2) {
    uStack_c = extraout_r3 & 0xffffff;
    uVar2 = extraout_r1;
    func_0x0824d428(2,0);
    func_0x0823e550(0x23,0xb,(int)&uStack_c + 3,1,0,uVar2);
    func_0x082ee038(_DAT_0824d624,_DAT_0824d620,0);
    return;
  }
  func_0x0824d428(2,1);
  func_0x0823e550(0x23,0xb,&stack0xffffffef,1,0);
  func_0x082ee038(_DAT_0824d660,_DAT_0824d65c,0);
  return;
}


/* function at 0824d6d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void aux_0824d6d8(int param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  uint extraout_r3;
  undefined4 uVar2;
  undefined4 uStack_c;
  
  uVar2 = _DAT_0824d6f8;
  *(undefined1 *)(_DAT_0824d6f4 + param_1) = 1;
  func_0x082ee038(_DAT_0824d6fc,uVar2,1,param_1);
  iVar1 = func_0x0824d664();
  func_0x082ee038(_DAT_0824d6d4,_DAT_0824d6d0,1,iVar1);
  if (iVar1 == 2) {
    uStack_c = extraout_r3 & 0xffffff;
    uVar2 = extraout_r1;
    func_0x0824d428(2,0);
    func_0x0823e550(0x23,0xb,(int)&uStack_c + 3,1,0,uVar2);
    func_0x082ee038(_DAT_0824d624,_DAT_0824d620,0);
    return;
  }
  func_0x0824d428(2,1);
  func_0x0823e550(0x23,0xb,&stack0xffffffef,1,0);
  func_0x082ee038(_DAT_0824d660,_DAT_0824d65c,0);
  return;
}


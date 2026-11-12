/* Separate import. SG200X Master v1.0.0.35. Mapping remains a selected-region candidate. */

/* Function at 082452cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 selection_082452cc(undefined4 param_1,uint param_2,uint param_3,int param_4)

{
  short sVar1;
  undefined1 *puVar2;
  short *psVar3;
  char cVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  
  if (param_2 == 2) {
    cVar4 = func_0x08241e60();
    if (8 < (byte)(cVar4 - 4U)) {
      selection_0824513c(param_3,0);
    }
    psVar3 = _DAT_082453b0;
    if (*_DAT_082453b0 != 0) {
      func_0x082ee038(_DAT_082453ac,_DAT_082453b4,1);
    }
    sVar1 = *psVar3;
    if ((sVar1 == 0x3c) || (sVar1 == 0x37)) {
      uVar5 = 4;
    }
    else if (sVar1 == 0x38) {
      uVar5 = 1;
    }
    else if (sVar1 == 0x3b) {
      uVar5 = 0;
    }
    else if (sVar1 == 0x3a) {
      if (*_DAT_082453a0 - 2 < 2) {
        uVar5 = 3;
      }
      else {
        uVar5 = 2;
      }
    }
    else {
      if (sVar1 != 0x3e) {
        uVar5 = 0;
        goto LAB_08245352;
      }
      uVar5 = 5;
    }
    func_0x08245134(uVar5);
    uVar5 = 1;
LAB_08245352:
    *psVar3 = 0;
    return uVar5;
  }
  if (param_2 < 3) {
    if (param_2 == 0) {
      if (param_3 == 0) {
        func_0x082ee038(_DAT_082453ac,_DAT_082453a8);
      }
      return 1;
    }
    if (param_2 != 1) {
      return 0;
    }
    if (param_3 != 0x28) {
      return 0;
    }
    func_0x082ee038(_DAT_082453ac,_DAT_082453b8,1,param_4 != 0);
    return 0;
  }
  if (param_2 != 0x2a) {
    return 0;
  }
  if (param_3 < 6) {
    *_DAT_082453a0 = (byte)param_3;
  }
  puVar2 = _DAT_082453a4;
  if (param_3 == 6) {
    uVar6 = 1;
  }
  else {
    if ((1 < param_3) && ((param_3 & 0xfffffffd) != 5)) goto LAB_082452f6;
    uVar6 = 0;
  }
  *_DAT_082453a4 = uVar6;
LAB_082452f6:
  func_0x08246a00(*puVar2);
  return 0;
}


/* Function at 08247800 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int selection_08247800(byte *param_1)

{
  int iVar1;
  
  iVar1 = _DAT_08247838;
  if ((param_1 == (byte *)0x0) || (5 < *param_1)) {
    iVar1 = 0;
  }
  else {
    func_0x082528d0((uint)*param_1 * 0x44 + _DAT_08247838,0,0x44);
    func_0x082ee988((uint)*param_1 * 0x44 + iVar1,param_1,0x24);
    iVar1 = (uint)*param_1 * 0x44 + iVar1;
  }
  return iVar1;
}


/* Function at 08247842 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void selection_08247842(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  if (param_1 != (undefined1 *)0x0) {
    uVar1 = *param_1;
    puVar2 = (undefined1 *)func_0x082ee408(8);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = uVar1;
      *(undefined4 *)(puVar2 + 4) = 1;
      iVar3 = func_0x0823181c(0,4,0x36,3,puVar2,8,0,0);
      if (iVar3 != 0) {
        func_0x082ee4a8(puVar2);
        func_0x082eeb08(_DAT_08246c60,_DAT_08246c5c,3,uVar1,1,iVar3);
      }
    }
    return;
  }
  return;
}


/* Function at 0824786e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void selection_0824786e(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  if (param_1 != (undefined1 *)0x0) {
    uVar1 = *param_1;
    puVar2 = (undefined1 *)func_0x082ee408(8);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = uVar1;
      *(undefined4 *)(puVar2 + 4) = 2;
      iVar3 = func_0x0823181c(0,4,0x36,3,puVar2,8,0,0);
      if (iVar3 != 0) {
        func_0x082ee4a8(puVar2);
        func_0x082eeb08(_DAT_08246c60,_DAT_08246c5c,3,uVar1,2,iVar3);
      }
    }
    return;
  }
  return;
}


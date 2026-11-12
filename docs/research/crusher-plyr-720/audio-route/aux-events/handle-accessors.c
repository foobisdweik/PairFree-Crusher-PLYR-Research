/* Selected Master .35 functions. Pointer-derived MCU mapping. */

/* function at 08247842 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void aux_08247842(undefined1 *param_1)

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
      iVar3 = aux_0823181c(0,4,0x36,3,puVar2,8,0,0);
      if (iVar3 != 0) {
        func_0x082ee4a8(puVar2);
        func_0x082eeb08(_DAT_08246c60,_DAT_08246c5c,3,uVar1,1,iVar3);
      }
    }
    return;
  }
  return;
}


/* function at 0824786e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void aux_0824786e(undefined1 *param_1)

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
      iVar3 = aux_0823181c(0,4,0x36,3,puVar2,8,0,0);
      if (iVar3 != 0) {
        func_0x082ee4a8(puVar2);
        func_0x082eeb08(_DAT_08246c60,_DAT_08246c5c,3,uVar1,2,iVar3);
      }
    }
    return;
  }
  return;
}


/* function at 08247848 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void aux_08247848(undefined1 *param_1,undefined1 param_2,undefined1 param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  param_1[0x10] = param_2;
  param_1[0x11] = param_3;
  if (param_1 != (undefined1 *)0x0) {
    uVar1 = *param_1;
    puVar2 = (undefined1 *)func_0x082ee408(8);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = uVar1;
      *(undefined4 *)(puVar2 + 4) = 4;
      iVar3 = aux_0823181c(0,4,0x36,3,puVar2,8,0,0);
      if (iVar3 != 0) {
        func_0x082ee4a8(puVar2);
        func_0x082eeb08(_DAT_08246c60,_DAT_08246c5c,3,uVar1,4,iVar3);
      }
    }
    return;
  }
  return;
}


/* function at 08247800 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int aux_08247800(byte *param_1)

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


/* function at 0824d664 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 aux_0824d664(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = 0;
  pcVar2 = _DAT_0824d69c;
  while ((iVar3 != 4 && (*pcVar2 == '\0'))) {
    iVar3 = iVar3 + 1;
    pcVar2 = pcVar2 + 1;
  }
  func_0x082ee038(_DAT_0824d6a4,_DAT_0824d6a0,1,iVar3);
  if (iVar3 < 2) {
    if (iVar3 < 0) {
      uVar1 = 3;
    }
    else {
      uVar1 = 2;
    }
  }
  else if (iVar3 == 3) {
    uVar1 = 2;
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}


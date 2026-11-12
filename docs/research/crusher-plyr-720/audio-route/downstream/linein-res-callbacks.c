/* Selected Master .35 functions. Pointer-derived MCU mapping. Static evidence only. */

/* function at 08246ce0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ds_08246ce0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  
  iVar3 = 0;
  iVar2 = _DAT_08246ca4;
  while( true ) {
    if (iVar3 == 6) {
      return;
    }
    piVar1 = (int *)(iVar2 + 0x40);
    iVar2 = iVar2 + 0x44;
    if (*piVar1 == param_1) break;
    iVar3 = iVar3 + 1;
  }
  puVar4 = (undefined1 *)(iVar3 * 0x44 + _DAT_08246ca4);
  if (puVar4 == (undefined1 *)0x0) {
    return;
  }
  func_0x08246c10(2,*puVar4,0,iVar3,param_1,0,param_3);
  func_0x082ee038(_DAT_08246cac,_DAT_08246ca8,2,*puVar4,0);
  return;
}


/* function at 08246cda */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ds_08246cda(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  
  iVar3 = 0;
  iVar2 = _DAT_08246ca4;
  while( true ) {
    if (iVar3 == 6) {
      return;
    }
    piVar1 = (int *)(iVar2 + 0x40);
    iVar2 = iVar2 + 0x44;
    if (*piVar1 == param_1) break;
    iVar3 = iVar3 + 1;
  }
  puVar4 = (undefined1 *)(iVar3 * 0x44 + _DAT_08246ca4);
  if (puVar4 == (undefined1 *)0x0) {
    return;
  }
  func_0x08246c10(2,*puVar4,1,iVar3,param_1,1,param_3);
  func_0x082ee038(_DAT_08246cac,_DAT_08246ca8,2,*puVar4,1);
  return;
}


/* function at 08246cd4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ds_08246cd4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  
  iVar3 = 0;
  iVar2 = _DAT_08246ca4;
  while( true ) {
    if (iVar3 == 6) {
      return;
    }
    piVar1 = (int *)(iVar2 + 0x40);
    iVar2 = iVar2 + 0x44;
    if (*piVar1 == param_1) break;
    iVar3 = iVar3 + 1;
  }
  puVar4 = (undefined1 *)(iVar3 * 0x44 + _DAT_08246ca4);
  if (puVar4 == (undefined1 *)0x0) {
    return;
  }
  func_0x08246c10(2,*puVar4,3,iVar3,param_1,3,param_3);
  func_0x082ee038(_DAT_08246cac,_DAT_08246ca8,2,*puVar4,3);
  return;
}


/* function at 08246d38 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ds_08246d38(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_r2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 unaff_r4;
  
  func_0x082191a8();
  iVar3 = 0;
  iVar2 = _DAT_08246ca4;
  while( true ) {
    if (iVar3 == 6) {
      return;
    }
    piVar1 = (int *)(iVar2 + 0x40);
    iVar2 = iVar2 + 0x44;
    if (*piVar1 == param_1) break;
    iVar3 = iVar3 + 1;
  }
  puVar4 = (undefined1 *)(iVar3 * 0x44 + _DAT_08246ca4);
  if (puVar4 == (undefined1 *)0x0) {
    return;
  }
  func_0x08246c10(2,*puVar4,2,iVar3,param_1,2,extraout_r2,unaff_r4);
  func_0x082ee038(_DAT_08246cac,_DAT_08246ca8,2,*puVar4,2);
  return;
}


/* function at 08246cb0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ds_08246cb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x08246c64(param_1,4,param_3,param_4,param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x082ee040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_082ee044)(_DAT_08246cd0,_DAT_08246ccc,1,param_2);
  return;
}


/* function at 08246be4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ds_08246be4(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x082ee038(_DAT_08246c0c,_DAT_08246c08,3,*param_1,param_1[0x24],param_2,param_3);
  param_1[0x24] = (char)param_2;
  return;
}


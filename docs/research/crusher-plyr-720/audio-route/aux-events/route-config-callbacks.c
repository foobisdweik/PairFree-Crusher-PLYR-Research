/* Selected Master .35 functions. Pointer-derived MCU mapping. */

/* function at 082453dc */

void aux_082453dc(int param_1,undefined1 *param_2)

{
  *param_2 = 7;
  if (param_1 == 0) {
    param_2[1] = 4;
    param_2[0x4a] = 7;
    *(undefined2 *)(param_2 + 0x48) = 0x101;
  }
  else {
    param_2[1] = 3;
    *(undefined2 *)(param_2 + 0x48) = 0x100;
    param_2[0x4a] = 0;
    param_2[0x3d] = 0;
  }
  *(undefined4 *)(param_2 + 8) = 48000;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined4 *)(param_2 + 0x10) = 6;
  return;
}


/* function at 0824554c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void aux_0824554c(uint param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_2 == (undefined1 *)0x0) {
    uVar2 = 0;
    uVar1 = _DAT_0824559c;
  }
  else {
    if (param_1 < 2) {
      aux_0823181c(0,4,0x1f,4,param_1,0,0,0);
      *param_2 = 0;
      return;
    }
    uVar2 = 1;
    uVar1 = _DAT_082455a0;
  }
                    /* WARNING: Could not recover jumptable at 0x082eeb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_082eeb14)(_DAT_08245598,uVar1,uVar2,param_1);
  return;
}


/* function at 0824541c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void aux_0824541c(undefined4 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x082ee040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_082ee044)(_DAT_0824542c,_DAT_08245428,1,param_1);
  return;
}


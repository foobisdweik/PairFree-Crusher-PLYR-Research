/* Selected Master .35 functions. Pointer-derived MCU mapping. Static evidence only. */

/* function at 08221b80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ds_08221b80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  func_0x082ee038(_DAT_08221bb8,_DAT_08221bb4,1,param_1,param_1,param_2,param_3,param_4);
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *_DAT_08221bbc;
  }
  *_DAT_08221bc0 = uVar1;
  aux_0823181c(0,3,1,0x92,0,0,0,0);
  return;
}


/* function at 081b58bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ds_081b58bc(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((*(byte *)(_DAT_081b5940 + 0x18) < param_1) || (param_1 < *(byte *)(_DAT_081b5940 + 0x19))) {
    func_0x082eeb08(_DAT_081b5948,_DAT_081b5944,5,param_1,*(undefined1 *)(_DAT_081b5940 + 0x19),
                    (uint)*(byte *)(_DAT_081b5940 + 0x18),param_2);
LAB_081b58ea:
    uVar1 = 0xfffffffe;
  }
  else {
    uVar1 = _DAT_081b594c;
    if ((param_2 == 1) || (uVar1 = _DAT_081b5950, param_2 == 0)) {
      func_0x082ee038(_DAT_081b5948,uVar1,3);
    }
    else if (1 < param_2) {
      func_0x082ee038(_DAT_081b5948,_DAT_081b5954,1,param_2,param_1,param_2,param_3,param_4);
      goto LAB_081b58ea;
    }
    func_0x081b57ec(param_2,param_1);
    uVar1 = 0;
  }
  return uVar1;
}


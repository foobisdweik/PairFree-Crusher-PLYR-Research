/* Separate import. SG200X Master v1.0.0.35. Mapping remains a selected-region candidate. */

/* Function at 0824690c */

void selection_0824690c(undefined4 param_1)

{
  func_0x0823181c(0,4,1,99,param_1,0,0,0);
  return;
}


/* Function at 08245c28 */

void selection_08245c28(undefined4 param_1)

{
  func_0x0823181c(0,3,0x20,2,param_1,0,0,0);
  return;
}


/* Function at 08237f3c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void selection_08237f3c(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  puVar1 = _DAT_08237fa4;
  *_DAT_08237fa4 = (char)param_1;
  func_0x082318d4(1,0x5e,param_3,puVar1,param_1,param_2,param_3,param_4);
  if (param_1 == 0) {
    func_0x08247d2c(1,0);
    func_0x08247d24(0);
  }
  else {
    func_0x08247d2c(1);
    if (param_2 == 0) {
      uVar2 = 3;
    }
    else {
      uVar2 = 1;
    }
    func_0x08247d20(uVar2,0);
    if (param_3 != 0) {
      func_0x0823181c(0,4,1,0x5e,0,0,0,_DAT_08237fa8);
    }
  }
  func_0x082ee038(_DAT_08237fb0,_DAT_08237fac,2,param_1,param_2);
  return;
}


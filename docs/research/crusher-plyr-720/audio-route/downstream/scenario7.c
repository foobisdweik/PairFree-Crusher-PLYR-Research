/* Selected Master .35 functions. Pointer-derived MCU mapping. Static evidence only. */

/* function at 08229d20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ds_08229d20(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  
  pcVar5 = _DAT_08229e0c;
  pcVar4 = _DAT_08229e00;
  pcVar3 = _DAT_08229df8;
  pcVar2 = _DAT_08229df0;
  pcVar1 = _DAT_08229de4;
  if (param_1 == 1) {
    func_0x081cf3b8(0);
    if (*pcVar1 != '\0') {
      func_0x081b58bc(2,0);
    }
    uVar6 = _DAT_08229de8;
    *pcVar1 = '\0';
  }
  else if (param_1 == 2) {
    func_0x081cf3b8(1,0);
    if (*pcVar2 != '\0') {
      func_0x081b58bc(2,0);
    }
    uVar6 = _DAT_08229df4;
    *pcVar2 = '\0';
  }
  else if (param_1 == 0) {
    func_0x081cf3fc(0,0);
    if (*pcVar3 != '\0') {
      func_0x081b58bc(2,0);
    }
    uVar6 = _DAT_08229dfc;
    *pcVar3 = '\0';
  }
  else if (param_1 - 4 < 3) {
    if (*_DAT_08229e00 != '\0') {
      if (*_DAT_08229e04 < 2) {
        uVar6 = 0;
      }
      else {
        uVar6 = 2;
      }
      func_0x081b58bc(uVar6);
    }
    uVar6 = _DAT_08229e08;
    *pcVar4 = '\0';
  }
  else {
    if ((param_1 & 0xfb) != 3) {
      return;
    }
    if (*_DAT_08229e0c != '\0') {
      func_0x081b58bc(2,0);
    }
    uVar6 = _DAT_08229e14;
    if (*_DAT_08229e10 == '\x01') {
      *_DAT_08229e10 = '\0';
    }
    *pcVar5 = '\0';
  }
                    /* WARNING: Could not recover jumptable at 0x082ee040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_082ee044)(_DAT_08229dec,uVar6,0,param_4);
  return;
}


/* function at 08229b8c */

/* WARNING: Possible PIC construction at 0x08229b98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x08229b9c) */
/* WARNING: Removing unreachable block (ram,0x08229bb6) */
/* WARNING: Removing unreachable block (ram,0x08229bc8) */
/* WARNING: Removing unreachable block (ram,0x08229bd8) */
/* WARNING: Removing unreachable block (ram,0x08229c12) */
/* WARNING: Removing unreachable block (ram,0x08229c28) */
/* WARNING: Removing unreachable block (ram,0x08229c1a) */
/* WARNING: Removing unreachable block (ram,0x08229bde) */
/* WARNING: Removing unreachable block (ram,0x08229bf4) */
/* WARNING: Removing unreachable block (ram,0x08229bfc) */
/* WARNING: Removing unreachable block (ram,0x08229c04) */
/* WARNING: Removing unreachable block (ram,0x08229c06) */
/* WARNING: Removing unreachable block (ram,0x08229c08) */
/* WARNING: Removing unreachable block (ram,0x08229bca) */
/* WARNING: Removing unreachable block (ram,0x08229bba) */
/* WARNING: Removing unreachable block (ram,0x08229ba0) */
/* WARNING: Removing unreachable block (ram,0x08229bac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ds_08229b8c(undefined4 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x082ee040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_082ee044)(_DAT_08229c30,_DAT_08229c2c,1,param_1);
  return;
}


/* function at 08229c4c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ds_08229c4c(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = _DAT_08229d1c;
  uVar3 = _DAT_08229d00;
  uVar2 = _DAT_08229cf0;
  uVar1 = _DAT_08229ce0;
  if (param_1 == 1) {
    *_DAT_08229cdc = 1;
    func_0x081cf3b8(0,uVar1);
    *_DAT_08229ce4 = 1;
    func_0x081d09c0();
    uVar4 = _DAT_08229ce8;
  }
  else if (param_1 == 2) {
    _DAT_08229cdc[1] = 1;
    func_0x081cf3b8(1,uVar2);
    uVar4 = _DAT_08229cf8;
    *_DAT_08229cf4 = 1;
  }
  else if (param_1 == 0) {
    *_DAT_08229cfc = 1;
    *_DAT_08229d04 = 0;
    func_0x081cf3fc(0,uVar3);
    uVar4 = _DAT_08229d0c;
    *_DAT_08229d08 = 1;
  }
  else if (param_1 - 4 < 3) {
    *_DAT_08229d10 = 1;
    func_0x08221b80();
    uVar4 = _DAT_08229d14;
  }
  else {
    if ((param_1 & 0xfb) != 3) {
      return;
    }
    *_DAT_08229d18 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x082ee040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_082ee044)(_DAT_08229cec,uVar4,0,param_4);
  return;
}


/* Selected Master .35 functions. Pointer-derived MCU mapping. Static evidence only. */

/* function at 08241570 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ds_08241570(int *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_420 [1024];
  undefined2 uStack_20;
  int iStack_1c;
  
  func_0x082528d0(auStack_420,0,0x408);
  if ((char)param_1[4] == '\x02') {
    iVar5 = *param_1;
    iVar6 = param_1[2];
    puVar2 = (undefined1 *)func_0x082ee408(3);
    if (puVar2 != (undefined1 *)0x0) {
      func_0x082528d0(puVar2,0,3);
      uVar3 = func_0x081a61a8(_DAT_08241690);
      iVar5 = iVar5 + iVar6 + 1;
      iVar6 = func_0x082ea724(_DAT_08241690,iVar5,uVar3);
      if (iVar6 == 0) {
        *puVar2 = 0;
LAB_082415c4:
        iVar5 = func_0x082eb4cc(iVar5,0x2c);
        uVar1 = func_0x082eb840(iVar5 + 1,0,10);
        puVar2[1] = uVar1;
        iVar5 = func_0x082eb4cc(iVar5 + 1,0x2c);
        uVar1 = func_0x082eb840(iVar5 + 1,0,10);
        puVar2[2] = uVar1;
        iStack_1c = 0x40;
        puVar4 = puVar2;
      }
      else {
        uVar3 = func_0x081a61a8(_DAT_0824169c);
        iVar6 = func_0x082ea724(_DAT_0824169c,iVar5,uVar3);
        if (iVar6 == 0) {
          *puVar2 = 1;
          goto LAB_082415c4;
        }
        uVar3 = func_0x081a61a8(_DAT_082416a0);
        iVar6 = func_0x082ea724(_DAT_082416a0,iVar5,uVar3);
        if (iVar6 == 0) {
          *puVar2 = 2;
          goto LAB_082415c4;
        }
        iStack_1c = 0x80;
        puVar4 = (undefined1 *)0x0;
        func_0x082ee4a8(puVar2);
      }
      if (iStack_1c == 0x40) {
        func_0x082ee038(_DAT_08241698,_DAT_08241694,3,*puVar4,puVar4[1],puVar4[2]);
        iVar5 = aux_0823181c(0,4,0x27,0,puVar4,3,0,0);
        if (iVar5 != 0) {
          iStack_1c = 0x80;
          func_0x082ee4a8(puVar4);
        }
      }
      goto LAB_08241634;
    }
  }
  iStack_1c = 0x80;
LAB_08241634:
  uStack_20 = func_0x081a61a8(auStack_420);
  func_0x081d27e8(auStack_420);
  return 0;
}


/* function at 082416a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 aux_082416a4(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_418 [1024];
  undefined2 uStack_18;
  undefined4 uStack_14;
  
  func_0x082528d0(auStack_418,0,0x408);
  if ((char)param_1[4] == '\x02') {
    iVar2 = func_0x082ea500(param_1[2] + 1 + *param_1);
    func_0x082ee038(_DAT_08241724,_DAT_08241720,2,(char)param_1[4],iVar2);
    puVar1 = _DAT_08241728;
    if ((iVar2 == 1) || (iVar2 == 0)) {
      *_DAT_08241728 = (char)iVar2;
    }
    aux_0823181c(0,4,0x27,0x7d,*puVar1,0,0,0);
    uStack_14 = 0x40;
  }
  else {
    uStack_14 = 0x80;
  }
  uStack_18 = func_0x081a61a8(auStack_418);
  func_0x081d27e8(auStack_418);
  return 0;
}


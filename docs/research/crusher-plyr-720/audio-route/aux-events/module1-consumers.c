/* Selected Master .35 functions. Pointer-derived MCU mapping. */

/* function at 08235070 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 aux_08235070(undefined4 param_1,uint param_2,int param_3,int *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  char cVar9;
  char *pcVar10;
  uint uVar11;
  int iStack_110;
  char cStack_10c;
  char cStack_10b;
  int iStack_108;
  int iStack_104;
  undefined4 uStack_100;
  
  pcVar8 = _DAT_08235360;
  if (10 < param_2) {
    if (param_2 != 0x26) {
      if (param_2 != 0x29) {
        return 0;
      }
      if (param_3 != 1) {
        return 0;
      }
      func_0x08234f84();
      return 0;
    }
    if (*param_4 != 0x29) {
      return 0;
    }
    if (*_DAT_08235360 == '\0') {
      return 0;
    }
    uVar11 = param_4[1];
    if (0x28 < uVar11) {
      return 0;
    }
    if (uVar11 < 0x10) {
      if (uVar11 == 2) {
        func_0x082ee038(_DAT_08235350,_DAT_08235378,0);
        cVar9 = '\x04';
        pcVar8[1] = '\x01';
        pcVar10 = pcVar8 + 8;
        while (cVar9 = cVar9 + -1, cVar9 != '\0') {
          if ((pcVar8[0x10] != '\0') && (*(code **)(pcVar8 + 0x14) != (code *)0x0)) {
            (**(code **)(pcVar8 + 0x14))(pcVar10);
          }
          pcVar8 = pcVar8 + 0x1c;
        }
        return 0;
      }
      if (uVar11 == 3) {
        if (_DAT_08235360[1] == '\0') {
          return 0;
        }
        func_0x08235028((char)param_4[3]);
        func_0x082ee038(_DAT_08235350,_DAT_0823537c,1,pcVar8[2]);
        cVar9 = '\x04';
        pcVar10 = pcVar8;
        while (cVar9 = cVar9 + -1, cVar9 != '\0') {
          if ((pcVar10[0x10] != '\0') && (*(code **)(pcVar10 + 0x24) != (code *)0x0)) {
            (**(code **)(pcVar10 + 0x24))(pcVar8[2]);
          }
          pcVar10 = pcVar10 + 0x1c;
        }
        return 0;
      }
      if (uVar11 != 1) {
        return 0;
      }
      func_0x082ee038(_DAT_08235350,_DAT_08235370,0);
      uStack_100 = *(uint *)(pcVar8 + 4);
      func_0x082ee038(_DAT_08235350,_DAT_08235374,5,uStack_100,uStack_100 & 0xff,
                      (uStack_100 & 0xffff) >> 8,(uStack_100 & 0xffffff) >> 0x10,uStack_100 >> 0x18)
      ;
      func_0x08243480(0x29,0x10,&uStack_100,4);
      func_0x08234f9e();
      func_0x08234fc8();
      aux_082318d4(0x29,1);
      uVar5 = 2;
      goto code_r0x082351ee;
    }
    switch(uVar11) {
    case 0x10:
      if (_DAT_08235360[1] == '\0') {
        return 0;
      }
      cVar9 = '\x04';
      while (cVar9 = cVar9 + -1, cVar9 != '\0') {
        if ((pcVar8[0x10] != '\0') && (*(code **)(pcVar8 + 0x1c) != (code *)0x0)) {
          (**(code **)(pcVar8 + 0x1c))();
        }
        pcVar8 = pcVar8 + 0x1c;
      }
      return 0;
    case 0x11:
      if (_DAT_08235360[1] == '\0') {
        return 0;
      }
      cVar9 = '\x04';
      while (cVar9 = cVar9 + -1, cVar9 != '\0') {
        if ((pcVar8[0x10] != '\0') && (*(code **)(pcVar8 + 0x20) != (code *)0x0)) {
          (**(code **)(pcVar8 + 0x20))();
        }
        pcVar8 = pcVar8 + 0x1c;
      }
      return 0;
    default:
      return 0;
    case 0x20:
      if (_DAT_08235360[1] == '\0') {
        return 0;
      }
      func_0x082ee038(_DAT_08235350,uRam08235380,2,param_4[3],(char)param_4[4]);
      cVar9 = '\x04';
      pcVar8 = _DAT_08235360;
      while (cVar9 = cVar9 + -1, cVar9 != '\0') {
        if ((pcVar8[0x10] != '\0') && (*(code **)(pcVar8 + 0x28) != (code *)0x0)) {
          (**(code **)(pcVar8 + 0x28))(param_4 + 3);
        }
        pcVar8 = pcVar8 + 0x1c;
      }
      return 0;
    case 0x21:
      if (_DAT_08235360[1] == '\0') {
        return 0;
      }
      func_0x082ee038(uRam08235640,uRam0823563c,1,(char)param_4[3]);
      *puRam08235644 = (char)param_4[3];
      aux_0823181c(0,2,1,0x94,0,0,0,0);
      uVar7 = 0xdac;
      uVar6 = 0x94;
      iVar2 = 1;
      break;
    case 0x22:
      if (_DAT_08235360[1] == '\0') {
        return 0;
      }
      func_0x082ee038(uRam08235640,uRam08235648,2,param_4[3],(char)param_4[4]);
      if ((char)param_4[4] == '\x02') {
        uVar7 = 0;
        iVar2 = param_4[3];
        uVar5 = 1;
        uVar6 = 0x9a;
        uVar4 = 2;
        goto code_r0x0823540c;
      }
      if ((char)param_4[4] != '\x03') {
        return 0;
      }
      uVar7 = 0;
      iVar2 = param_4[3];
      uVar6 = 0x9b;
      break;
    case 0x25:
      func_0x081fa274(param_4 + 3,param_4[2]);
      func_0x0823e550(0x23,0xc,param_4 + 3,param_4[2],0);
      return 0;
    case 0x26:
      func_0x082ee038(uRam08235640,uRam0823564c,5,param_4[3],(char)param_4[4],
                      *(undefined1 *)((int)param_4 + 0x11),param_4[5],param_4[6]);
      func_0x082528d0(&iStack_110,0,0x10);
      func_0x082528d0(&uStack_100,0,0xe5);
      func_0x08232044(&iStack_110);
      if (iStack_110 != param_4[3]) {
        uStack_100 = uStack_100 & 0xffffff00;
        func_0x0823214c(0,&uStack_100);
        func_0x08234fec(&uStack_100,0x21);
      }
      if (cStack_10b != *(char *)((int)param_4 + 0x11)) {
        uStack_100 = CONCAT31(uStack_100._1_3_,2);
        func_0x0823214c(2,&uStack_100);
        func_0x08234fec(&uStack_100,2);
      }
      if ((iStack_108 != param_4[5]) || (iStack_104 != param_4[6])) {
        uStack_100 = CONCAT31(uStack_100._1_3_,4);
        func_0x0823214c(4,&uStack_100);
        func_0x08243480(0x29,0x26,(int)&uStack_100 + 1,0xe4);
      }
      if (cStack_10c == (char)param_4[4]) {
        return 0;
      }
      uStack_100 = CONCAT31(uStack_100._1_3_,1);
      func_0x0823214c(1,&uStack_100);
      func_0x08234fec(&uStack_100,2);
      return 0;
    case 0x27:
      if (_DAT_08235360[1] == '\0') {
        return 0;
      }
      if (2 < *(byte *)(param_4 + 3)) {
        return 0;
      }
      if (*(byte *)(param_4 + 3) != 2) {
        func_0x0824395c();
      }
      uVar5 = 1;
      uVar7 = 100;
      uVar6 = 0xb0;
      goto code_r0x08235518;
    case 0x28:
      puVar1 = (undefined1 *)func_0x082ee408(1);
      uVar5 = uRam08235654;
      if (puVar1 != (undefined1 *)0x0) {
        iVar2 = param_4[3];
        *puVar1 = (char)iVar2;
        func_0x082ee038(uRam08235640,uRam08235650,2,puVar1,(char)iVar2);
        aux_0823181c(0,4,1,0xbd,puVar1,1,0,10);
        return 0;
      }
      goto code_r0x08235556;
    }
    uVar5 = 1;
    uVar4 = 2;
    goto code_r0x0823540c;
  }
  switch(param_2) {
  case 0:
    if (param_3 == 0) {
      func_0x082ee038(_DAT_08235350,uRam08235354);
      func_0x08234f4c();
      func_0x081f9e28(uRam08235358);
    }
    return 1;
  case 1:
    if (param_3 != 0x29) {
      return 0;
    }
    uVar5 = 0x20;
code_r0x082351ee:
    func_0x0824348e(0x29,uVar5);
    break;
  case 4:
    if (param_3 == 0) {
      uVar5 = uRam08235660;
      if (puRam08235658[1] != '\0') {
        func_0x08234fc8();
        return 0;
      }
code_r0x08235556:
      func_0x082ee038(uRam08235640,uVar5,0);
      return 0;
    }
    if (param_3 == 1) {
      uVar5 = uRam0823565c;
      if (puRam08235658[1] == '\0') goto code_r0x08235556;
      func_0x08234f9e();
    }
    break;
  case 7:
    if (param_3 != iRam0823535c) {
      return 0;
    }
    if ((param_4[2] & 0x80000U) != 0) {
      if ((param_4[3] & 0x80000U) != 0) {
        return 0;
      }
      iVar2 = func_0x082ea724(uRam08235368,param_4,6);
      if (iVar2 != 0) {
        return 0;
      }
      func_0x082ee038(_DAT_08235350,uRam0823536c,0);
      aux_082318d4(0x29,1);
      func_0x08234f4c();
      func_0x08234f5c();
      func_0x082528d0(uRam08235368,0,6);
      return 0;
    }
    if ((param_4[3] & 0x80000U) == 0) {
      return 0;
    }
    func_0x082528d0(_DAT_08235360 + 8,0,6);
    func_0x082ee988(pcVar8 + 8,param_4,6);
    func_0x082ee038(_DAT_08235350,uRam08235364,6,pcVar8[0xd],pcVar8[0xc],pcVar8[0xb],pcVar8[10],
                    pcVar8[9],pcVar8[8]);
    *pcVar8 = '\x01';
    func_0x0824348e(0x29,1);
    aux_082318d4(0x29,1);
    uVar7 = 100;
    goto code_r0x0823512a;
  case 10:
    if (param_3 != 0xf) {
      if (param_3 != 0x10) {
        return 0;
      }
      aux_082318d4(0x29,1);
      func_0x08234f4c();
      func_0x08234f5c();
      func_0x082528d0(uRam08235664,0,6);
      return 0;
    }
    if (*param_4 != 0) {
      return 0;
    }
    iVar2 = func_0x08248964(*(undefined2 *)((int)param_4 + 6));
    puVar1 = puRam08235658;
    if (iVar2 == 0) {
      return 0;
    }
    puVar3 = puRam08235658 + 8;
    *puRam08235658 = 1;
    func_0x082528d0(puVar3,0,6);
    func_0x082ee988(puVar1 + 8,iVar2,6);
    func_0x08234f84();
    aux_082318d4(0x29,1);
    aux_0823181c(0,4,0x29,1,0,0,0,500);
    aux_0823181c(0,4,0x29,1,0,0,0,0x5dc);
    uVar7 = 0x9c4;
code_r0x0823512a:
    uVar5 = 0x29;
    uVar6 = 1;
code_r0x08235518:
    iVar2 = 0;
    uVar4 = 4;
code_r0x0823540c:
    aux_0823181c(0,uVar4,uVar5,uVar6,iVar2,0,0,uVar7);
    return 0;
  }
  return 0;
}


/* function at 0824ad6c */

/* WARNING: Control flow encountered bad instruction data */

void aux_0824ad6c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


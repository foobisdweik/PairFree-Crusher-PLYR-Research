/* Selected Master .35 functions. Pointer-derived MCU mapping. Static evidence only. */

/* function at 0824a870 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * ds_0824a870(undefined4 param_1,uint param_2,uint *param_3,uint *param_4,undefined4 param_5)

{
  undefined1 *puVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  char *pcVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char *pcVar12;
  undefined4 uVar13;
  char *pcVar14;
  byte *pbVar15;
  char *pcVar16;
  char cVar17;
  undefined1 uVar18;
  undefined2 *puVar19;
  int *piVar20;
  char *pcVar21;
  undefined4 *puVar22;
  undefined4 uVar23;
  int iVar24;
  int iVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  byte bVar28;
  undefined4 *puVar29;
  uint uVar30;
  uint uVar31;
  char cVar32;
  bool bVar33;
  float fVar34;
  char cStack_89;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined2 auStack_7c [52];
  
  pcVar16 = pcRam0824bacc;
  pbVar15 = pbRam0824bac0;
  pcVar14 = pcRam0824b778;
  uVar13 = uRam0824b750;
  pcVar12 = pcRam0824b74c;
  uVar11 = _DAT_0824b730;
  uVar10 = uRam0824b72c;
  uVar9 = _DAT_0824b410;
  puVar8 = _DAT_0824b40c;
  pbVar7 = _DAT_0824b408;
  pcVar6 = pcRam0824b3ec;
  puVar5 = puRam0824b3d8;
  puVar1 = puRam0824b3d0;
  uVar4 = uRam0824b3cc;
  uVar3 = _DAT_0824b3c4;
  pbVar2 = pbRam0824b070;
  uVar26 = uRam0824b04c;
  uVar27 = uRam0824ab24;
  pcVar21 = pcRam0824ab20;
  uVar23 = _DAT_0824aafc;
  if (0xb < param_2) {
    if (param_2 == 0x24) {
      switch(param_3) {
      case (uint *)0x0:
        func_0x082ee038(_DAT_0824c0c0,uRam0824c0cc,0);
        return (uint *)0x0;
      case (uint *)0x1:
        func_0x082ee038(_DAT_0824c0c0,uRam0824c0d0,0);
        func_0x0824a7fc();
        func_0x0824a844();
        return (uint *)0x0;
      default:
        func_0x082ee038(_DAT_0824c0c0,_DAT_0824c0f8,1,param_3);
        return (uint *)0x0;
      case (uint *)0x6:
        func_0x082ee038(_DAT_0824c0c0,uRam0824c0d4,0);
        return (uint *)0x0;
      case (uint *)0x7:
        func_0x082ee038(_DAT_0824c0c0,uRam0824c0d8,0);
        return (uint *)0x0;
      case (uint *)0x8:
        func_0x082ee038(_DAT_0824c0c0,uRam0824c0dc,0);
        return (uint *)0x0;
      case (uint *)0x9:
        func_0x082ee038(_DAT_0824c0c0,uRam0824c0e0,0);
        return (uint *)0x0;
      case (uint *)0xa:
        *puRam0824c0e4 = 1;
        func_0x0824a458();
        iVar25 = func_0x081c9b4c();
        if (iVar25 == 1) {
          func_0x08243e94();
        }
        aux_082318d4(1,0xc6);
        aux_0823181c(0,2,1,0xc6,0,0,0,0x32);
        func_0x082ee038(_DAT_0824c0c0,uRam0824c0e8,0);
        return (uint *)0x0;
      case (uint *)0xd:
        func_0x082ee038(_DAT_0824c0c0,uRam0824c0ec,0);
        return (uint *)0x0;
      case (uint *)0xe:
        goto code_r0x0824bfa2;
      }
    }
    if (param_2 != 0x27) {
      if (param_2 != 0x1f) {
        return (uint *)0x0;
      }
      func_0x082ee038(_DAT_0824c0c0,_DAT_0824c100,1,param_3);
      return (uint *)0x0;
    }
    func_0x082ee038(_DAT_0824c0c0,_DAT_0824c0fc,1,param_3);
    return (uint *)0x0;
  }
  switch(param_2) {
  case 0:
    if (param_3 == (uint *)0x0) {
      func_0x082ee038(_DAT_0824aafc,_DAT_0824aaf8);
      uStack_84 = 1;
      iVar25 = func_0x081c62f8(0xf600,&uStack_88,&uStack_84);
      puVar1 = _DAT_0824ab00;
      if (iVar25 == 0) {
        *_DAT_0824ab00 = (char)uStack_88 != '\0';
      }
      func_0x0822ee6c(_DAT_0824ab04);
      func_0x0822ee88(*puVar1);
      func_0x08242b44();
      uStack_84 = 1;
      iVar25 = func_0x081c62f8(0xf5ff,&uStack_88,&uStack_84);
      puVar1 = _DAT_0824ab08;
      if (iVar25 == 0) {
        *_DAT_0824ab08 = (char)uStack_88 != '\0';
      }
      func_0x081ba188(0x133,0,*puVar1);
      func_0x082ee038(_DAT_0824aafc,_DAT_0824ab0c,0);
      ds_0824d388();
      func_0x0824cee0();
      func_0x0824a208(0);
      func_0x0824db30();
      func_0x08242470(2);
      func_0x0824cbc0();
      func_0x0824c454();
      func_0x081fa84e();
      func_0x081fa818();
      aux_0823181c(0,3,1,0x8b,0,0,0,0);
      aux_0823181c(0,3,1,0xad,0,0,0,0);
      aux_0823181c(0,3,1,0xa5,0,0,0,600);
      aux_0823181c(0,3,1,0xb6,0,0,0,100);
      return (uint *)0x1;
    }
    if (param_3 != (uint *)0x1) {
      return (uint *)0x1;
    }
    func_0x082ee038(_DAT_0824aafc,_DAT_0824ab10,0);
    return (uint *)0x1;
  case 1:
    if ((uint *)0xcb < param_3) goto code_r0x0824aae6;
    if (param_3 < (uint *)0x4c) {
      if (&MemManage < param_3) {
        if (param_3 == (uint *)&Reserved4) {
          *puRam0824b3d0 = param_4 != (uint *)0x0;
          func_0x0824a458();
          func_0x082ee038(_DAT_0824b3c4,uRam0824b3d4,1,*puVar1);
          func_0x0824a284(100);
          return (uint *)0x0;
        }
        if (param_3 == (uint *)0x2b) {
          func_0x08232930();
          func_0x082356f8();
          puVar22 = &uStack_84;
          puVar29 = puRam0824bab0;
          do {
            uVar23 = *puVar29;
            uVar27 = puVar29[1];
            puVar29 = puVar29 + 2;
            *puVar22 = uVar23;
            puVar22[1] = uVar27;
            puVar22 = puVar22 + 2;
          } while (puVar29 != puRam0824bab0 + 4);
          *(undefined2 *)puVar22 = *(undefined2 *)puVar29;
          uVar23 = func_0x081c6324(0x1900,&uStack_84,0x12);
          func_0x082ee038(_DAT_0824bab8,uRam0824bab4,1,uVar23);
          return (uint *)0x0;
        }
        if (param_3 != (uint *)0x26) goto code_r0x0824aae6;
        *(bool *)uRam0824b048 = param_4 != (uint *)0x0;
        func_0x082ee038(_DAT_0824b050,uVar26,1);
        func_0x0824a458();
        func_0x0824a284(100);
        if (*pcRam0824b054 == '\0') {
          func_0x0824a7fc();
          return (uint *)0x0;
        }
      }
      else {
        if (param_3 < (uint *)0x4) {
code_r0x0824aae6:
          func_0x082ee038(_DAT_0824aafc,uRam0824ab38,1,param_3);
          return (uint *)0x0;
        }
        switch(param_3) {
        case (uint *)0x4:
        case (uint *)0x5:
        case (uint *)0x6:
        case (uint *)0xa:
        case (uint *)0xb:
          if (*pbRam0824bac0 != 0) {
            aux_0823181c(0,2,1,0x9f,0,0,0,0);
          }
          func_0x08242b80();
          func_0x082ee038(_DAT_0824bab8,uRam0824bac4,1,param_3);
          return (uint *)0x0;
        case (uint *)0x7:
          func_0x082ee038(_DAT_0824bab8,uRam0824babc,1,param_3);
          return (uint *)0x0;
        case (uint *)0x8:
          *pcRam0824b74c = param_4 != (uint *)0x0;
          func_0x082ee038(uVar11,uVar13,1);
          func_0x0824a458();
          if ((*pcVar12 == '\0') && (*pcRam0824b754 != '\0')) {
            aux_0823181c(0,2,1,0x9f,0,0,0,0);
          }
          if ((*pcVar12 == '\0') && (*pcRam0824b758 != '\0')) {
            *pcRam0824b758 = '\0';
            return (uint *)0x0;
          }
          break;
        default:
          goto code_r0x0824aae6;
        case (uint *)0x10:
          func_0x0824a4c0();
          return (uint *)0x1;
        }
      }
      goto LAB_0824adce;
    }
    break;
  case 2:
    func_0x0823e980(&cStack_89,&uStack_88);
    uVar30 = uStack_88 & 0xff;
    func_0x082ee038(_DAT_0824bab8,uRam0824bae0,3,cStack_89,uVar30,param_3);
    func_0x0824c3c4(cStack_89,uStack_88 & 0xff);
    if (param_4 == (uint *)0x0) {
      uVar31 = func_0x08241e24(cStack_89,uStack_88 & 0xff);
      uVar23 = uRam0824bae8;
    }
    else {
      uVar31 = (uint)(ushort)*param_4;
      uVar23 = uRam0824bae4;
    }
    func_0x082ee038(_DAT_0824bab8,uVar23,1,uVar31,uVar30,param_3);
    pbVar7 = _DAT_0824be48;
    pbVar2 = pbRam0824be40;
    if (0xf00a < uVar31) {
      return (uint *)0x0;
    }
    if (0xf000 < uVar31) {
      switch(uVar31) {
      case 0xf001:
        aux_082318d4(1,0xc9);
        func_0x082ef1e8(0,piRam0824be18);
        if (*pcRam0824be1c == '\0') {
          aux_0823181c(0,3,1,0x8a,0,0,0,0);
          uVar23 = uRam0824be3c;
        }
        else {
          uVar23 = func_0x082ee408(2);
          aux_0823181c(1,2,3,uRam0824be30,uVar23,2,0,0);
          uVar23 = uRam0824be34;
        }
        func_0x082ee038(_DAT_0824be24,uVar23,0);
        func_0x082ee038(_DAT_0824be24,uRam0824be38,0);
        return (uint *)0x0;
      case 0xf002:
        aux_082318d4(1,0xc9);
        func_0x082ef1e8(0,piRam0824be18);
        if (*pcRam0824be1c == '\0') {
          aux_0823181c(0,3,1,0x8a,1,0,0,0);
          uVar23 = uRam0824be2c;
        }
        else {
          uVar23 = func_0x082ee408(2);
          aux_0823181c(1,2,3,0x10001,uVar23,2,0,0);
          uVar23 = uRam0824be20;
        }
        func_0x082ee038(_DAT_0824be24,uVar23,0);
        func_0x082ee038(_DAT_0824be24,uRam0824be28,0);
        return (uint *)0x0;
      case 0xf003:
        aux_0823181c(0,3,1,0x8c,0,0,0,0);
        return (uint *)0x0;
      case 0xf004:
        aux_0823181c(0,2,1,0x9f,*pbRam0824be40 ^ 1,0,0,0);
        func_0x0824018c(*pbVar2 ^ 1);
        func_0x082ee038(_DAT_0824be24,uRam0824be44,1,*pbVar2 ^ 1);
        return (uint *)0x0;
      case 0xf005:
        func_0x08243e28();
        return (uint *)0x0;
      case 0xf006:
        func_0x08243e4c();
        return (uint *)0x0;
      case 0xf007:
        iVar25 = func_0x08241b4c();
        if ((*_DAT_0824be48 == 0) && (iVar24 = aux_0824d664(), iVar24 == 2)) {
          ds_08243d24(*(byte *)(iVar25 + 4) ^ 1);
          func_0x08241b60(*(byte *)(iVar25 + 4) ^ 1);
          func_0x082401f8(*(undefined1 *)(iVar25 + 4));
          aux_0823181c(0,3,1,0x8b,0,0,0,0);
        }
        func_0x082ee038(_DAT_0824be24,_DAT_0824be50,0);
        return (uint *)0x0;
      case 0xf008:
        func_0x08243e70();
        return (uint *)0x0;
      case 0xf009:
        func_0x08243e28();
        func_0x081ba188(0x2ca,0,0);
        func_0x082ee038(_DAT_0824be24,_DAT_0824be54,0);
        return (uint *)0x0;
      case 0xf00a:
        aux_082318d4(1,0xc9);
        func_0x082ef1e8(0,&uStack_84);
        fVar34 = (float)VectorFloatToUnsignedFixed(uStack_84 - *piRam0824be18,0x20,0xf);
        if (1.5 < fVar34) {
          aux_0823181c(0,3,1,0xc9,0,0,0,700);
        }
        break;
      default:
        return (uint *)0x0;
      }
      return (uint *)0x0;
    }
    if (uVar31 == 0x3e) {
      *_DAT_0824be48 = *_DAT_0824be48 ^ 1;
      func_0x08243d50();
      aux_0823181c(0,3,1,0x87,0,0,0,0);
      func_0x082ee038(_DAT_0824be24,_DAT_0824be4c,1,*pbVar7);
      return (uint *)0x0;
    }
    if (0x3e < uVar31) {
      if (0x96 < uVar31) {
        if (uVar31 != 0x99) {
          return (uint *)0x0;
        }
        func_0x082528d0(&uStack_80,0,0x10);
        uStack_84 = 2;
        if (*_DAT_0824be14 != '\0') {
          func_0x082439a4(&uStack_84,0);
          func_0x0824226c(0x1a,0x4b0,2);
        }
        return (uint *)0x0;
      }
      if (uVar31 < 0x95) {
        return (uint *)0x0;
      }
      func_0x08243e04();
      return (uint *)0x0;
    }
    if (uVar31 == 0x17) {
      *_DAT_0824be14 = '\x01';
      aux_0823181c(0,3,1,0xa8,0,0,0,700);
      func_0x0824a458();
      return (uint *)0x0;
    }
    if (uVar31 < 0x18) {
      if (1 < (uVar31 - 10 & 0xffff)) {
        return (uint *)0x0;
      }
      aux_082318d4(1,0xc9);
      func_0x082ef1e8(0,piRam0824be18);
      return (uint *)0x0;
    }
    if (uVar31 != 0x18) {
      return (uint *)0x0;
    }
    if (*_DAT_0824baec != '\0') {
      *_DAT_0824baec = '\0';
      func_0x0824cc32();
      func_0x082ee038(_DAT_0824bab8,_DAT_0824baf0,0);
      return (uint *)0x0;
    }
    func_0x082ee038(_DAT_0824bab8,_DAT_0824baf4,0,_DAT_0824baec,uVar30,param_3);
    return (uint *)0x1;
  case 3:
    if (param_4 != (uint *)0x0) {
      func_0x0823e9a8(&cStack_89,&uStack_88,&uStack_84,param_3);
    }
    return (uint *)0x0;
  case 4:
    uVar26 = uRam0824ab34;
    switch(param_3) {
    case (uint *)0x0:
      cVar17 = func_0x0822f3ec(7);
      pcVar21 = pcRam0824ab14;
      uStack_84 = CONCAT31(uStack_84._1_3_,cVar17);
      if (*pcRam0824ab14 != cVar17) {
        func_0x082401bc();
        *pcVar21 = (char)uStack_84;
        aux_0823e550(1,200,&uStack_84,1,0);
      }
      func_0x082ee038(_DAT_0824aafc,uRam0824ab18,2,param_4,uStack_84 & 0xff);
      goto code_r0x0824aa14;
    case (uint *)0x1:
      uVar26 = uRam0824ab1c;
      param_3 = param_4;
      break;
    case (uint *)0x2:
      *pcRam0824ab20 = param_4 != (uint *)0x0;
      func_0x082ee038(uVar23,uVar27,1);
      if ((*pcVar21 == '\0') && (iVar25 = func_0x08241e60(), iVar25 == 0)) {
        func_0x082ee038(_DAT_0824aafc,uRam0824ab28,0);
        aux_0823181c(0,2,1,5,0,0,0,100);
      }
      if (*pcVar21 == '\0') {
        func_0x0822f0c4(6);
        goto code_r0x0824aa14;
      }
      cVar17 = func_0x0822f3ec(3);
      if ((byte)(cVar17 - 1U) < 2) {
        uVar23 = 1000;
      }
      else {
        uVar23 = 300;
      }
      aux_0823181c(0,2,1,0xc6,0,0,0,uVar23);
      uVar27 = 0x24;
      uVar23 = 7;
      goto code_r0x0824aaa2;
    case (uint *)0x3:
      uVar26 = uRam0824ab2c;
      param_3 = (uint *)((uint)param_4 & 0xff);
      break;
    case (uint *)0x4:
      func_0x082ee038(_DAT_0824aafc,uRam0824ab30,0);
      uVar27 = 0x36;
      uVar23 = 8;
code_r0x0824aaa2:
      func_0x0824226c(uVar23,uVar27,4);
      goto code_r0x0824aa14;
    }
    func_0x082ee038(_DAT_0824aafc,uVar26,1,param_3);
code_r0x0824aa14:
    func_0x0824a284(500);
    return (uint *)0x0;
  default:
    return (uint *)0x0;
  case 10:
    if (param_3 == (uint *)&MemManage) {
      *_DAT_0824c0b4 = '\0';
      func_0x0824a284(0);
      func_0x0824a458();
      aux_0823181c(0,4,1,100,1,0,0,1000);
      if (*_DAT_0824c0b8 != '\0') {
        func_0x0824a7fc();
      }
      aux_0824d700(1);
      func_0x082ee038(_DAT_0824c0c0,_DAT_0824c0bc,0);
      return (uint *)0x0;
    }
    if (param_3 != (uint *)0x11) {
      if (param_3 == (uint *)0xf) {
        *_DAT_0824be58 = 1;
        func_0x0824226c(0,0,2);
        func_0x0824a284(0);
        func_0x0824a458();
        aux_0823181c(0,4,1,100,0,0,0,0);
        aux_0824d6d8(1);
        func_0x082ee038(_DAT_0824be24,_DAT_0824be5c,0);
        return (uint *)0x0;
      }
      func_0x082ee038(_DAT_0824c0c0,uRam0824c0c8,1,param_3);
      return (uint *)0x0;
    }
    func_0x082ee038(_DAT_0824c0c0,uRam0824c0c4,0);
    func_0x0824a7fc();
    return (uint *)0x0;
  case 0xb:
    if (param_3 != (uint *)0x17) {
      if (param_3 == (uint *)0x19) {
        *_DAT_0824c104 = 0;
        func_0x0824226c(0x25,0,3);
        func_0x082ee038(_DAT_0824c0c0,_DAT_0824c110,0);
        return (uint *)0x0;
      }
      if (param_3 != (uint *)0x15) {
        return (uint *)0x0;
      }
      *_DAT_0824c104 = 1;
      func_0x0824226c(0x25,0xffff,3);
      func_0x082ee038(_DAT_0824c0c0,_DAT_0824c108,0);
      return (uint *)0x0;
    }
    func_0x0824226c(0x25,0,3);
    iVar25 = func_0x081f0a10();
    func_0x082ee038(_DAT_0824c0c0,_DAT_0824c10c,1,iVar25);
    if ((iVar25 - 8U & 0xff) < 2) {
      uStack_84 = CONCAT31(uStack_84._1_3_,1);
      func_0x081c6324(0xf5fe,&uStack_84);
      return (uint *)0x0;
    }
    if ((iVar25 == 2) && (*_DAT_0824c0b4 != '\0')) {
      func_0x0824348e(0x29,0x28);
      return (uint *)0x0;
    }
    goto LAB_0824adce;
  }
  switch(param_3) {
  case (uint *)0x4c:
    bVar28 = (byte)*param_4;
    uStack_84 = CONCAT31(uStack_84._1_3_,bVar28);
    if (bVar28 == 0x14) {
      func_0x08243c84();
    }
    else if (bVar28 == 10) {
      func_0x08243de0();
    }
    else if (bVar28 == 0) {
      func_0x08243cd4();
    }
    func_0x08221c08(7,uStack_84 & 0xff);
    param_4 = (uint *)0x0;
    aux_0823e550(1,0x93,&uStack_84,1,0);
    break;
  case (uint *)0x4d:
    uVar30 = *param_4;
    param_4 = (uint *)0x0;
    uStack_84 = CONCAT31(uStack_84._1_3_,(byte)uVar30);
    aux_0823e550(1,0xbe,&uStack_84,1,0);
    break;
  default:
    goto code_r0x0824aae6;
  case (uint *)0x63:
    *pcRam0824b3c8 = param_4 != (uint *)0x0;
    func_0x082ee038(_DAT_0824b3c4,uVar4,1);
    func_0x0824a284(100);
    param_4 = (uint *)0x0;
    break;
  case (uint *)0x64:
    if (param_4 != (uint *)0x0) {
      func_0x0824a844();
      return (uint *)0x0;
    }
    goto LAB_0824adce;
  case (uint *)0x84:
    func_0x082ee038(_DAT_0824b050,uRam0824b060,0);
    param_4 = (uint *)0x0;
    *puRam0824b064 = 1;
    break;
  case (uint *)0x85:
    func_0x08234b00(1,0,uRam0824b744);
    func_0x082528d0(&uStack_84,0,0x14);
    uStack_84 = 2;
    uStack_80 = uRam0824b748;
    if (*pcRam0824b74c != '\0') {
      func_0x082439a4(&uStack_84,0);
    }
    param_4 = (uint *)0x0;
    break;
  case (uint *)0x87:
    if (*pcRam0824b3c8 != '\0') {
      func_0x08246a00(*puRam0824b3d8);
    }
    param_4 = (uint *)0x0;
    func_0x082401da(*puVar5);
    aux_0823181c(0,3,1,0x8b,0,0,0,0);
    break;
  case (uint *)0x89:
    func_0x082ee038(_DAT_0824b050,_DAT_0824b068,2,*param_4,(byte)param_4[1]);
    if ((*_DAT_0824b06c != '\0') && (func_0x0824ccb8(*param_4 & 0xff), (byte)param_4[1] != 0)) {
      func_0x0824019e(*param_4 & 0xff);
      return (uint *)0x0;
    }
    goto LAB_0824adce;
  case (uint *)0x8a:
    piVar20 = (int *)func_0x08241b4c();
    if (*pcRam0824b074 != '\0') {
      func_0x082ee038(_DAT_0824b050,uRam0824b07c,0);
      return (uint *)0x0;
    }
    if ((char)piVar20[1] != '\0') {
      uVar30 = 0xffffffd8;
      iVar25 = *piVar20;
      cVar32 = (char)iVar25;
      cVar17 = cVar32;
      if (iVar25 < -0x28) {
        cVar17 = -0x28;
      }
      if (param_4 == (uint *)0x0) {
        if (cVar17 < -0x24) {
          func_0x082ee038(_DAT_0824b050,uRam0824b08c,0);
          func_0x08243cd4();
          goto code_r0x0824af5e;
        }
        cVar32 = cVar32 + -3;
      }
      else {
        if ('\x14' < cVar17) {
          func_0x082ee038(_DAT_0824b050,uRam0824b080);
          uVar30 = 0x18;
          func_0x08243c84();
          goto code_r0x0824af5e;
        }
        if (iVar25 < -0x28) {
          uVar30 = 0xffffffdb;
          goto code_r0x0824af5e;
        }
        cVar32 = cVar32 + '\x03';
      }
      uVar30 = (uint)cVar32;
code_r0x0824af5e:
      func_0x082ee038(_DAT_0824b050,uRam0824b084,2,*piVar20,uVar30);
      uVar31 = uVar30;
      if (uVar30 == 0xffffffd8) {
        uVar31 = 0xffffff9c;
      }
      iVar25 = func_0x08241b66(uVar31);
      if (iVar25 != 0) {
        func_0x082ee038(_DAT_0824b050,uRam0824b088,0);
        return (uint *)0x0;
      }
      iVar25 = func_0x0823567c();
      if (iVar25 == 1) {
        uVar23 = 0x212;
        if (param_4 == (uint *)0x0) {
          uVar23 = 0x213;
        }
        iVar25 = (uVar30 + 0x28) * 100;
        if (iVar25 < 0) {
          iVar25 = iVar25 + 0x3f;
        }
        uStack_84 = CONCAT31(uStack_84._1_3_,(char)(iVar25 >> 6));
        func_0x08243480(2,uVar23,&uStack_84,1);
      }
      func_0x08240216(uVar30 & 0xff);
      func_0x082ee038(_DAT_0824b050,uRam0824b090,0);
      return (uint *)0x0;
    }
    goto LAB_0824adce;
  case (uint *)0x8b:
    puVar22 = (undefined4 *)func_0x08241b4c();
    if (*pcRam0824b074 == '\0') {
      bVar28 = *(byte *)(puVar22 + 1);
    }
    else {
      bVar28 = 0;
    }
    if ((bVar28 & 1) == 0) {
      func_0x08221e7c(0xb,*puVar22);
      iVar25 = func_0x08222034(0);
    }
    else {
      iVar25 = func_0x08221e54(0);
    }
    if (iVar25 == 0) {
      func_0x082ee038(_DAT_0824b050,uRam0824b098,0);
      param_4 = (uint *)0x0;
    }
    else {
      func_0x082ee038(_DAT_0824b050,uRam0824b094,0);
      param_4 = (uint *)0x0;
    }
    break;
  case (uint *)0x8c:
    *pbRam0824b070 = *pbRam0824b070 ^ 1;
    func_0x08243d7c();
    if (((*pcRam0824b074 == '\0') && (*pbVar2 == 0)) &&
       (iVar25 = func_0x08241b4c(), *(char *)(iVar25 + 4) == '\0')) {
      func_0x08241b60(1);
      aux_0823181c(0,3,1,0x8b,0,0,0,0);
      func_0x082401f8(1);
    }
    bVar28 = *pbVar2;
    func_0x082ee038(_DAT_0824b050,uRam0824b078,2,bVar28 ^ 1,bVar28);
    param_4 = (uint *)0x0;
    break;
  case (uint *)0x8e:
    uVar23 = func_0x082387bc();
    func_0x082ee038(_DAT_0824b3c4,uRam0824b3c0,2,param_4 != (uint *)0x0,uVar23);
    if ((param_4 == (uint *)0x0) && (iVar25 = func_0x082387bc(), iVar25 == 0)) {
      aux_0823e550(1,0x85,0,0,0);
      return (uint *)0x0;
    }
    goto LAB_0824adce;
  case (uint *)0x8f:
    if ((*pcRam0824b3dc == '\0') && (*pcRam0824b3e0 == '\0')) {
      aux_082318d4(1,0x90);
      aux_082318d4(1,0x91);
      uVar23 = func_0x081c9b4c();
      func_0x082ee038(_DAT_0824b3c4,uRam0824b3e4,2,(uint)param_4 & 0xff,uVar23);
      aux_0823181c(0,2,1,0x90,0,0,0,200);
      aux_0823181c(0,2,1,0x91,param_4,0,0,0x708);
      return (uint *)0x0;
    }
    goto LAB_0824adce;
  case (uint *)0x90:
    func_0x082ee038(_DAT_0824b3c4,uRam0824b3e8,0);
    func_0x081c94c8();
    func_0x081c9b08(0);
    param_4 = (uint *)0x0;
    break;
  case (uint *)0x91:
    uVar30 = (uint)param_4 & 0xff;
    func_0x082ee038(_DAT_0824b3c4,uRam0824b3f0,2,uVar30,*pcRam0824b3ec);
    func_0x081c9b08(uVar30);
    if (*pcVar6 != '\0') {
      func_0x081c9a04(uVar30);
      func_0x0824690c(uVar30 == 1);
      return (uint *)0x0;
    }
    goto LAB_0824adce;
  case (uint *)0x96:
    param_4 = (uint *)0x0;
    *puRam0824b75c = 0;
    break;
  case (uint *)0x97:
    if (*pcRam0824b3f4 != '\0') {
      uStack_88 = CONCAT22(uStack_88._2_2_,1);
      uStack_84 = 0;
      uStack_80 = 0;
      iVar25 = func_0x081def70(uStack_88,&uStack_84);
      if (iVar25 == 0) {
        if (((uStack_84 & 0xff) == 100) || (uStack_84._1_1_ == 'd')) {
          func_0x08243c84();
        }
        else if ((uStack_84 & 0xffff) == 0) {
          func_0x08243cd4();
        }
        func_0x082ee038(_DAT_0824b3c4,uRam0824b3f8,2,uStack_84 & 0xff,uStack_84 >> 8 & 0xff);
      }
      else {
        func_0x082ee038(_DAT_0824b3c4,uRam0824b3fc,0);
      }
      return (uint *)0x0;
    }
    if (*pcRam0824b3c8 != '\0') {
      iVar25 = func_0x08245fe4(1);
      iVar24 = func_0x08245fe4(0);
      func_0x082ee038(_DAT_0824b3c4,uRam0824b400,2,*(undefined1 *)(iVar25 + 2),
                      *(undefined1 *)(iVar24 + 3));
      if ((*(short *)(iVar25 + 2) == 0x6464) || (*(short *)(iVar24 + 2) == 0x6464))
      goto LAB_0824b2b0;
      if ((*(short *)(iVar25 + 2) == 0) || (*(short *)(iVar24 + 2) == 0)) goto LAB_0824b2c2;
    }
    goto LAB_0824adce;
  case (uint *)0x98:
    uVar30 = *param_4;
    param_4 = (uint *)0x0;
    *_DAT_0824b404 = (byte)uVar30;
    func_0x0824a4c0();
    break;
  case (uint *)0x99:
    if (param_4 == (uint *)0x0) {
      aux_0824d700(0);
    }
    else {
      aux_0824d6d8(0);
      param_4 = (uint *)0x0;
    }
    break;
  case (uint *)0x9a:
    if (param_4 == (uint *)0x64) {
LAB_0824b2b0:
      func_0x08243c84();
      return (uint *)0x0;
    }
    if (param_4 == (uint *)0x0) {
LAB_0824b2c2:
      func_0x08243cd4();
      return (uint *)0x0;
    }
    goto LAB_0824adce;
  case (uint *)0x9b:
    bVar28 = (byte)((uint)param_4 / 5);
    if (*_DAT_0824b408 == 0xff) {
      *_DAT_0824b408 = bVar28;
    }
    if ((uint)param_4 / 5 != (uint)*pbVar7) {
      *pbVar7 = bVar28;
      func_0x08240234();
      return (uint *)0x0;
    }
    goto LAB_0824adce;
  case (uint *)0x9c:
    uStack_84 = 1;
    iVar25 = func_0x081c62f8(0xf601,&cStack_89,&uStack_84);
    if (iVar25 != 0) {
      cStack_89 = '\n';
    }
    cVar17 = '\x14' - cStack_89;
    pcVar21 = (char *)func_0x08241b4c();
    iVar25 = (*pcVar21 + 0x28) * 100;
    if (iVar25 < 0) {
      iVar25 = iVar25 + 0x3f;
    }
    uStack_88 = CONCAT31(CONCAT21(uStack_88._2_2_,(char)((uint)(iVar25 << 0x12) >> 0x18)),
                         cVar17 * '\x05');
    func_0x08243480(1,0x9c,&uStack_88,2);
    param_4 = (uint *)0x0;
    break;
  case (uint *)0x9d:
    func_0x082ee988(uRam0824b760,param_4,0x10);
    if ((*pcRam0824b764 != '\0') && (*pcRam0824b754 != '\0')) {
      func_0x081ba188(0x2c1,0,uRam0824b760);
      return (uint *)0x0;
    }
    goto LAB_0824adce;
  case (uint *)0x9f:
    bVar33 = param_4 != (uint *)0x0;
    aux_0823181c(0,2,1,0xa1,bVar33,0,0,0);
    aux_0823181c(0,2,1,0xa0,bVar33,0,0,0);
    func_0x082ee038(_DAT_0824bab8,uRam0824bac8,1,bVar33);
    param_4 = (uint *)0x0;
    break;
  case (uint *)0xa0:
    uVar30 = (uint)param_4 & 1;
    func_0x082ee038(_DAT_0824bab8,uRam0824bad4,2,*pbRam0824bac0,uVar30);
    if (*pbVar15 != uVar30) {
      cVar17 = *pcRam0824bacc;
      *pbVar15 = (byte)uVar30;
      func_0x08235700(uVar30,cVar17);
      if (((uint)param_4 & 0xff00) == 0) {
        func_0x08243f10(*pbVar15);
      }
      func_0x0823beb0();
      func_0x081ba188(0x2c0,*pbVar15,0);
      aux_082318d4(1,0xc5);
      aux_0823181c(0,2,1,0xc5,0,0,0,0);
      return (uint *)0x0;
    }
    goto LAB_0824adce;
  case (uint *)0xa1:
    bVar33 = param_4 != (uint *)0x0;
    func_0x082ee038(_DAT_0824bab8,uRam0824bad8,2,*pcRam0824bacc,bVar33);
    if ((bool)*pcVar16 != bVar33) {
      bVar28 = *pbRam0824bac0;
      *pcVar16 = bVar33;
      func_0x08235700(bVar28,bVar33);
      aux_082318d4(1,0xc5);
      if (*pcVar16 == '\0') {
        uVar23 = 100;
      }
      else {
        uVar23 = 1000;
      }
      aux_0823181c(0,2,1,0xc5,0,0,0,uVar23);
      return (uint *)0x0;
    }
    goto LAB_0824adce;
  case (uint *)0xa2:
    if (*pbRam0824bac0 != 0) {
      aux_0823181c(0,2,1,0x9f,0,0,0,0);
    }
    param_4 = (uint *)0x0;
    *puRam0824badc = 0;
    aux_082318d4(1,0xa3);
    aux_0823181c(0,2,1,0xa3,0,0,0,4000);
    aux_0823181c(0,2,1,199,1,0,0,500);
    break;
  case (uint *)0xa3:
    param_4 = (uint *)0x0;
    *puRam0824badc = 1;
    aux_0823181c(0,2,1,199,0,0,0,0);
    break;
  case (uint *)0xa5:
    param_4 = (uint *)0x0;
    aux_0823181c(0,4,1,0xb4,0,0,0,300);
    break;
  case (uint *)0xa7:
    func_0x08243b20();
    param_4 = (uint *)0x1;
    break;
  case (uint *)0xa8:
    func_0x0824cc2c();
    param_4 = (uint *)0x0;
    break;
  case (uint *)0xa9:
    bVar33 = param_4 != (uint *)0x0;
    param_4 = (uint *)0x0;
    *_DAT_0824b40c = bVar33;
    func_0x082ee038(uVar3,uVar9,1);
    aux_0823181c(0,2,1,0x94,0,0,0,0);
    func_0x081ba188(0x133,0,*puVar8,0);
    aux_0823181c(0,2,1,0x94,1,0,0,500);
    func_0x081c6324(0xf5ff,puVar8,1);
    break;
  case (uint *)0xaa:
    func_0x08242518();
    param_4 = (uint *)0x0;
    break;
  case (uint *)0xab:
    if (((uint)param_4 & 0xff) != 5) {
      func_0x0822f0c4();
      return (uint *)0x0;
    }
    iVar25 = func_0x08241e60();
    func_0x082ee038(_DAT_0824b050,_DAT_0824b05c,2,*_DAT_0824b058,iVar25);
    if (iVar25 != 0) {
      aux_0823181c(0,4,1,0xaf,0,0,0,0);
      aux_0823181c(0,4,1,0x10,0,0,0,2000);
      return (uint *)0x0;
    }
    goto LAB_0824adce;
  case (uint *)0xac:
    ds_0824d3cc();
    param_4 = (uint *)0x0;
    break;
  case (uint *)0xad:
    puVar22 = (undefined4 *)func_0x08241b4c();
    if (*(char *)(puVar22 + 1) != '\0') {
      func_0x08221e7c(0,*puVar22);
      return (uint *)0x1;
    }
    goto code_r0x0824b3a0;
  case (uint *)0xae:
    if (*_DAT_0824b404 == 0) {
      aux_0823181c(0,4,1,0xaf,0,0,0,0);
      return (uint *)0x1;
    }
code_r0x0824b3a0:
    param_4 = (uint *)0x1;
    break;
  case (uint *)0xb0:
    uVar18 = func_0x08243968();
    uStack_84 = CONCAT31(uStack_84._1_3_,uVar18);
    func_0x08240074(0x2c81,&uStack_84,1);
    param_4 = (uint *)0x1;
    break;
  case (uint *)0xb2:
    bVar28 = (byte)*param_4;
    func_0x082ee038(_DAT_0824b730,uRam0824b768,2,bVar28,bVar28 ^ 1);
    if ((((*pcRam0824b76c != '\0') || (*pcRam0824b770 != '\0')) || (*pcRam0824b774 != '\0')) &&
       (*pcRam0824b754 != '\0')) {
      func_0x0824a7e0(bVar28);
      return (uint *)0x0;
    }
    goto LAB_0824adce;
  case (uint *)0xb3:
    *pbRam0824b728 = (byte)*param_4;
    func_0x082ee038(_DAT_0824b730,uVar10,1);
    param_4 = (uint *)0x0;
    func_0x0824a4c0();
    break;
  case (uint *)0xb4:
    func_0x0824d6a8();
    param_4 = (uint *)0x0;
    break;
  case (uint *)0xb5:
    if (param_4 == (uint *)0x0) {
      func_0x0824a624();
    }
    else {
      func_0x0824a57c();
      param_4 = (uint *)0x0;
    }
    break;
  case (uint *)0xb6:
    func_0x0824a388();
    param_4 = (uint *)0x1;
    break;
  case (uint *)0xb8:
    param_4 = (uint *)func_0x0824a658(param_4,param_5);
    break;
  case (uint *)0xb9:
    if (*(byte *)((int)param_4 + 1) == 0xff) {
      uStack_84 = 0;
      func_0x082528d0(&uStack_80,0,0x67);
      uStack_88 = CONCAT31(uStack_88._1_3_,0x69);
      ds_0824cda4(1,(int)&uStack_84 + 2,&uStack_88);
      uStack_84 = CONCAT22(uStack_84._2_2_,0x2cd4);
      func_0x082ee038(_DAT_0824b730,uRam0824b734,0);
      uVar27 = uRam0824b738;
      uVar23 = _DAT_0824b730;
      puVar22 = &uStack_84;
      for (iVar25 = 0; iVar25 != 0x6b; iVar25 = iVar25 + 1) {
        func_0x082ee038(uVar23,uVar27,2,iVar25,*(undefined1 *)puVar22);
        puVar22 = (undefined4 *)((int)puVar22 + 1);
      }
      aux_0823e550(1,0xb8,&uStack_84,0x6b,0);
      func_0x082ee038(_DAT_0824b730,_DAT_0824b73c,0);
      param_4 = (uint *)0x1;
    }
    else {
      func_0x0824cb24((byte)*param_4,*(byte *)((int)param_4 + 1),*(undefined4 *)((int)param_4 + 2));
      func_0x082ee038(_DAT_0824b730,_DAT_0824b740,0);
      param_4 = (uint *)0x1;
    }
    break;
  case (uint *)0xba:
    func_0x0824cb08((byte)*param_4,(byte *)((int)param_4 + 5),*(undefined4 *)((int)param_4 + 1));
    param_4 = (uint *)0x1;
    break;
  case (uint *)0xbc:
    ds_0824d4f8();
    param_4 = (uint *)0x0;
    break;
  case (uint *)0xc0:
    func_0x082eeb08(_DAT_0824b730,uRam0824b77c,1,*pcRam0824b778);
    if (*pcVar14 == '\0') {
      func_0x0822f04c();
      param_4 = (uint *)0x0;
    }
    else {
      func_0x0824c448();
      param_4 = (uint *)0x0;
    }
    break;
  case (uint *)0xc5:
    param_4 = (uint *)0x0;
    func_0x082ee038(_DAT_0824bab8,uRam0824bad0,3,*pbRam0824bac0,*pcRam0824bacc,0);
    func_0x081ba188(0x2ca,0,0,0);
    break;
  case (uint *)0xc6:
    func_0x0822f0c4(3);
    param_4 = (uint *)0x0;
    break;
  case (uint *)0xc9:
    puVar19 = (undefined2 *)func_0x082ee408(2);
    if (puVar19 != (undefined2 *)0x0) {
      *puVar19 = 0x220;
      aux_0823181c(0,2,2,0xffff,puVar19,2,0,0);
      return (uint *)0x0;
    }
LAB_0824adce:
    param_4 = (uint *)0x0;
    break;
  case (uint *)0xcb:
    func_0x08242698();
    param_4 = (uint *)0x1;
  }
  return param_4;
code_r0x0824bfa2:
  func_0x081d0a4c();
  func_0x082ee038(_DAT_0824c0c0,uRam0824c0f0,0);
  iVar25 = func_0x0824c43c();
  if (iVar25 != 0) {
    func_0x082ee038(_DAT_0824c0c0,uRam0824c0f4,0);
    func_0x0822efe8();
    return (uint *)0x0;
  }
  goto LAB_0824adce;
}


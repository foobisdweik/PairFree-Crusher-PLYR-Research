/* Separate import. SG200X Master v1.0.0.35. Mapping remains a selected-region candidate. */

/* Function at 0824716c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 selection_0824716c(undefined4 param_1,int param_2,int param_3,byte *param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  byte bVar13;
  undefined1 *puVar14;
  bool bVar15;
  bool bVar16;
  
  uVar2 = uRam082477f8;
  uVar3 = uRam082474a4;
  iVar8 = _DAT_08247494;
  if (param_2 == 0) {
    if (param_3 != 0) {
      return 0;
    }
    func_0x082528d0(_DAT_08247494,0,0x198);
    func_0x082ee038(_DAT_08247498,_DAT_0824749c,0);
    return 1;
  }
  if (param_2 != 0x36) {
    return 0;
  }
  if (param_4 == (byte *)0x0) {
    return 0;
  }
  uVar12 = (uint)*param_4;
  iVar11 = _DAT_08247494 + uVar12 * 0x44;
  iVar9 = iVar11;
  switch(param_3) {
  case 0:
    bVar13 = param_4[4];
    if (bVar13 == 0) {
      func_0x08246d4c(iVar11);
      iVar9 = selection_08241b4c();
      if ((*(char *)(iVar9 + 4) != '\0') && (iVar9 = func_0x0824a7d4(), iVar9 == 0)) {
        func_0x08221d28();
      }
      func_0x08246be4(iVar11,4);
      if (*(char *)(iVar8 + uVar12 * 0x44) == '\0') {
        func_0x081aa700(*puRam082474a0);
      }
    }
    else if (bVar13 == 2) {
      if (*(char *)(_DAT_08247494 + uVar12 * 0x44) == '\0') {
        func_0x081aa700(*puRam082474a0,1);
      }
      if ((*(byte *)(iVar8 + 0xac) == 6) || (*(char *)(iVar8 + 0xf0) == '\x06')) {
        bVar15 = true;
      }
      else {
        bVar15 = *(char *)(uVar12 * 0x44 + iVar8 + 0x24) == '\x06';
      }
      cVar1 = *(char *)(iVar8 + uVar12 * 0x44);
      if (*(char *)(iVar8 + uVar12 * 0x44 + 0x37) != '\0') {
        bVar15 = true;
      }
      if (cVar1 == '\x02') {
        if (*(byte *)(iVar8 + 0xf0) < 3) {
          bVar16 = true;
        }
        else {
          bVar16 = false;
        }
      }
      else {
        bVar16 = true;
        if (cVar1 == '\x03') {
          bVar16 = *(byte *)(iVar8 + 0xac) < 3;
        }
      }
      iVar9 = uVar12 * 0x44 + iVar8;
      if (*(char *)(iVar9 + 0x15) == '\0') {
        if (bVar16) {
          func_0x08219508(*(undefined4 *)(iVar9 + 0x38));
        }
        else {
          func_0x08246be4(iVar11,2);
        }
        if (bVar15) {
          func_0x08219388(*(undefined4 *)(uVar12 * 0x44 + iVar8 + 0x38));
        }
      }
      iVar9 = uVar12 * 0x44 + iVar8;
      if (*(char *)(iVar9 + 0x15) == '\x01') {
        if (bVar16) {
          func_0x08219250(*(undefined4 *)(iVar9 + 0x40),3);
          func_0x08219250(*(undefined4 *)(iVar9 + 0x40),1);
        }
        else {
          func_0x08246be4(iVar11,2);
        }
        if (bVar15) {
          func_0x082191a8(*(undefined4 *)(uVar12 * 0x44 + iVar8 + 0x40));
        }
      }
      iVar9 = uVar12 * 0x44 + iVar8;
      if ((*(char *)(iVar9 + 0x15) == '\x02') &&
         (func_0x082335ac(*(undefined4 *)(iVar9 + 0x3c),5,1), bVar15)) {
        func_0x082335ac(*(undefined4 *)(iVar9 + 0x3c),2,0);
      }
      if (*(char *)(uVar12 * 0x44 + iVar8 + 0x15) == -1) {
        func_0x08246be4(iVar11,2);
      }
    }
    if ((bVar13 & 0xfd) != 0) {
      return 0;
    }
    goto code_r0x082471d4;
  case 1:
    bVar13 = param_4[4];
    if (bVar13 < 4) {
      switch(bVar13) {
      case 0:
        goto code_r0x08247368;
      case 1:
        iVar9 = _DAT_08247494 + uVar12 * 0x44;
        *(undefined1 *)(iVar9 + 0x37) = 1;
        func_0x08219388(*(undefined4 *)(iVar9 + 0x38));
        if (*(byte *)(iVar8 + uVar12 * 0x44) - 2 < 2) {
          if (*(char *)(iVar8 + 0xac) == '\x03') {
            *(undefined1 *)(iVar8 + 0xbf) = 1;
            goto code_r0x082473f8;
          }
          goto code_r0x08247400;
        }
        goto code_r0x08247410;
      case 2:
        goto code_r0x08247416;
      case 3:
        iVar7 = _DAT_08247494 + uVar12 * 0x44;
        if (*(byte *)(_DAT_08247494 + uVar12 * 0x44) - 2 < 2) {
          if (*(char *)(_DAT_08247494 + 0xac) == '\x04') {
            *(undefined1 *)(_DAT_08247494 + 0xbf) = 1;
            func_0x08246be4(uVar3,6);
            func_0x082280c8((int)*(char *)(iVar8 + 0xbe));
          }
          iVar9 = iRam082474a8;
          if (*(char *)(iVar8 + 0xf0) != '\x04') {
            return 0;
          }
          *(undefined1 *)(iVar8 + 0x103) = 1;
          func_0x08246be4(iVar9,6);
          func_0x082280c8((int)*(char *)(iVar8 + 0x102));
          return 0;
        }
        if (*(char *)(iVar7 + 0x24) == '\x05') {
          return 0;
        }
        *(undefined1 *)(iVar7 + 0x37) = 1;
        if (*(char *)(iVar7 + 0x24) != '\x03') goto code_r0x08247700;
        bVar13 = *(byte *)(iVar7 + 0x35);
code_r0x082474c8:
        *(byte *)(iVar7 + 0x35) = bVar13 + 1;
        *(undefined1 *)(iVar7 + (uint)bVar13 + 0x25) = 2;
code_r0x082474d4:
        uVar3 = 6;
        goto code_r0x08247440;
      default:
        goto LAB_0824717a;
      }
    }
    if (bVar13 != 0x11) {
      return 0;
    }
code_r0x08247368:
    iVar9 = _DAT_08247494 + uVar12 * 0x44;
    if (*(byte *)(_DAT_08247494 + uVar12 * 0x44) - 2 < 2) {
      if ((*(char *)(_DAT_08247494 + 0xac) == '\x03') || (*(char *)(_DAT_08247494 + 0xbf) != '\0'))
      {
        func_0x08246be4(uRam082474a4,3);
        func_0x0822803c((int)*(char *)(iVar8 + 0xbe));
        *(undefined1 *)(uVar12 * 0x44 + iVar8 + 0x37) = 0;
      }
      if ((*(char *)(iVar8 + 0xf0) != '\x03') && (*(char *)(iVar8 + 0x103) == '\0')) {
        return 0;
      }
      func_0x08246be4(iRam082474a8,3);
      func_0x0822803c((int)*(char *)(iVar8 + 0x102));
      *(undefined1 *)(uVar12 * 0x44 + iVar8 + 0x37) = 0;
      return 0;
    }
    *(undefined1 *)(iVar9 + 0x37) = 0;
    func_0x08246be4(iVar11,3);
    cVar1 = *(char *)(iVar9 + 0x36);
    break;
  case 2:
    switch(param_4[4]) {
    case 0:
      goto code_r0x08247368;
    case 1:
code_r0x08247416:
      if (*(byte *)(_DAT_08247494 + uVar12 * 0x44) - 2 < 2) {
        if (4 < *(byte *)(_DAT_08247494 + 0xac)) {
          func_0x08246be4(uRam082474a4,2);
        }
        if (*(byte *)(iVar8 + 0xf0) < 5) {
          return 0;
        }
        uVar3 = 2;
        iVar11 = iRam082474a8;
        goto code_r0x08247440;
      }
      break;
    case 2:
      *(undefined1 *)(_DAT_08247494 + uVar12 * 0x44 + 0x37) = 1;
      if (*(byte *)(iVar8 + uVar12 * 0x44) - 2 < 2) {
        if (*(char *)(iVar8 + 0xac) == '\x03') {
          *(undefined1 *)(iVar8 + 0xbf) = 1;
code_r0x082473f8:
          func_0x08246be4(iVar11,2);
        }
code_r0x08247400:
        if (*(char *)(iVar8 + 0xf0) != '\x04') {
          return 0;
        }
        *(undefined1 *)(iVar8 + 0x103) = 1;
      }
      break;
    case 3:
      iVar7 = _DAT_08247494 + uVar12 * 0x44;
      if (*(byte *)(_DAT_08247494 + uVar12 * 0x44) - 2 < 2) {
        if (*(char *)(_DAT_08247494 + 0xac) == '\x04') {
          *(undefined1 *)(_DAT_08247494 + 0xbf) = 1;
          func_0x08246be4(uVar2,6);
          func_0x08246e88(iVar11,2);
        }
        else if (*(char *)(iVar7 + 0x24) == '\x03') {
          bVar13 = *(byte *)(iVar7 + 0x35);
          *(byte *)(iVar7 + 0x35) = bVar13 + 1;
          *(undefined1 *)((uint)bVar13 + iVar7 + 0x25) = 2;
          func_0x08246be4(iVar11,6);
        }
        iVar9 = iRam082477fc;
        if (*(char *)(iVar8 + 0xf0) != '\x04') {
          iVar8 = uVar12 * 0x44 + iVar8;
          if (*(char *)(iVar8 + 0x24) != '\x03') {
            return 0;
          }
          bVar13 = *(byte *)(iVar8 + 0x35);
code_r0x082476d0:
          *(byte *)(iVar8 + 0x35) = bVar13 + 1;
          *(undefined1 *)(iVar8 + (uint)bVar13 + 0x25) = 2;
          goto code_r0x082474d4;
        }
        *(undefined1 *)(iVar8 + 0x103) = 1;
      }
      else {
        *(undefined1 *)(iVar7 + 0x37) = 1;
        if (*(char *)(iVar7 + 0x24) == '\x03') {
          bVar13 = *(byte *)(iVar7 + 0x35);
          goto code_r0x082474c8;
        }
      }
code_r0x08247700:
      func_0x08246be4(iVar9,6);
      uVar3 = 2;
      goto code_r0x082471d6;
    default:
      return 0;
    }
code_r0x08247410:
    uVar3 = 2;
code_r0x08247440:
    func_0x08246be4(iVar11,uVar3);
    return 0;
  case 3:
    iVar9 = uVar12 * 0x44 + _DAT_08247494;
    bVar13 = param_4[4];
    uVar10 = (uint)*(byte *)(iVar9 + 0x25);
    func_0x082ee038(uRam082477f0,uRam082477ec,4,bVar13,*(undefined1 *)(iVar9 + 0x24),
                    *(undefined1 *)(iVar9 + 0x35),uVar10);
    uVar6 = (uint)*(byte *)(iVar9 + 0x35);
    if ((uVar6 != 0) && (bVar13 < 4)) {
      if (0xf < uVar6) {
        return 0;
      }
      *(byte *)(iVar9 + 0x35) = *(byte *)(iVar9 + 0x35) + 1;
      *(byte *)(iVar9 + uVar6 + 0x25) = bVar13;
      return 0;
    }
    if (bVar13 == 7) {
      if (uVar6 == 0) {
        return 0;
      }
      iVar9 = uVar12 * 0x44 + iVar8;
      bVar13 = *(byte *)(iVar9 + 0x25);
      *(char *)(iVar9 + 0x35) = (char)(uVar6 - 1);
      func_0x082ee038(uRam082477f0,uRam082477f4,3,bVar13,uVar6 - 1 & 0xff,bVar13,uVar10);
      bVar5 = *(byte *)(iVar9 + 0x35);
      puVar14 = (undefined1 *)(uVar12 * 0x44 + 0x25 + iVar8);
      for (uVar10 = 0; (uVar10 < bVar5 && (uVar10 != 0xf)); uVar10 = uVar10 + 1) {
        *puVar14 = puVar14[1];
        puVar14 = puVar14 + 1;
      }
    }
    switch(bVar13) {
    case 0:
      iVar8 = uVar12 * 0x44 + iVar8;
      if (*(char *)(iVar8 + 0x24) != '\0') goto code_r0x082475b6;
      func_0x08246e98(iVar11);
      break;
    case 1:
      iVar8 = uVar12 * 0x44 + iVar8;
      if (*(byte *)(iVar8 + 0x24) - 1 < 2) {
        func_0x0824706c(iVar11);
        return 0;
      }
      if (*(byte *)(iVar8 + 0x24) - 3 < 2) {
        return 0;
      }
      goto code_r0x082475b6;
    case 2:
      iVar8 = uVar12 * 0x44 + iVar8;
      if ((*(byte *)(iVar8 + 0x24) == 4) || (bVar5 = *(byte *)(iVar8 + 0x24) & 0xfb, bVar5 == 2)) {
        func_0x08247104(iVar11);
        return 0;
      }
      if (bVar5 == 1) {
        return 0;
      }
code_r0x082475b6:
      bVar5 = *(byte *)(iVar8 + 0x35);
      *(byte *)(iVar8 + 0x35) = bVar5 + 1;
      *(byte *)(iVar8 + (uint)bVar5 + 0x25) = bVar13;
      return 0;
    case 3:
      iVar8 = uVar12 * 0x44 + iVar8;
      if (1 < *(byte *)(iVar8 + 0x24) - 1) goto code_r0x082475b6;
      func_0x0824714e(iVar11);
      break;
    case 4:
    case 5:
    case 6:
      if (*(char *)(uVar12 * 0x44 + iVar8 + 0x24) != '\x04') {
        return 0;
      }
      func_0x08246d4c(iVar11);
      return 0;
    default:
      return 0;
    }
code_r0x082471d4:
    uVar3 = 7;
code_r0x082471d6:
    func_0x08246e88(iVar11,uVar3);
    return 0;
  case 4:
    uVar10 = *(uint *)(param_4 + 4);
    if ((uVar10 & 0xff0000) == 0) {
      if ((uVar10 & 0xfc) == 0) {
        switch(uVar10 & 0xff) {
        case 0:
          goto code_r0x08247782;
        case 1:
          func_0x08246be4(iVar11,2);
          uVar3 = 2;
          goto code_r0x082477aa;
        case 2:
          goto code_r0x08247410;
        case 3:
          iVar8 = uVar12 * 0x44 + _DAT_08247494;
          if (*(char *)(iVar8 + 0x24) == '\x05') {
            return 0;
          }
          *(undefined1 *)(iVar8 + 0x37) = 1;
          if (*(char *)(iVar8 + 0x24) == '\x03') {
            bVar13 = *(byte *)(iVar8 + 0x35);
            goto code_r0x082476d0;
          }
          goto code_r0x08247700;
        default:
          return 0;
        }
      }
      if ((uVar10 & 0xff) != 0x11) {
        return 0;
      }
code_r0x08247782:
      iVar8 = _DAT_08247494 + uVar12 * 0x44;
      if (*(char *)(_DAT_08247494 + uVar12 * 0x44) == '\0') {
        uVar4 = 1;
        uVar3 = 4;
        uVar2 = *(undefined4 *)(iVar8 + 0x3c);
        goto code_r0x08247792;
      }
    }
    else {
      if ((uVar10 & 0xffffff) >> 0x10 != 1) {
        return 0;
      }
      if ((uVar10 & 0xff) != 0) {
        if ((uVar10 & 0xff) != 2) {
          return 0;
        }
        func_0x08246be4(iVar11,2);
        uVar3 = 1;
code_r0x082477aa:
        uVar4 = 0;
        uVar2 = *(undefined4 *)(uVar12 * 0x44 + iVar8 + 0x3c);
code_r0x08247792:
        func_0x082335ac(uVar2,uVar3,uVar4);
        return 0;
      }
      iVar8 = _DAT_08247494 + uVar12 * 0x44;
      cVar1 = *(char *)(_DAT_08247494 + uVar12 * 0x44);
      if (cVar1 != '\0') {
        if (cVar1 != '\x01') {
          return 0;
        }
        uVar3 = 4;
        goto code_r0x08247440;
      }
    }
    cVar1 = *(char *)(iVar8 + 0x36);
    break;
  default:
    goto LAB_0824717a;
  }
  func_0x0822803c((int)cVar1);
LAB_0824717a:
  return 0;
}


/* Function at 08246e98 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void selection_08246e98(char *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 uStack_6c;
  undefined1 uStack_6a;
  undefined4 uStack_68;
  char *pcStack_64;
  undefined4 uStack_60;
  undefined1 auStack_5c [64];
  undefined4 uStack_1c;
  char *pcStack_18;
  undefined2 uStack_14;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  if (param_1 == (char *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  func_0x082528d0(auStack_5c,0,0x4c);
  (**(code **)(param_1 + 4))(*param_1,auStack_5c);
  uStack_1c = _DAT_08247034;
  pcStack_18 = param_1;
  cVar2 = func_0x08227f60(auStack_5c);
  param_1[0x36] = cVar2;
  func_0x08246be4(param_1,1);
  iVar3 = *(int *)(param_1 + 0x38);
  if (((iVar3 == 0) || (*(char *)(iVar3 + 7) != (char)uStack_14)) && (param_1[0x15] == '\0')) {
    if (iVar3 != 0) {
      func_0x08219328();
      param_1[0x38] = '\0';
      param_1[0x39] = '\0';
      param_1[0x3a] = '\0';
      param_1[0x3b] = '\0';
    }
    if (*param_1 == '\x02') {
      iVar3 = *(int *)(_DAT_08247038 + 0x104);
LAB_08246ef8:
      if (iVar3 != 0) {
        *(int *)(param_1 + 0x38) = iVar3;
        goto LAB_08246efe;
      }
    }
    else if (*param_1 == '\x03') {
      iVar3 = *(int *)(_DAT_08247038 + 0xc0);
      goto LAB_08246ef8;
    }
    iVar3 = func_0x082192bc((char)uStack_14,*(undefined4 *)(param_1 + 0x1c));
    *(int *)(param_1 + 0x38) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0x10) = _DAT_08247048;
      *(undefined1 *)(*(int *)(param_1 + 0x38) + 0xc) = uStack_14._1_1_;
      goto LAB_08246efe;
    }
    cVar1 = param_1[0x36];
    cVar2 = *param_1;
    uVar4 = _DAT_08247044;
LAB_08246f70:
    func_0x082eeb08(_DAT_08247040,uVar4,2,cVar2,(int)cVar1);
  }
  else {
LAB_08246efe:
    if ((*(int *)(param_1 + 0x3c) == 0) && (param_1[0x15] == '\x02')) {
      if (*param_1 == '\x02') {
        iVar3 = *(int *)(_DAT_08247038 + 0x108);
LAB_08246f14:
        if (iVar3 != 0) {
          *(int *)(param_1 + 0x3c) = iVar3;
          goto LAB_08246f1a;
        }
      }
      else if (*param_1 == '\x03') {
        iVar3 = *(int *)(_DAT_08247038 + 0xc4);
        goto LAB_08246f14;
      }
      uStack_6c = uStack_14;
      uStack_6a = uStack_11;
      uStack_68 = *(undefined4 *)(param_1 + 0x1c);
      uStack_60 = _DAT_0824704c;
      pcStack_64 = param_1;
      iVar3 = func_0x08233544(&uStack_6c);
      *(int *)(param_1 + 0x3c) = iVar3;
      if (iVar3 == 0) {
        func_0x082eeb08(_DAT_08247040,_DAT_08247050,2,*param_1,(int)param_1[0x36]);
      }
    }
LAB_08246f1a:
    if ((*(int *)(param_1 + 0x40) == 0) && (param_1[0x15] == '\x01')) {
      if (*param_1 == '\x02') {
        iVar3 = *(int *)(_DAT_08247038 + 0x10c);
LAB_08246f30:
        if (iVar3 != 0) {
          *(int *)(param_1 + 0x40) = iVar3;
          goto LAB_08246f36;
        }
      }
      else if (*param_1 == '\x03') {
        iVar3 = *(int *)(_DAT_08247038 + 200);
        goto LAB_08246f30;
      }
      iVar3 = func_0x082190d8(uStack_12);
      *(int *)(param_1 + 0x40) = iVar3;
      if (iVar3 == 0) {
        cVar1 = param_1[0x36];
        cVar2 = *param_1;
        uVar4 = _DAT_08247054;
        goto LAB_08246f70;
      }
      *(undefined1 *)(iVar3 + 8) = uStack_12;
      *(undefined1 *)(*(int *)(param_1 + 0x40) + 0x12) = uStack_14._1_1_;
      uVar4 = _DAT_08247058;
      iVar3 = *(int *)(param_1 + 0x40);
      *(undefined4 *)(iVar3 + 0x18) = 0;
      *(undefined4 *)(iVar3 + 0x1c) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x20) = uVar4;
      *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x24) = _DAT_0824705c;
      *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x28) = _DAT_08247060;
      *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x2c) = _DAT_08247064;
      *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x30) = _DAT_08247068;
      func_0x08219250(*(undefined4 *)(param_1 + 0x40),1);
    }
LAB_08246f36:
    func_0x082ee038(_DAT_08247040,_DAT_0824703c,2,*param_1,(int)param_1[0x36]);
  }
  return;
}


/* Function at 08246c64 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void selection_08246c64(int param_1,undefined4 param_2,undefined4 param_3)

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
  func_0x08246c10(2,*puVar4,param_2,iVar3,param_1,param_2,param_3);
  func_0x082ee038(_DAT_08246cac,_DAT_08246ca8,2,*puVar4,param_2);
  return;
}


/* Function at 08246ce8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void selection_08246ce8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  
  iVar4 = 0;
  iVar3 = _DAT_08246d2c;
  while( true ) {
    if (iVar4 == 6) {
      return;
    }
    piVar1 = (int *)(iVar3 + 0x38);
    iVar3 = iVar3 + 0x44;
    if (*piVar1 == param_1) break;
    iVar4 = iVar4 + 1;
  }
  puVar5 = (undefined1 *)(iVar4 * 0x44 + _DAT_08246d2c);
  if (puVar5 == (undefined1 *)0x0) {
    return;
  }
  func_0x082ee038(_DAT_08246d34,_DAT_08246d30,2,*puVar5,param_2,param_2,param_3);
  uVar2 = *puVar5;
  puVar5 = (undefined1 *)func_0x082ee408(8);
  if (puVar5 != (undefined1 *)0x0) {
    *puVar5 = uVar2;
    *(undefined4 *)(puVar5 + 4) = param_2;
    iVar3 = func_0x0823181c(0,4,0x36,1,puVar5,8,0,0);
    if (iVar3 != 0) {
      func_0x082ee4a8(puVar5);
      func_0x082eeb08(_DAT_08246c60,_DAT_08246c5c,3,uVar2,param_2,iVar3);
    }
  }
  return;
}


/* Selected Master .35 functions. Static evidence only. */

/* Function at 0824716c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 route_candidate_0824716c(undefined4 param_1,int param_2,int param_3,byte *param_4)

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
      iVar9 = func_0x08241b4c();
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


/* Literal references and instructions */
0824716c push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
08247170 mov r8,r2
08247172 sub sp,#0x14
08247174 cbz r1,0x0824717e
08247176 cmp r1,#0x36
08247178 beq 0x082471a0
0824717a movs r0,#0x0
0824717c b 0x0824719a
0824717e cmp.w r8,#0x0
08247182 bne 0x0824717a
08247184 mov.w r2,#0x198
08247188 ldr r0,[0x08247494]
literal 08247494 = 42479b8
0824718a bl 0x082528d0
0824718e ldr r0,[0x08247498]
literal 08247498 = 83171ec
08247190 mov r2,r8
08247192 ldr r1,[0x0824749c]
literal 0824749c = 60de13e
08247194 bl 0x082ee038
08247198 movs r0,#0x1
0824719a add sp,#0x14
0824719c pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
082471a0 cmp r3,#0x0
082471a2 beq 0x0824717a
082471a4 movs r5,#0x44
082471a6 ldrb r7,[r3,#0x0]
082471a8 ldr r4,[0x08247494]
literal 08247494 = 42479b8
082471aa mul r9,r5,r7
082471ae add.w r6,r4,r9
082471b2 cmp.w r8,#0x4
082471b6 bhi 0x0824717a
082471b8 tbh [pc,r8]

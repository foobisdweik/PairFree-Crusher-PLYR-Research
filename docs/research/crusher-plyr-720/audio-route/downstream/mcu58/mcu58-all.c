/* 0x58 companion MCU image (8051). Static evidence only. */

/* function FUN_CODE_0003 at CODE:0003 */

char FUN_CODE_0003(char param_1)

{
  char cVar1;
  
  if (param_1 == '\n') {
    FUN_CODE_000e(0xd);
    param_1 = '\n';
  }
  cVar1 = RI;
  if ((cVar1 != '\0') && (cVar1 = SBUF, cVar1 == '\x13')) {
    RI = 0;
    do {
      do {
        cVar1 = RI;
      } while (cVar1 == '\0');
      cVar1 = SBUF;
      RI = 0;
    } while (cVar1 != '\x11');
  }
  do {
    cVar1 = TI;
  } while (cVar1 == '\0');
  TI = 0;
  SBUF = param_1;
  return param_1;
}


/* function FUN_CODE_000e at CODE:000e */

void FUN_CODE_000e(undefined1 param_1)

{
  char cVar1;
  
  cVar1 = RI;
  if ((cVar1 != '\0') && (cVar1 = SBUF, cVar1 == '\x13')) {
    RI = 0;
    do {
      do {
        cVar1 = RI;
      } while (cVar1 == '\0');
      cVar1 = SBUF;
      RI = 0;
    } while (cVar1 != '\x11');
  }
  do {
    cVar1 = TI;
  } while (cVar1 == '\0');
  TI = 0;
  SBUF = param_1;
  return;
}


/* function FUN_CODE_002a at CODE:002a */

void FUN_CODE_002a(void)

{
  return;
}


/* function thunk_FUN_CODE_0cb8 at CODE:002e */

void thunk_FUN_CODE_0cb8(void)

{
  char cVar1;
  
  if (BANK1_R4 != BANK1_R0) {
    if (BANK1_R4 < BANK1_R0) {
      if (BANK1_R4 < -BANK1_R3) {
        BANK1_R4 = BANK1_R3 + BANK1_R4;
      }
      else {
        BANK1_R4 = 0xff;
      }
      if (BANK1_R0 + 1 <= BANK1_R4) {
LAB_CODE_0cfe:
        BANK1_R4 = BANK1_R0;
      }
    }
    else {
      cVar1 = (BANK1_R4 < BANK1_R3) << 7;
      if (cVar1 < '\0') {
        BANK1_R4 = 0;
      }
      else {
        BANK1_R4 = BANK1_R4 - (BANK1_R3 - (cVar1 >> 7));
      }
      if (BANK1_R4 < BANK1_R0) goto LAB_CODE_0cfe;
    }
    DAT_INTMEM_48 = 0x8f;
    DAT_INTMEM_47 = 1;
    DAT_INTMEM_46 = 0;
    DAT_INTMEM_45 = 0;
    DAT_INTMEM_49 = 0;
    DAT_INTMEM_4a = BANK1_R4;
    FUN_CODE_096a(0,0,DAT_EXTMEM_00a4);
    FUN_CODE_15da();
  }
  if (BANK1_R1 != BANK1_R5) {
    if (BANK1_R1 < BANK1_R5) {
      if (BANK1_R1 < -BANK1_R3) {
        BANK1_R1 = BANK1_R3 + BANK1_R1;
      }
      else {
        BANK1_R1 = 0xff;
      }
      if (BANK1_R5 + 1 <= BANK1_R1) {
LAB_CODE_0d65:
        BANK1_R1 = BANK1_R5;
      }
    }
    else {
      cVar1 = (BANK1_R1 < BANK1_R3) << 7;
      if (cVar1 < '\0') {
        BANK1_R1 = 0;
      }
      else {
        BANK1_R1 = BANK1_R1 - (BANK1_R3 - (cVar1 >> 7));
      }
      if (BANK1_R1 < BANK1_R5) goto LAB_CODE_0d65;
    }
    DAT_INTMEM_48 = 0x8f;
    DAT_INTMEM_47 = 1;
    DAT_INTMEM_46 = 0;
    DAT_INTMEM_45 = 0;
    DAT_INTMEM_49 = 0;
    DAT_INTMEM_4a = BANK1_R1;
    FUN_CODE_096a(0,0,DAT_EXTMEM_00a5);
    FUN_CODE_15da();
  }
  if (BANK1_R2 == BANK1_R6) {
    return;
  }
  if (BANK1_R2 < BANK1_R6) {
    if (BANK1_R2 < -BANK1_R3) {
      BANK1_R2 = BANK1_R3 + BANK1_R2;
    }
    else {
      BANK1_R2 = 0xff;
    }
    if (BANK1_R2 < BANK1_R6 + 1) goto LAB_CODE_0dcf;
  }
  else {
    cVar1 = (BANK1_R2 < BANK1_R3) << 7;
    if (cVar1 < '\0') {
      BANK1_R2 = 0;
    }
    else {
      BANK1_R2 = BANK1_R2 - (BANK1_R3 - (cVar1 >> 7));
    }
    if (BANK1_R6 <= BANK1_R2) goto LAB_CODE_0dcf;
  }
  BANK1_R2 = BANK1_R6;
LAB_CODE_0dcf:
  DAT_INTMEM_48 = 0x8f;
  DAT_INTMEM_47 = 1;
  DAT_INTMEM_46 = 0;
  DAT_INTMEM_45 = 0;
  DAT_INTMEM_49 = 0;
  DAT_INTMEM_4a = BANK1_R2;
  FUN_CODE_096a(0,0,DAT_EXTMEM_00a6);
  FUN_CODE_15da();
  return;
}


/* function FUN_CODE_0031 at CODE:0031 */

void FUN_CODE_0031(void)

{
  return;
}


/* function FUN_CODE_003f at CODE:003f */

void FUN_CODE_003f(void)

{
  undefined1 uVar1;
  
  uVar1 = 0x3d;
  if (_0_7 != '\0') {
    uVar1 = 0x40;
  }
  FUN_CODE_095a(0,1,uVar1);
  FUN_CODE_0784();
  return;
}


/* function FUN_CODE_0071 at CODE:0071 */

void FUN_CODE_0071(undefined1 param_1)

{
  if (DAT_INTMEM_4d != '\0') {
    DAT_INTMEM_4d = DAT_INTMEM_4d + -1;
  }
  DAT_INTMEM_50 = DAT_INTMEM_50 + '\x01';
  if (DAT_INTMEM_50 == '\0') {
    DAT_INTMEM_4f = DAT_INTMEM_4f + '\x01';
  }
  if (_0_7 != '\0') {
    FUN_CODE_095a(0,1,0x3d);
    FUN_CODE_0948(param_1);
    return;
  }
  FUN_CODE_0003();
  return;
}


/* function FUN_CODE_0082 at CODE:0082 */

void FUN_CODE_0082(undefined1 param_1)

{
  FUN_CODE_095a(0,1,0x3d);
  FUN_CODE_0948(param_1);
  return;
}


/* function FUN_CODE_0098 at CODE:0098 */

void FUN_CODE_0098(undefined1 param_1,undefined1 param_2,undefined1 param_3)

{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  
  _0_7 = '\0';
  DAT_INTMEM_4c = 0;
  DAT_INTMEM_4d = '\0';
  DAT_INTMEM_4f = 0;
  DAT_INTMEM_50 = 0;
  DAT_INTMEM_3d = param_3;
  DAT_INTMEM_3e = param_2;
  DAT_INTMEM_3f = param_1;
  while( true ) {
    while (DAT_INTMEM_4d != '\0') {
      FUN_CODE_0071(0x20);
    }
    DAT_INTMEM_4e = -1;
    _0_1 = 0;
    _0_0 = 0;
    _0_2 = 0;
    _0_3 = 0;
    _0_5 = 0;
    _0_6 = 0;
    _1_0 = 0;
    cVar3 = FUN_CODE_003f();
    if (cVar3 == '\0') break;
    if (cVar3 == '%') {
      F0 = 0;
      while( true ) {
        _0_4 = 0;
        bVar4 = FUN_CODE_003f();
        if (9 < bVar4 - 0x30) break;
        pbVar2 = (byte *)&DAT_INTMEM_4d;
        cVar3 = F0;
        if ((cVar3 != '\0') && (pbVar2 = (byte *)&DAT_INTMEM_4e, DAT_INTMEM_4e == -1)) {
          DAT_INTMEM_4e = '\0';
        }
        bVar1 = *pbVar2;
        *pbVar2 = bVar4 - 0x30;
        bVar4 = bVar1 * '\n' + *pbVar2;
        *pbVar2 = bVar4;
        cVar3 = F0;
        if ((cVar3 != '\x01') && (bVar4 == 0)) {
          _0_3 = 1;
        }
      }
      if (bVar4 + 0x9f < 0x1a) {
        bVar4 = bVar4 & 0xdf;
        _0_4 = 1;
      }
      FUN_CODE_091c(bVar4);
      FUN_CODE_095a(1);
      FUN_CODE_0784();
      return;
    }
    FUN_CODE_0071(cVar3);
  }
  if (_0_7 != '\0') {
    FUN_CODE_0082(0);
  }
  return;
}


/* function FUN_CODE_0392 at CODE:0392 */

char FUN_CODE_0392(char param_1,char param_2,char param_3)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  
  uVar3 = EA;
  EA = 0;
  bVar1 = EA;
  EA = 0;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  bVar5 = DAT_SFR_9f;
  DAT_SFR_9f = bVar5 | 1;
  EA = bVar1 & 1;
  DAT_SFR_af = 0xc0;
  WCON = 0;
  WDTRST = 0;
  bVar1 = EA;
  EA = 0;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  bVar5 = DAT_SFR_a4;
  DAT_SFR_a4 = bVar5 | 1;
  EA = bVar1 & 1;
  cVar2 = HSTAT;
  if (cVar2 == param_3) {
    cVar2 = WDTRST;
    WDTRST = cVar2 + '\x01';
    bVar1 = EA;
    EA = 0;
    EPCONFIG = 0xaa;
    EPCONFIG = 0x55;
    bVar5 = DAT_SFR_a4;
    DAT_SFR_a4 = bVar5 | 1;
    EA = bVar1 & 1;
    cVar2 = HSTAT;
    if (cVar2 == param_2) {
      cVar2 = WDTRST;
      WDTRST = cVar2 + '\x01';
      bVar1 = EA;
      EA = 0;
      EPCONFIG = 0xaa;
      EPCONFIG = 0x55;
      bVar5 = DAT_SFR_a4;
      DAT_SFR_a4 = bVar5 | 1;
      EA = bVar1 & 1;
      cVar2 = HSTAT;
      if (cVar2 == param_1) {
        cVar2 = WDTRST;
        WDTRST = cVar2 + '\x01';
        bVar1 = EA;
        EA = 0;
        EPCONFIG = 0xaa;
        EPCONFIG = 0x55;
        bVar5 = DAT_SFR_a4;
        DAT_SFR_a4 = bVar5 | 1;
        EA = bVar1 & 1;
        cVar2 = HSTAT;
        if (cVar2 == DAT_INTMEM_40) {
          cVar2 = WDTRST;
          WDTRST = cVar2 + '\x01';
          bVar1 = EA;
          EA = 0;
          EPCONFIG = 0xaa;
          EPCONFIG = 0x55;
          bVar5 = DAT_SFR_a4;
          DAT_SFR_a4 = bVar5 | 1;
          EA = bVar1 & 1;
          cVar2 = HSTAT;
          if (cVar2 == DAT_INTMEM_41) {
            cVar6 = '\0';
            goto LAB_CODE_0660;
          }
        }
      }
    }
  }
  _2_0 = 1;
  bVar5 = 0;
  while (0x80 < 0x80U - (((bVar5 < 5) << 7) >> 7)) {
    WDTRST = bVar5;
    bVar4 = EA;
    EA = 0;
    EPCONFIG = 0xaa;
    EPCONFIG = 0x55;
    bVar1 = DAT_SFR_a4;
    DAT_SFR_a4 = bVar1 | 1;
    EA = bVar4 & 1;
    uVar3 = HSTAT;
    *(undefined1 *)(ushort)bVar5 = uVar3;
    bVar5 = bVar5 + 1;
  }
  bVar1 = EA;
  EA = 0;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  bVar5 = DAT_SFR_a5;
  DAT_SFR_a5 = bVar5 | 4;
  EA = bVar1 & 1;
  HSTAT = 0xff;
  DAT_SFR_af = 0xe2;
  WDTRST = 0;
  uVar3 = EA;
  EA = 0;
  bVar1 = EA;
  EA = 0;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  bVar5 = DAT_SFR_aa;
  DAT_SFR_aa = bVar5 | 0x40;
  EA = bVar1 & 1;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  bVar5 = DAT_SFR_a4;
  DAT_SFR_a4 = bVar5 | 1;
  EA = bVar1 & 1;
  DAT_SFR_af = 0xe1;
  HSTAT = param_3;
  uVar3 = EA;
  EA = 0;
  bVar1 = EA;
  EA = 0;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  bVar5 = DAT_SFR_aa;
  DAT_SFR_aa = bVar5 | 0x40;
  EA = bVar1 & 1;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  bVar5 = DAT_SFR_a4;
  DAT_SFR_a4 = bVar5 | 1;
  EA = bVar1 & 1;
  cVar2 = WDTRST;
  WDTRST = cVar2 + '\x01';
  HSTAT = param_2;
  uVar3 = EA;
  EA = 0;
  bVar1 = EA;
  EA = 0;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  bVar5 = DAT_SFR_aa;
  DAT_SFR_aa = bVar5 | 0x40;
  EA = bVar1 & 1;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  bVar5 = DAT_SFR_a4;
  DAT_SFR_a4 = bVar5 | 1;
  EA = bVar1 & 1;
  cVar2 = WDTRST;
  WDTRST = cVar2 + '\x01';
  HSTAT = param_1;
  uVar3 = EA;
  EA = 0;
  bVar1 = EA;
  EA = 0;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  bVar5 = DAT_SFR_aa;
  DAT_SFR_aa = bVar5 | 0x40;
  EA = bVar1 & 1;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  bVar5 = DAT_SFR_a4;
  DAT_SFR_a4 = bVar5 | 1;
  EA = bVar1 & 1;
  cVar2 = WDTRST;
  WDTRST = cVar2 + '\x01';
  HSTAT = DAT_INTMEM_40;
  uVar3 = EA;
  EA = 0;
  bVar1 = EA;
  EA = 0;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  bVar5 = DAT_SFR_aa;
  DAT_SFR_aa = bVar5 | 0x40;
  EA = bVar1 & 1;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  bVar5 = DAT_SFR_a4;
  DAT_SFR_a4 = bVar5 | 1;
  EA = bVar1 & 1;
  cVar2 = WDTRST;
  WDTRST = cVar2 + '\x01';
  HSTAT = DAT_INTMEM_41;
  uVar3 = EA;
  EA = 0;
  bVar1 = EA;
  EA = 0;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  bVar5 = DAT_SFR_aa;
  DAT_SFR_aa = bVar5 | 0x40;
  EA = bVar1 & 1;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  bVar5 = DAT_SFR_a4;
  DAT_SFR_a4 = bVar5 | 1;
  EA = bVar1 & 1;
  bVar1 = EA;
  EA = 0;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  bVar5 = DAT_SFR_a5;
  DAT_SFR_a5 = bVar5 & 0xfb;
  EA = bVar1 & 1;
  DAT_SFR_af = 0xc0;
  WDTRST = 0;
  bVar1 = EA;
  EA = 0;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  bVar5 = DAT_SFR_a4;
  DAT_SFR_a4 = bVar5 | 1;
  EA = bVar1 & 1;
  cVar2 = HSTAT;
  if (cVar2 == param_3) {
    cVar2 = WDTRST;
    WDTRST = cVar2 + '\x01';
    bVar1 = EA;
    EA = 0;
    EPCONFIG = 0xaa;
    EPCONFIG = 0x55;
    bVar5 = DAT_SFR_a4;
    DAT_SFR_a4 = bVar5 | 1;
    EA = bVar1 & 1;
    cVar2 = HSTAT;
    if (cVar2 == param_2) {
      cVar2 = WDTRST;
      WDTRST = cVar2 + '\x01';
      bVar1 = EA;
      EA = 0;
      EPCONFIG = 0xaa;
      EPCONFIG = 0x55;
      bVar5 = DAT_SFR_a4;
      DAT_SFR_a4 = bVar5 | 1;
      EA = bVar1 & 1;
      cVar2 = HSTAT;
      if (cVar2 == param_1) {
        cVar2 = WDTRST;
        WDTRST = cVar2 + '\x01';
        bVar1 = EA;
        EA = 0;
        EPCONFIG = 0xaa;
        EPCONFIG = 0x55;
        bVar5 = DAT_SFR_a4;
        DAT_SFR_a4 = bVar5 | 1;
        EA = bVar1 & 1;
        cVar2 = HSTAT;
        if (cVar2 == DAT_INTMEM_40) {
          cVar2 = WDTRST;
          WDTRST = cVar2 + '\x01';
          bVar1 = EA;
          EA = 0;
          EPCONFIG = 0xaa;
          EPCONFIG = 0x55;
          bVar5 = DAT_SFR_a4;
          DAT_SFR_a4 = bVar5 | 1;
          EA = bVar1 & 1;
          cVar2 = HSTAT;
          cVar6 = '\0';
          if (cVar2 == DAT_INTMEM_41) goto LAB_CODE_0660;
        }
      }
    }
  }
  bVar5 = 0;
  while (bVar1 = 0x80 - (((bVar5 < 5) << 7) >> 7), cVar6 = -0x80 - bVar1, 0x80 < bVar1) {
    WDTRST = bVar5;
    HSTAT = *(undefined1 *)(ushort)bVar5;
    uVar3 = EA;
    EA = 0;
    bVar4 = EA;
    EA = 0;
    EPCONFIG = 0xaa;
    EPCONFIG = 0x55;
    bVar1 = DAT_SFR_aa;
    DAT_SFR_aa = bVar1 | 0x40;
    EA = bVar4 & 1;
    EPCONFIG = 0xaa;
    EPCONFIG = 0x55;
    bVar1 = DAT_SFR_a4;
    DAT_SFR_a4 = bVar1 | 1;
    EA = bVar4 & 1;
    bVar5 = bVar5 + 1;
  }
LAB_CODE_0660:
  bVar1 = EA;
  EA = 0;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  bVar5 = DAT_SFR_a5;
  DAT_SFR_a5 = bVar5 & 0xfb;
  EA = bVar1 & 1;
  bVar1 = EA;
  _1_7 = bVar1 & 1;
  EA = 0;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  bVar5 = DAT_SFR_9f;
  DAT_SFR_9f = bVar5 & 0xfe;
  EA = bVar1 & 1;
  EA = bVar1 & 1;
  bVar5 = PCON;
  PCON = bVar5 & 0xef;
  return cVar6;
}


/* function FUN_CODE_075e at CODE:075e */

char FUN_CODE_075e(undefined1 param_1,char param_2,char param_3,char param_4,char param_5)

{
  byte bVar1;
  char cVar2;
  
  if (param_5 != '\0') {
    param_4 = param_4 + '\x01';
  }
  if (((param_5 != '\0' || param_4 != '\0') && (param_3 + 2U < 4)) &&
     (bVar1 = param_2 + 2, bVar1 < 4)) {
    bVar1 = (bVar1 * '\x02' | bVar1 >> 7) << 1 | (bVar1 & 0x7f) >> 6 | param_3 + 2U;
                    /* WARNING: Could not recover jumptable at 0x0783. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    cVar2 = (*(code *)((ushort)(bVar1 << 1 | bVar1 >> 7) + 0x6de))(param_1);
    return cVar2;
  }
  return param_3;
}


/* function FUN_CODE_0784 at CODE:0784 */

undefined1 FUN_CODE_0784(undefined1 *param_1,undefined1 param_2,char param_3)

{
  if (param_3 == '\x01') {
    return *(undefined1 *)CONCAT11(param_2,param_1);
  }
  if (param_3 == '\0') {
    return *param_1;
  }
  if (param_3 == -2) {
    return *(undefined1 *)ZEXT12(param_1);
  }
  return *(undefined1 *)CONCAT11(param_2,param_1);
}


/* function FUN_CODE_079d at CODE:079d */

undefined1 FUN_CODE_079d(undefined2 param_1,byte param_2,char param_3,char param_4)

{
  char cVar1;
  byte bVar2;
  
  bVar2 = (byte)param_1;
  cVar1 = (char)((ushort)param_1 >> 8);
  if (param_4 == '\x01') {
    return *(undefined1 *)
            CONCAT11(cVar1 + (param_3 - ((CARRY1(bVar2,param_2) << 7) >> 7)),bVar2 + param_2);
  }
  if (param_4 == '\0') {
    return *(undefined1 *)(param_2 + bVar2);
  }
  if (param_4 == -2) {
    return *(undefined1 *)(ushort)(param_2 + bVar2);
  }
  return *(undefined1 *)
          CONCAT11(cVar1 + (param_3 - ((CARRY1(bVar2,param_2) << 7) >> 7)),bVar2 + param_2);
}


/* function FUN_CODE_07ca at CODE:07ca */

void FUN_CODE_07ca(undefined1 param_1,undefined2 param_2,byte param_3,char param_4,char param_5)

{
  byte bVar1;
  
  bVar1 = (byte)param_2;
  if (param_5 == '\x01') {
    *(undefined1 *)
     CONCAT11((char)((ushort)param_2 >> 8) + (param_4 - ((CARRY1(bVar1,param_3) << 7) >> 7)),
              bVar1 + param_3) = param_1;
    return;
  }
  if (param_5 == '\0') {
    *(undefined1 *)(param_3 + bVar1) = param_1;
    return;
  }
  if (param_5 == -2) {
    *(undefined1 *)(ushort)(param_3 + bVar1) = param_1;
  }
  return;
}


/* function FUN_CODE_07ec at CODE:07ec */

char FUN_CODE_07ec(char param_1,byte param_2,byte param_3,byte param_4,char param_5,byte param_6,
                  byte param_7,byte param_8)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  
  bVar3 = (byte)((ushort)param_3 * (ushort)param_7);
  bVar4 = (byte)((ushort)param_6 * (ushort)param_4);
  bVar5 = bVar4 + bVar3;
  bVar6 = (byte)((ushort)param_2 * (ushort)param_8);
  bVar7 = bVar6 + bVar5;
  bVar8 = (byte)((ushort)param_4 * (ushort)param_7);
  bVar2 = (byte)((ushort)param_4 * (ushort)param_8 >> 8);
  bVar1 = (char)((ushort)param_4 * (ushort)param_7 >> 8) - ((CARRY1(bVar2,bVar8) << 7) >> 7);
  return ((param_6 * param_3 + param_2 * param_7 + param_5 * param_4 + param_1 * param_8 +
           ((char)((ushort)param_3 * (ushort)param_7 >> 8) - ((CARRY1(bVar4,bVar3) << 7) >> 7)) +
           (char)((ushort)param_6 * (ushort)param_4 >> 8) +
          ((char)((ushort)param_2 * (ushort)param_8 >> 8) - ((CARRY1(bVar6,bVar5) << 7) >> 7))) -
         ((CARRY1(bVar7,bVar1) << 7) >> 7)) -
         ((CARRY1(bVar7 + bVar1,
                  (char)((ushort)param_3 * (ushort)param_8 >> 8) -
                  ((CARRY1((byte)((ushort)param_3 * (ushort)param_8),bVar2 + bVar8) << 7) >> 7)) <<
          7) >> 7);
}


/* function FUN_CODE_0877 at CODE:0877 */

byte FUN_CODE_0877(char param_1,char param_2,char param_3,byte param_4,byte param_5,byte param_6,
                  byte param_7,byte param_8)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  
  if (param_1 != '\0') {
    cVar4 = '\b';
    bVar7 = 0;
    do {
      bVar1 = CARRY1(param_8,param_8);
      param_8 = param_8 * '\x02';
      bVar10 = param_7 << 1 | bVar1;
      bVar8 = param_6 << 1 | param_7 >> 7;
      bVar9 = param_5 << 1 | param_6 >> 7;
      bVar6 = bVar7 << 1 | param_5 >> 7;
      bVar5 = param_1 - (((bVar9 < (byte)(param_2 -
                                         (((bVar8 < (byte)(param_3 -
                                                          (((bVar10 < param_4 - ((char)bVar7 >> 7))
                                                           << 7) >> 7))) << 7) >> 7))) << 7) >> 7);
      bVar7 = bVar6;
      if (bVar6 >= bVar5) {
        bVar7 = param_4 - (((bVar6 < bVar5) << 7) >> 7);
        bVar1 = bVar10 < bVar7;
        bVar10 = bVar10 - bVar7;
        bVar7 = param_3 - ((bVar1 << 7) >> 7);
        bVar1 = bVar8 < bVar7;
        bVar8 = bVar8 - bVar7;
        bVar9 = bVar9 - (param_2 - ((bVar1 << 7) >> 7));
        param_8 = param_8 + 1;
        bVar7 = bVar6 - bVar5;
      }
      cVar4 = cVar4 + -1;
      param_5 = bVar9;
      param_6 = bVar8;
      param_7 = bVar10;
    } while (cVar4 != '\0');
    return bVar9;
  }
  if (param_2 != '\0') {
    cVar4 = '\x10';
    bVar7 = 0;
    do {
      bVar1 = CARRY1(param_8,param_8);
      param_8 = param_8 * '\x02';
      bVar10 = param_6 << 1 | param_7 >> 7;
      bVar8 = param_5 << 1 | param_6 >> 7;
      bVar9 = bVar7 << 1 | param_5 >> 7;
      bVar5 = bVar7 & 0x80;
      cVar3 = C;
      if (cVar3 == '\0') {
        bVar2 = bVar9 < (byte)(param_2 -
                              (((bVar8 < (byte)(param_3 -
                                               (((bVar10 < param_4 - ((char)bVar7 >> 7)) << 7) >> 7)
                                               )) << 7) >> 7));
        bVar5 = bVar2 << 7;
        if (!bVar2) goto LAB_CODE_08f2;
      }
      else {
        C = 0;
LAB_CODE_08f2:
        bVar7 = param_4 - ((char)bVar5 >> 7);
        bVar2 = bVar10 < bVar7;
        bVar10 = bVar10 - bVar7;
        bVar7 = param_3 - ((bVar2 << 7) >> 7);
        bVar2 = bVar8 < bVar7;
        bVar8 = bVar8 - bVar7;
        bVar9 = bVar9 - (param_2 - ((bVar2 << 7) >> 7));
        param_8 = param_8 + 1;
      }
      cVar4 = cVar4 + -1;
      bVar7 = bVar9;
      param_5 = bVar8;
      param_6 = bVar10;
      param_7 = param_7 << 1 | bVar1;
      if (cVar4 == '\0') {
        return bVar9;
      }
    } while( true );
  }
  if (param_3 != '\0') {
    cVar4 = '\x18';
    bVar7 = 0;
    do {
      bVar1 = CARRY1(param_8,param_8);
      param_8 = param_8 * '\x02';
      bVar8 = param_5 << 1 | param_6 >> 7;
      bVar9 = bVar7 << 1 | param_5 >> 7;
      bVar5 = bVar7 & 0x80;
      cVar3 = C;
      if (cVar3 == '\0') {
        bVar2 = bVar9 < (byte)(param_3 - (((bVar8 < param_4 - ((char)bVar7 >> 7)) << 7) >> 7));
        bVar5 = bVar2 << 7;
        if (!bVar2) goto LAB_CODE_08c6;
      }
      else {
        C = 0;
LAB_CODE_08c6:
        bVar7 = param_4 - ((char)bVar5 >> 7);
        bVar2 = bVar8 < bVar7;
        bVar8 = bVar8 - bVar7;
        bVar9 = bVar9 - (param_3 - ((bVar2 << 7) >> 7));
        param_8 = param_8 + 1;
      }
      cVar4 = cVar4 + -1;
      bVar7 = bVar9;
      param_5 = bVar8;
      param_6 = param_6 << 1 | param_7 >> 7;
      param_7 = param_7 << 1 | bVar1;
      if (cVar4 == '\0') {
        return bVar8;
      }
    } while( true );
  }
  bVar5 = 0;
  bVar7 = param_5;
  if (param_4 != 0) {
    bVar7 = param_5 / param_4;
    bVar5 = param_5 % param_4;
  }
  cVar4 = '\x18';
  do {
    bVar1 = CARRY1(bVar7,bVar7);
    bVar7 = bVar7 * '\x02';
    bVar8 = bVar5 << 1 | param_6 >> 7;
    bVar9 = bVar5 & 0x80;
    cVar3 = C;
    if (cVar3 == '\0') {
      bVar2 = bVar8 < param_4 - ((char)bVar5 >> 7);
      bVar9 = bVar2 << 7;
      if (!bVar2) goto LAB_CODE_08a3;
    }
    else {
      C = 0;
LAB_CODE_08a3:
      bVar8 = bVar8 - (param_4 - ((char)bVar9 >> 7));
      bVar7 = bVar7 + 1;
    }
    cVar4 = cVar4 + -1;
    bVar5 = bVar8;
    param_6 = param_6 << 1 | param_7 >> 7;
    param_7 = param_7 << 1 | param_8 >> 7;
    param_8 = param_8 << 1 | bVar1;
    if (cVar4 == '\0') {
      return 0;
    }
  } while( true );
}


/* function FUN_CODE_0909 at CODE:0909 */

byte FUN_CODE_0909(byte param_1,byte param_2,byte param_3,byte param_4,byte param_5)

{
  byte bVar1;
  
  for (bVar1 = param_1; bVar1 != 0; bVar1 = bVar1 - 1) {
    param_1 = param_5 >> 1 | param_4 << 7;
    param_5 = param_1;
    param_4 = param_4 >> 1 | param_3 << 7;
    param_3 = param_3 >> 1 | param_2 << 7;
    param_2 = param_2 >> 1;
  }
  return param_1;
}


/* function FUN_CODE_091c at CODE:091c */

void FUN_CODE_091c(char param_1)

{
  char *pcVar1;
  undefined1 uStackX_0;
  undefined1 in_stack_000000ff;
  
  for (pcVar1 = (char *)CONCAT11(uStackX_0,in_stack_000000ff);
      (*pcVar1 != '\0' || (pcVar1[1] != '\0')); pcVar1 = pcVar1 + 3) {
    if (pcVar1[2] == param_1) goto LAB_CODE_092c;
  }
  pcVar1 = pcVar1 + 2;
LAB_CODE_092c:
                    /* WARNING: Could not recover jumptable at 0x0936. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)pcVar1)();
  return;
}


/* function FUN_CODE_0942 at CODE:0942 */

void FUN_CODE_0942(undefined1 param_1,undefined1 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0947. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)CONCAT11(param_2,param_1))();
  return;
}


/* function FUN_CODE_0948 at CODE:0948 */

void FUN_CODE_0948(undefined1 param_1,undefined1 *param_2,undefined1 param_3,char param_4)

{
  if (param_4 == '\x01') {
    *(undefined1 *)CONCAT11(param_3,param_2) = param_1;
    return;
  }
  if (param_4 == '\0') {
    *param_2 = param_1;
    return;
  }
  if (param_4 == -2) {
    *(undefined1 *)ZEXT12(param_2) = param_1;
  }
  return;
}


/* function FUN_CODE_095a at CODE:095a */

void FUN_CODE_095a(char param_1,byte param_2,char param_3)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_3 + '\x02');
  *(byte *)(param_3 + '\x02') = bVar1 + param_2;
  *(char *)(param_3 + '\x01') =
       param_1 + (*(char *)(param_3 + '\x01') - ((CARRY1(bVar1,param_2) << 7) >> 7));
  return;
}


/* function FUN_CODE_0960 at CODE:0960 */

void FUN_CODE_0960(byte param_1,byte param_2,char *param_3,char param_4)

{
  *param_3 = param_1 + param_2;
  param_3[-1] = param_4 + (param_3[-1] - ((CARRY1(param_1,param_2) << 7) >> 7));
  return;
}


/* function FUN_CODE_096a at CODE:096a */

undefined1 FUN_CODE_096a(char param_1,char param_2,char param_3)

{
  byte bVar1;
  undefined1 uVar2;
  
  bVar1 = EA;
  _1_7 = bVar1 & 1;
  EA = 0;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  DAT_SFR_91 = 1;
  EA = bVar1 & 1;
  if (param_2 == '\x01') {
    bVar1 = PCON1;
    PCON1 = bVar1 & 0x3f;
    bVar1 = PCON1;
    PCON1 = bVar1 | 0x40;
  }
  else if (param_2 == '\x02') {
    bVar1 = PCON1;
    PCON1 = bVar1 & 0x3f;
    bVar1 = PCON1;
    PCON1 = bVar1 | 0x80;
  }
  else if (param_2 == '\0') {
    bVar1 = PCON1;
    PCON1 = bVar1 & 0x3f;
  }
  if (param_1 == '\x01') {
    bVar1 = PCON1;
    PCON1 = bVar1 | 0x10;
  }
  else if (param_1 == '\0') {
    bVar1 = PCON1;
    PCON1 = bVar1 & 0xef;
  }
  if (param_3 == '\x01') {
    uVar2 = DAT_INTMEM_4a;
    FUN_CODE_07ec(DAT_INTMEM_45,DAT_INTMEM_46,DAT_INTMEM_47,DAT_INTMEM_48,0,0,DAT_INTMEM_49,
                  DAT_INTMEM_4a);
    FUN_CODE_0877(0,0,0,0xff);
    FUN_CODE_0909(8);
    DAT_SFR_d3 = uVar2;
    uVar2 = DAT_INTMEM_4a;
    FUN_CODE_07ec(DAT_INTMEM_45,DAT_INTMEM_46,DAT_INTMEM_47,DAT_INTMEM_48,0,0,DAT_INTMEM_49,
                  DAT_INTMEM_4a);
    FUN_CODE_0877(0,0,0,0xff);
    CCAPM1 = uVar2;
  }
  else if (param_3 == '\x02') {
    uVar2 = DAT_INTMEM_4a;
    FUN_CODE_07ec(DAT_INTMEM_45,DAT_INTMEM_46,DAT_INTMEM_47,DAT_INTMEM_48,0,0,DAT_INTMEM_49,
                  DAT_INTMEM_4a);
    FUN_CODE_0877(0,0,0,0xff);
    FUN_CODE_0909(8);
    HPINDEX = uVar2;
    uVar2 = DAT_INTMEM_4a;
    FUN_CODE_07ec(DAT_INTMEM_45,DAT_INTMEM_46,DAT_INTMEM_47,DAT_INTMEM_48,0,0,DAT_INTMEM_49,
                  DAT_INTMEM_4a);
    FUN_CODE_0877(0,0,0,0xff);
    CCAPM2 = uVar2;
  }
  else if (param_3 == '\x03') {
    uVar2 = DAT_INTMEM_4a;
    FUN_CODE_07ec(DAT_INTMEM_45,DAT_INTMEM_46,DAT_INTMEM_47,DAT_INTMEM_48,0,0,DAT_INTMEM_49,
                  DAT_INTMEM_4a);
    FUN_CODE_0877(0,0,0,0xff);
    FUN_CODE_0909(8);
    HPSC = uVar2;
    uVar2 = DAT_INTMEM_4a;
    FUN_CODE_07ec(DAT_INTMEM_45,DAT_INTMEM_46,DAT_INTMEM_47,DAT_INTMEM_48,0,0,DAT_INTMEM_49,
                  DAT_INTMEM_4a);
    FUN_CODE_0877(0,0,0,0xff);
    CCAPM3 = uVar2;
  }
  else if (param_3 == '\x04') {
    uVar2 = DAT_INTMEM_4a;
    FUN_CODE_07ec(DAT_INTMEM_45,DAT_INTMEM_46,DAT_INTMEM_47,DAT_INTMEM_48,0,0,DAT_INTMEM_49,
                  DAT_INTMEM_4a);
    FUN_CODE_0877(0,0,0,0xff);
    FUN_CODE_0909(8);
    DAT_SFR_c4 = uVar2;
    uVar2 = DAT_INTMEM_4a;
    FUN_CODE_07ec(DAT_INTMEM_45,DAT_INTMEM_46,DAT_INTMEM_47,DAT_INTMEM_48,0,0,DAT_INTMEM_49,
                  DAT_INTMEM_4a);
    FUN_CODE_0877(0,0,0,0xff);
    TL2 = uVar2;
  }
  else if (param_3 == '\x05') {
    uVar2 = DAT_INTMEM_4a;
    FUN_CODE_07ec(DAT_INTMEM_45,DAT_INTMEM_46,DAT_INTMEM_47,DAT_INTMEM_48,0,0,DAT_INTMEM_49,
                  DAT_INTMEM_4a);
    FUN_CODE_0877(0,0,0,0xff);
    FUN_CODE_0909(8);
    DAT_SFR_c5 = uVar2;
    uVar2 = DAT_INTMEM_4a;
    FUN_CODE_07ec(DAT_INTMEM_45,DAT_INTMEM_46,DAT_INTMEM_47,DAT_INTMEM_48,0,0,DAT_INTMEM_49,
                  DAT_INTMEM_4a);
    FUN_CODE_0877(0,0,0,0xff);
    TH2 = uVar2;
  }
  else if (param_3 == '\0') {
    uVar2 = DAT_INTMEM_4a;
    FUN_CODE_07ec(DAT_INTMEM_45,DAT_INTMEM_46,DAT_INTMEM_47,DAT_INTMEM_48,0,0,DAT_INTMEM_49,
                  DAT_INTMEM_4a);
    FUN_CODE_0877(0,0,0,0xff);
    FUN_CODE_0909(8);
    SOFL = uVar2;
    uVar2 = DAT_INTMEM_4a;
    FUN_CODE_07ec(DAT_INTMEM_45,DAT_INTMEM_46,DAT_INTMEM_47,DAT_INTMEM_48,0,0,DAT_INTMEM_49,
                  DAT_INTMEM_4a);
    FUN_CODE_0877(0,0,0,0xff);
    CCAPM0 = uVar2;
  }
  uVar2 = DAT_INTMEM_48;
  FUN_CODE_0909(8,DAT_INTMEM_45,DAT_INTMEM_46,DAT_INTMEM_47,DAT_INTMEM_48);
  PSW1 = uVar2;
  CMOD = DAT_INTMEM_48;
  bVar1 = EA;
  _1_7 = bVar1 & 1;
  EA = 0;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  DAT_SFR_91 = 0;
  EA = bVar1 & 1;
  return 0;
}


/* function FUN_CODE_0b7b at CODE:0b7b */

undefined1 FUN_CODE_0b7b(void)

{
  byte bVar1;
  
  P1_0 = 0;
  P1_1 = 0;
  P1_2 = 0;
  P0_0 = 0;
  P0_1 = 0;
  P0_3 = 0;
  FUN_CODE_1345(1,0);
  bVar1 = CCAPM4;
  CCAPM4 = bVar1 | 4;
  DAT_INTMEM_48 = 0x8f;
  DAT_INTMEM_47 = 1;
  DAT_INTMEM_46 = 0;
  DAT_INTMEM_45 = 0;
  DAT_INTMEM_49 = 0;
  DAT_INTMEM_4a = 0;
  FUN_CODE_096a(0,0,2);
  bVar1 = CCAPM4;
  CCAPM4 = bVar1 | 2;
  DAT_INTMEM_48 = 0x8f;
  DAT_INTMEM_47 = 1;
  DAT_INTMEM_46 = 0;
  DAT_INTMEM_45 = 0;
  DAT_INTMEM_49 = 0;
  DAT_INTMEM_4a = 0;
  FUN_CODE_096a(0,0,1);
  bVar1 = CCAPM4;
  CCAPM4 = bVar1 | 1;
  DAT_INTMEM_48 = 0x8f;
  DAT_INTMEM_47 = 1;
  DAT_INTMEM_46 = 0;
  DAT_INTMEM_45 = 0;
  DAT_INTMEM_49 = 0;
  DAT_INTMEM_4a = 0;
  FUN_CODE_096a(0,0,0);
  bVar1 = CCAPM4;
  CCAPM4 = bVar1 | 8;
  DAT_INTMEM_48 = 0x8f;
  DAT_INTMEM_47 = 1;
  DAT_INTMEM_46 = 0;
  DAT_INTMEM_45 = 0;
  DAT_INTMEM_49 = 0;
  DAT_INTMEM_4a = 0;
  FUN_CODE_096a(0,0,3);
  bVar1 = CCAPM4;
  CCAPM4 = bVar1 | 0x10;
  DAT_INTMEM_48 = 0x8f;
  DAT_INTMEM_47 = 1;
  DAT_INTMEM_46 = 0;
  DAT_INTMEM_45 = 0;
  DAT_INTMEM_49 = 0;
  DAT_INTMEM_4a = 0;
  FUN_CODE_096a(0,0,4);
  bVar1 = CCAPM4;
  CCAPM4 = bVar1 | 0x20;
  DAT_INTMEM_48 = 0x8f;
  DAT_INTMEM_47 = 1;
  DAT_INTMEM_46 = 0;
  DAT_INTMEM_45 = 0;
  DAT_INTMEM_49 = 0;
  DAT_INTMEM_4a = 0;
  FUN_CODE_096a(0,0,5);
  FUN_CODE_15d4();
  bVar1 = EA;
  EA = 0;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  DAT_SFR_91 = 0;
  EA = bVar1 & 1;
  bVar1 = IPH1;
  IPH1 = bVar1 & 0xfe;
  bVar1 = DAT_SFR_b4;
  DAT_SFR_b4 = bVar1 | 1;
  bVar1 = EA;
  EA = 0;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  DAT_SFR_91 = 0;
  EA = bVar1 & 1;
  bVar1 = IPH1;
  IPH1 = bVar1 & 0xfd;
  bVar1 = DAT_SFR_b4;
  DAT_SFR_b4 = bVar1 | 2;
  bVar1 = EA;
  EA = 0;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  DAT_SFR_91 = 0;
  EA = bVar1 & 1;
  bVar1 = IPH1;
  IPH1 = bVar1 & 0xfb;
  bVar1 = DAT_SFR_b4;
  DAT_SFR_b4 = bVar1 | 4;
  bVar1 = EA;
  EA = 0;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  DAT_SFR_91 = 0;
  EA = bVar1 & 1;
  bVar1 = IEN1;
  IEN1 = bVar1 & 0xfe;
  bVar1 = IPL1;
  IPL1 = bVar1 | 1;
  bVar1 = EA;
  EA = 0;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  DAT_SFR_91 = 0;
  EA = bVar1 & 1;
  bVar1 = IEN1;
  IEN1 = bVar1 & 0xfd;
  bVar1 = IPL1;
  IPL1 = bVar1 | 2;
  bVar1 = EA;
  _1_7 = bVar1 & 1;
  EA = 0;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  DAT_SFR_91 = 0;
  EA = bVar1 & 1;
  bVar1 = IEN1;
  IEN1 = bVar1 & 0xf7;
  bVar1 = IPL1;
  IPL1 = bVar1 | 8;
  return 0;
}


/* function FUN_CODE_0cb8 at CODE:0cb8 */

void FUN_CODE_0cb8(void)

{
  char cVar1;
  
  if (BANK1_R4 != BANK1_R0) {
    if (BANK1_R4 < BANK1_R0) {
      if (BANK1_R4 < -BANK1_R3) {
        BANK1_R4 = BANK1_R3 + BANK1_R4;
      }
      else {
        BANK1_R4 = 0xff;
      }
      if (BANK1_R0 + 1 <= BANK1_R4) {
LAB_CODE_0cfe:
        BANK1_R4 = BANK1_R0;
      }
    }
    else {
      cVar1 = (BANK1_R4 < BANK1_R3) << 7;
      if (cVar1 < '\0') {
        BANK1_R4 = 0;
      }
      else {
        BANK1_R4 = BANK1_R4 - (BANK1_R3 - (cVar1 >> 7));
      }
      if (BANK1_R4 < BANK1_R0) goto LAB_CODE_0cfe;
    }
    DAT_INTMEM_48 = 0x8f;
    DAT_INTMEM_47 = 1;
    DAT_INTMEM_46 = 0;
    DAT_INTMEM_45 = 0;
    DAT_INTMEM_49 = 0;
    DAT_INTMEM_4a = BANK1_R4;
    FUN_CODE_096a(0,0,DAT_EXTMEM_00a4);
    FUN_CODE_15da();
  }
  if (BANK1_R1 != BANK1_R5) {
    if (BANK1_R1 < BANK1_R5) {
      if (BANK1_R1 < -BANK1_R3) {
        BANK1_R1 = BANK1_R3 + BANK1_R1;
      }
      else {
        BANK1_R1 = 0xff;
      }
      if (BANK1_R5 + 1 <= BANK1_R1) {
LAB_CODE_0d65:
        BANK1_R1 = BANK1_R5;
      }
    }
    else {
      cVar1 = (BANK1_R1 < BANK1_R3) << 7;
      if (cVar1 < '\0') {
        BANK1_R1 = 0;
      }
      else {
        BANK1_R1 = BANK1_R1 - (BANK1_R3 - (cVar1 >> 7));
      }
      if (BANK1_R1 < BANK1_R5) goto LAB_CODE_0d65;
    }
    DAT_INTMEM_48 = 0x8f;
    DAT_INTMEM_47 = 1;
    DAT_INTMEM_46 = 0;
    DAT_INTMEM_45 = 0;
    DAT_INTMEM_49 = 0;
    DAT_INTMEM_4a = BANK1_R1;
    FUN_CODE_096a(0,0,DAT_EXTMEM_00a5);
    FUN_CODE_15da();
  }
  if (BANK1_R2 == BANK1_R6) {
    return;
  }
  if (BANK1_R2 < BANK1_R6) {
    if (BANK1_R2 < -BANK1_R3) {
      BANK1_R2 = BANK1_R3 + BANK1_R2;
    }
    else {
      BANK1_R2 = 0xff;
    }
    if (BANK1_R2 < BANK1_R6 + 1) goto LAB_CODE_0dcf;
  }
  else {
    cVar1 = (BANK1_R2 < BANK1_R3) << 7;
    if (cVar1 < '\0') {
      BANK1_R2 = 0;
    }
    else {
      BANK1_R2 = BANK1_R2 - (BANK1_R3 - (cVar1 >> 7));
    }
    if (BANK1_R6 <= BANK1_R2) goto LAB_CODE_0dcf;
  }
  BANK1_R2 = BANK1_R6;
LAB_CODE_0dcf:
  DAT_INTMEM_48 = 0x8f;
  DAT_INTMEM_47 = 1;
  DAT_INTMEM_46 = 0;
  DAT_INTMEM_45 = 0;
  DAT_INTMEM_49 = 0;
  DAT_INTMEM_4a = BANK1_R2;
  FUN_CODE_096a(0,0,DAT_EXTMEM_00a6);
  FUN_CODE_15da();
  return;
}


/* function FUN_CODE_0dee at CODE:0dee */

byte FUN_CODE_0dee(char param_1)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  
  bVar1 = EA;
  EA = 0;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  bVar8 = DAT_SFR_9f;
  DAT_SFR_9f = bVar8 | 1;
  EA = bVar1 & 1;
  DAT_SFR_91 = 0;
  if ((param_1 == '\a') || (param_1 == '\b')) {
    WDTRST = 0x30;
  }
  else if (param_1 == '\x06') {
    WDTRST = 0x38;
  }
  WCON = 0;
  DAT_SFR_af = 4;
  bVar1 = EA;
  EA = 0;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  bVar8 = DAT_SFR_a4;
  DAT_SFR_a4 = bVar8 | 1;
  EA = bVar1 & 1;
  bVar8 = HSTAT;
  cVar2 = WDTRST;
  WDTRST = cVar2 + '\x01';
  bVar5 = EA;
  EA = 0;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  bVar1 = DAT_SFR_a4;
  DAT_SFR_a4 = bVar1 | 1;
  EA = bVar5 & 1;
  bVar1 = HSTAT;
  bVar5 = param_1 - 8;
  if (bVar5 == 0) {
    bVar6 = (bVar1 & 1) + bVar8 * '\x02';
    bVar7 = bVar6 & 0xc0;
    bVar8 = bVar6 - 0xe;
    DAT_SFR_af = 0xc;
    WDTRST = 1;
    WCON = 0;
    uVar3 = EA;
    EA = 0;
    bVar4 = EA;
    EA = 0;
    EPCONFIG = 0xaa;
    EPCONFIG = 0x55;
    bVar5 = DAT_SFR_aa;
    DAT_SFR_aa = bVar5 | 0x40;
    EA = bVar4 & 1;
    EPCONFIG = 0xaa;
    EPCONFIG = 0x55;
    bVar5 = DAT_SFR_a4;
    DAT_SFR_a4 = bVar5 | 1;
    EA = bVar4 & 1;
    cVar2 = HSTAT;
    if (((cVar2 == 'K') || (cVar2 = HSTAT, cVar2 == 'R')) || (cVar2 = HSTAT, cVar2 == 'S')) {
      if (0x80U - ((((bVar6 & 0x3f) < 0xf) << 7) >> 7) < 0x81) {
        bVar8 = bVar6 - 0x12;
      }
      else if (((bVar7 == 0x40) || (bVar7 == 0x80)) || (bVar7 == 0xc0)) {
        bVar8 = bVar6 - 0x1c;
      }
    }
    bVar8 = bVar8 >> 1;
    bVar5 = bVar8;
  }
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  DPXL = bVar8;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  DAT_SFR_85 = bVar1;
  bVar1 = EA;
  _1_7 = bVar1 & 1;
  EA = 0;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  bVar8 = DAT_SFR_9f;
  DAT_SFR_9f = bVar8 & 0xfe;
  EA = bVar1 & 1;
  return bVar5;
}


/* function isr_33 at CODE:0ef6 */

undefined1 isr_33(undefined1 param_1,char param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  
  uVar2 = BANK0_R7;
  uVar1 = BANK0_R0;
  cVar3 = DAT_SFR_bd;
  cVar4 = FUN_CODE_091c(cVar3);
  nop();
  FUN_CODE_0960(cVar4 + param_2,cVar3 + '\x02');
  nop();
  nop();
  FIFLG_4 = 1;
  FIFLG_3 = 0;
  BANK0_R7 = uVar2;
  BANK0_R0 = uVar1;
  return param_1;
}


/* function FUN_CODE_0faa at CODE:0faa */

void FUN_CODE_0faa(char param_1,char param_2,undefined1 param_3)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  char cVar5;
  
  DAT_INTMEM_39 = param_1 + '\x01';
  DAT_INTMEM_38 = param_2;
  if (DAT_INTMEM_39 == '\0') {
    DAT_INTMEM_38 = param_2 + '\x01';
  }
  DAT_INTMEM_37 = param_3;
  bVar2 = FUN_CODE_0784(param_1);
  cVar5 = DAT_INTMEM_39;
  cVar4 = DAT_INTMEM_38;
  DAT_INTMEM_39 = DAT_INTMEM_39 + '\x01';
  if (DAT_INTMEM_39 == '\0') {
    DAT_INTMEM_38 = DAT_INTMEM_38 + '\x01';
  }
  uVar3 = FUN_CODE_0784(cVar5,cVar4);
  cVar5 = DAT_INTMEM_39;
  cVar4 = DAT_INTMEM_38;
  DAT_INTMEM_39 = DAT_INTMEM_39 + '\x01';
  if (DAT_INTMEM_39 == '\0') {
    DAT_INTMEM_38 = DAT_INTMEM_38 + '\x01';
  }
  DAT_INTMEM_3a = FUN_CODE_0784(cVar5,cVar4,uVar3);
  cVar4 = (1 < bVar2) << 7;
  if (bVar2 == 2) {
    FUN_CODE_075e(0x3b,0xef,0x15,0xff,0,0,0,4);
    FUN_CODE_15c2();
    cVar5 = '\0';
    DAT_INTMEM_3e = DAT_INTMEM_3e | (cVar4 >> 7) * -8;
    FUN_CODE_15ad(-(cVar4 >> 7));
    cVar5 = cVar5 >> 7;
    cVar4 = CARRY1(cVar5 * -2,cVar5 * -2) << 7;
    DAT_INTMEM_3e = DAT_INTMEM_3e | cVar5 * -4;
    FUN_CODE_15bb(-cVar5);
    bVar1 = -(cVar4 >> 7);
    bVar2 = CARRY1(bVar1,bVar1) << 7;
    DAT_INTMEM_3e = DAT_INTMEM_3e | (cVar4 >> 7) * -2;
    FUN_CODE_15b4(bVar1);
    DAT_INTMEM_3e = DAT_INTMEM_3e | bVar2 >> 7;
    FUN_CODE_14d5(0x3b,0,0,4);
  }
  else if (bVar2 == 1) {
    _0_0 = DAT_INTMEM_3a >> 2 & 1;
    FUN_CODE_1592(DAT_INTMEM_3a >> 3 | (DAT_INTMEM_3a >> 1) << 7);
    bVar2 = (DAT_INTMEM_3a >> 1) << 7;
    _0_0 = DAT_INTMEM_3a >> 1 & 1;
    FUN_CODE_159b(DAT_INTMEM_3a >> 2 | DAT_INTMEM_3a << 7);
    _0_0 = DAT_INTMEM_3a & 1;
    FUN_CODE_1589(DAT_INTMEM_3a >> 1 | bVar2 & 0x80);
    return;
  }
  return;
}


/* function reset_target at CODE:104e */

void reset_target(void)

{
  undefined1 *puVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  byte *pbVar5;
  byte bVar6;
  byte bVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  puVar1 = &DAT_INTMEM_7f;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + -1;
  } while (puVar1 != (undefined1 *)0x0);
  puVar8 = (undefined1 *)0x0;
  cVar4 = -1;
  cVar2 = '\x04';
  do {
    do {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
      cVar4 = cVar4 + -1;
    } while (cVar4 != '\0');
    cVar2 = cVar2 + -1;
  } while (cVar2 != '\0');
  SP = 0x69;
  pbVar9 = &DAT_CODE_146f;
  while( true ) {
    bVar3 = 1;
    bVar6 = *pbVar9;
    if (bVar6 == 0) break;
    bVar7 = bVar6 & 0x3f;
    pbVar10 = pbVar9 + 1;
    if (bVar7 >> 5 != 0) {
      bVar3 = bVar6 & 0x1f;
      bVar7 = pbVar9[1];
      pbVar10 = pbVar9 + 2;
      if (bVar7 != 0) {
        bVar3 = bVar3 + 1;
      }
    }
    pbVar9 = pbVar10;
    cVar2 = CARRY1(bVar6 & 0xc0,bVar6 & 0xc0) << 7;
    if ((bVar6 & 0x40) == 0) {
      pbVar5 = (byte *)*pbVar9;
      pbVar9 = pbVar9 + 1;
      do {
        bVar3 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        if (cVar2 < '\0') {
          *(byte *)ZEXT12(pbVar5) = bVar3;
        }
        else {
          *pbVar5 = bVar3;
        }
        pbVar5 = pbVar5 + '\x01';
        bVar7 = bVar7 - 1;
      } while (bVar7 != 0);
    }
    else if (cVar2 < '\0') {
      do {
        bVar3 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        pbVar5 = (byte *)((bVar3 & 0x7f) >> 3 | 0x20);
        bVar6 = *(byte *)((ushort)((bVar3 & 7) + 0xc) + 0x108f);
        if ((char)bVar3 < '\0') {
          bVar6 = bVar6 | *pbVar5;
        }
        else {
          bVar6 = ~bVar6 & *pbVar5;
        }
        *pbVar5 = bVar6;
        bVar7 = bVar7 - 1;
      } while (bVar7 != 0);
    }
    else {
      pbVar10 = *(byte **)pbVar9;
      pbVar9 = pbVar9 + 2;
      do {
        do {
          bVar6 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          *pbVar10 = bVar6;
          pbVar10 = pbVar10 + 1;
          bVar7 = bVar7 - 1;
        } while (bVar7 != 0);
        bVar3 = bVar3 - 1;
      } while (bVar3 != 0);
    }
  }
  FUN_CODE_157e();
  return;
}


/* function FUN_CODE_10e8 at CODE:10e8 */

void FUN_CODE_10e8(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  
  cVar3 = FUN_CODE_0784();
  if (cVar3 == '\x02') {
    FUN_CODE_075e(0x37,0xe9,0x15,0xff,0,0,0,6);
    FUN_CODE_14d5(0x37,0,0,6);
  }
  else if (cVar3 == '\x01') {
    FUN_CODE_0098(0xdd,0x15,0xff,1);
    DAT_INTMEM_38 = 0;
    while (bVar1 = 0x80 - (((DAT_INTMEM_38 < 0x1a) << 7) >> 7), 0x80 < bVar1) {
      DAT_INTMEM_37 = '\0';
      while (0x80 < 0x80U - (((DAT_INTMEM_37 != -1) << 7) >> 7)) {
        nop();
        DAT_INTMEM_37 = DAT_INTMEM_37 + '\x01';
      }
      DAT_INTMEM_38 = DAT_INTMEM_38 + 1;
    }
    DAT_INTMEM_40 = 0xff;
    DAT_INTMEM_41 = 0xff;
    FUN_CODE_0392(-0x80 - bVar1,0xff,0xfb,0x7f);
    bVar2 = EA;
    EA = 0;
    EPCONFIG = 0xaa;
    EPCONFIG = 0x55;
    bVar1 = DAT_SFR_9f;
    DAT_SFR_9f = bVar1 | 2;
    EA = bVar2 & 1;
    bVar2 = EA;
    _1_7 = bVar2 & 1;
    EA = 0;
    EPCONFIG = 0xaa;
    EPCONFIG = 0x55;
    bVar1 = DAT_SFR_9f;
    DAT_SFR_9f = bVar1 | 0x80;
    EA = bVar2 & 1;
    nop();
    nop();
    return;
  }
  return;
}


/* function FUN_CODE_117b at CODE:117b */

undefined1 FUN_CODE_117b(void)

{
  byte bVar1;
  
  P0_4 = 0;
  P0_5 = 1;
  P1_5 = 0;
  RXD = 0;
  bVar1 = EA;
  EA = 0;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  DAT_SFR_91 = 0;
  EA = bVar1 & 1;
  bVar1 = IEN1;
  IEN1 = bVar1 & 0xef;
  bVar1 = IPL1;
  IPL1 = bVar1 & 0xef;
  bVar1 = EA;
  EA = 0;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  DAT_SFR_91 = 0;
  EA = bVar1 & 1;
  bVar1 = IEN1;
  IEN1 = bVar1 & 0xdf;
  bVar1 = IPL1;
  IPL1 = bVar1 & 0xdf;
  bVar1 = EA;
  EA = 0;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  DAT_SFR_91 = 0;
  EA = bVar1 & 1;
  bVar1 = IPH1;
  IPH1 = bVar1 & 0xdf;
  bVar1 = DAT_SFR_b4;
  DAT_SFR_b4 = bVar1 & 0xdf;
  bVar1 = EA;
  EA = 0;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  DAT_SFR_91 = 0;
  EA = bVar1 & 1;
  bVar1 = DAT_SFR_ac;
  DAT_SFR_ac = bVar1 & 0xfe;
  bVar1 = DAT_SFR_ad;
  DAT_SFR_ad = bVar1 & 0xfe;
  bVar1 = EA;
  _1_7 = bVar1 & 1;
  EA = 0;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  DAT_SFR_91 = 0;
  EA = bVar1 & 1;
  bVar1 = IPH1;
  IPH1 = bVar1 | 0x80;
  bVar1 = DAT_SFR_b4;
  DAT_SFR_b4 = bVar1 & 0x7f;
  return 0;
}


/* function FUN_CODE_11fd at CODE:11fd */

void FUN_CODE_11fd(char param_1,char param_2,undefined1 param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  
  DAT_INTMEM_39 = param_1 + '\x01';
  DAT_INTMEM_38 = param_2;
  if (DAT_INTMEM_39 == '\0') {
    DAT_INTMEM_38 = param_2 + '\x01';
  }
  DAT_INTMEM_37 = param_3;
  cVar3 = FUN_CODE_0784(param_1);
  cVar2 = DAT_INTMEM_39;
  cVar1 = DAT_INTMEM_38;
  DAT_INTMEM_39 = DAT_INTMEM_39 + '\x01';
  if (DAT_INTMEM_39 == '\0') {
    DAT_INTMEM_38 = DAT_INTMEM_38 + '\x01';
  }
  DAT_INTMEM_3a = FUN_CODE_0784(cVar2,cVar1);
  cVar2 = DAT_INTMEM_39;
  cVar1 = DAT_INTMEM_38;
  DAT_INTMEM_39 = DAT_INTMEM_39 + '\x01';
  if (DAT_INTMEM_39 == '\0') {
    DAT_INTMEM_38 = DAT_INTMEM_38 + '\x01';
  }
  DAT_INTMEM_3b = FUN_CODE_0784(cVar2,cVar1);
  cVar2 = DAT_INTMEM_39;
  cVar1 = DAT_INTMEM_38;
  DAT_INTMEM_39 = DAT_INTMEM_39 + '\x01';
  if (DAT_INTMEM_39 == '\0') {
    DAT_INTMEM_38 = DAT_INTMEM_38 + '\x01';
  }
  DAT_INTMEM_3c = FUN_CODE_0784(cVar2,cVar1);
  cVar2 = DAT_INTMEM_39;
  cVar1 = DAT_INTMEM_38;
  DAT_INTMEM_39 = DAT_INTMEM_39 + '\x01';
  if (DAT_INTMEM_39 == '\0') {
    DAT_INTMEM_38 = DAT_INTMEM_38 + '\x01';
  }
  DAT_INTMEM_3d = FUN_CODE_0784(cVar2,cVar1);
  if (cVar3 == '\x03') {
    thunk_FUN_CODE_15d4();
    return;
  }
  if (cVar3 == '\x04') {
    thunk_FUN_CODE_15d7();
    return;
  }
  if (cVar3 == '\x05') {
    DAT_INTMEM_41 = DAT_INTMEM_3d;
    FUN_CODE_1275(DAT_INTMEM_3c,DAT_INTMEM_3b,DAT_INTMEM_3a);
  }
  return;
}


/* function FUN_CODE_1275 at CODE:1275 */

void FUN_CODE_1275(undefined1 param_1,undefined1 param_2,char param_3)

{
  DAT_INTMEM_3e = param_3;
  DAT_INTMEM_3f = param_2;
  DAT_INTMEM_40 = param_1;
  if (param_3 == '\0') {
    DAT_INTMEM_48 = 0x8f;
    DAT_INTMEM_47 = 1;
    DAT_INTMEM_45 = param_3;
    DAT_INTMEM_46 = param_3;
    DAT_INTMEM_49 = param_3;
    DAT_INTMEM_4a = param_2;
    FUN_CODE_096a(0,0,DAT_EXTMEM_00a1);
    DAT_INTMEM_48 = 0x8f;
    DAT_INTMEM_47 = 1;
    DAT_INTMEM_46 = 0;
    DAT_INTMEM_45 = 0;
    DAT_INTMEM_49 = 0;
    DAT_INTMEM_4a = DAT_INTMEM_40;
    FUN_CODE_096a(0,0,DAT_EXTMEM_00a2);
    DAT_INTMEM_48 = 0x8f;
    DAT_INTMEM_47 = 1;
    DAT_INTMEM_46 = 0;
    DAT_INTMEM_45 = 0;
    DAT_INTMEM_49 = 0;
    DAT_INTMEM_4a = DAT_INTMEM_41;
    FUN_CODE_096a(0,0,DAT_EXTMEM_00a3);
    FUN_CODE_15da();
    return;
  }
  if (param_3 == '\x01') {
    BANK1_R6 = DAT_INTMEM_41;
    BANK1_R0 = param_2;
    BANK1_R5 = param_1;
  }
  return;
}


/* function FUN_CODE_12e1 at CODE:12e1 */

void FUN_CODE_12e1(void)

{
  byte bVar1;
  
  FUN_CODE_0dee(6);
  bVar1 = EA;
  EA = 0;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  DAT_SFR_91 = 0;
  EA = bVar1 & 1;
  bVar1 = IEN1;
  IEN1 = bVar1 & 0xbf;
  bVar1 = IPL1;
  IPL1 = bVar1 | 0x40;
  SCON = 0x50;
  bVar1 = PCON;
  PCON = bVar1 | 0x80;
  bVar1 = DAT_SFR_c4;
  DAT_SFR_c4 = bVar1 & 0xf8;
  bVar1 = EA;
  EA = 0;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  DAT_SFR_91 = 0;
  EA = bVar1 & 1;
  bVar1 = DAT_SFR_c4;
  DAT_SFR_c4 = bVar1 | 0x20;
  DAT_SFR_c6 = 0xff;
  DAT_SFR_c5 = 0xf3;
  bVar1 = EA;
  _1_7 = bVar1 & 1;
  EA = 0;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  DAT_SFR_91 = 0;
  EA = bVar1 & 1;
  bVar1 = DAT_SFR_c4;
  DAT_SFR_c4 = bVar1 | 8;
  TI = 1;
  _1_6 = 1;
  FUN_CODE_0098(0,0xf3,0x15,0xff);
  return;
}


/* function FUN_CODE_1345 at CODE:1345 */

void FUN_CODE_1345(char param_1,char param_2)

{
  byte bVar1;
  
  if (param_2 == '\x01') {
    bVar1 = DAT_SFR_8e;
    DAT_SFR_8e = bVar1 | 0x40;
  }
  else if (param_2 == '\0') {
    bVar1 = DAT_SFR_8e;
    DAT_SFR_8e = bVar1 & 0xbf;
  }
  if (param_1 == '\x04') {
    bVar1 = PCON1;
    PCON1 = bVar1 & 0xf8;
    bVar1 = PCON1;
    PCON1 = bVar1 | 2;
    return;
  }
  if (param_1 == '\b') {
    bVar1 = PCON1;
    PCON1 = bVar1 & 0xf8;
    bVar1 = PCON1;
    PCON1 = bVar1 | 3;
    return;
  }
  if (param_1 != '\x10') {
    if (param_1 == ' ') {
      bVar1 = PCON1;
      PCON1 = bVar1 & 0xf8;
      bVar1 = PCON1;
      PCON1 = bVar1 | 5;
      return;
    }
    if (param_1 != '@') {
      if (param_1 == -0x80) {
        bVar1 = PCON1;
        PCON1 = bVar1 & 0xf8;
        bVar1 = PCON1;
        PCON1 = bVar1 | 7;
      }
      else if (param_1 == '\x02') {
        bVar1 = PCON1;
        PCON1 = bVar1 & 0xf8;
        bVar1 = PCON1;
        PCON1 = bVar1 | 1;
        return;
      }
      return;
    }
    bVar1 = PCON1;
    PCON1 = bVar1 & 0xf8;
    bVar1 = PCON1;
    PCON1 = bVar1 | 6;
    return;
  }
  bVar1 = PCON1;
  PCON1 = bVar1 & 0xf8;
  bVar1 = PCON1;
  PCON1 = bVar1 | 4;
  return;
}


/* function isr_2b at CODE:13a2 */

undefined1 isr_2b(undefined1 param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  
  uVar9 = BANK0_R7;
  uVar8 = BANK0_R6;
  uVar7 = BANK0_R5;
  uVar6 = BANK0_R4;
  uVar5 = BANK0_R3;
  uVar4 = BANK0_R2;
  uVar3 = BANK0_R1;
  uVar2 = BANK0_R0;
  uVar1 = DAT_SFR_91;
  TF2 = 0;
  if ((BANK2_R0 != '\0' || BANK2_R1 != '\0') || BANK1_R7 != '\0') {
    FUN_CODE_0942(BANK2_R1,BANK2_R0);
  }
  DAT_SFR_91 = uVar1;
  BANK0_R7 = uVar9;
  BANK0_R6 = uVar8;
  BANK0_R5 = uVar7;
  BANK0_R4 = uVar6;
  BANK0_R3 = uVar5;
  BANK0_R2 = uVar4;
  BANK0_R1 = uVar3;
  BANK0_R0 = uVar2;
  return param_1;
}


/* function FUN_CODE_13ef at CODE:13ef */

undefined1 FUN_CODE_13ef(void)

{
  byte bVar1;
  
  bVar1 = EA;
  EA = 0;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  DAT_SFR_91 = 0;
  EA = bVar1 & 1;
  bVar1 = IPH1;
  IPH1 = bVar1 | 8;
  bVar1 = DAT_SFR_b4;
  DAT_SFR_b4 = bVar1 | 8;
  bVar1 = EA;
  _1_7 = bVar1 & 1;
  EA = 0;
  EPCONFIG = 0xaa;
  EPCONFIG = 0x55;
  DAT_SFR_91 = 0;
  EA = bVar1 & 1;
  bVar1 = IPH1;
  IPH1 = bVar1 | 0x10;
  bVar1 = DAT_SFR_b4;
  DAT_SFR_b4 = bVar1 | 0x10;
  P1_4 = 1;
  P1_3 = 1;
  FIFLG1 = 0xb0;
  bVar1 = DAT_SFR_9b;
  DAT_SFR_9b = bVar1 | 1;
  FIFLG_6 = 1;
  FIFLG_2 = 1;
  return 0;
}


/* function FUN_CODE_142f at CODE:142f */

void FUN_CODE_142f(void)

{
  char in_PSW;
  
  FUN_CODE_15c8();
  if (in_PSW < '\0') {
    FUN_CODE_15cb();
    if (BANK0_R7 != '\0') {
      FUN_CODE_14a2(0x23,0,0);
      if (DAT_INTMEM_23 == '\x02') {
        FUN_CODE_0faa(0x24,0,0);
        return;
      }
      if (DAT_INTMEM_23 == '\x03') {
        FUN_CODE_11fd(0x24,0,0);
      }
      else if (DAT_INTMEM_23 == '\x01') {
        FUN_CODE_10e8(0x24,0,0);
        return;
      }
    }
  }
  return;
}


/* function FUN_CODE_14a2 at CODE:14a2 */

void FUN_CODE_14a2(undefined1 param_1,undefined1 param_2,undefined1 param_3,byte param_4)

{
  byte bVar1;
  
  bVar1 = DAT_SFR_9b;
  DAT_SFR_9b = bVar1 & 0xfe;
  DAT_INTMEM_37 = param_3;
  DAT_INTMEM_38 = param_2;
  DAT_INTMEM_39 = param_1;
  for (bVar1 = 0; bVar1 < param_4; bVar1 = bVar1 + 1) {
    FUN_CODE_07ca(*(undefined1 *)(bVar1 + 0x52),bVar1,DAT_INTMEM_39,DAT_INTMEM_38,DAT_INTMEM_37);
    *(undefined1 *)(bVar1 + 0x52) = 0;
  }
  DAT_INTMEM_5e = 0;
  bVar1 = DAT_SFR_9b;
  DAT_SFR_9b = bVar1 | 1;
  return;
}


/* function FUN_CODE_14d5 at CODE:14d5 */

void FUN_CODE_14d5(undefined1 param_1,undefined1 param_2,undefined1 param_3,byte param_4,
                  undefined1 param_5)

{
  byte bVar1;
  
  bVar1 = DAT_SFR_9b;
  DAT_SFR_9b = bVar1 & 0xfe;
  DAT_INTMEM_3f = param_3;
  DAT_INTMEM_40 = param_2;
  DAT_INTMEM_41 = param_1;
  for (bVar1 = 0; bVar1 < param_4; bVar1 = bVar1 + 1) {
    param_5 = FUN_CODE_079d(bVar1 - param_4,bVar1,DAT_INTMEM_41,DAT_INTMEM_40,DAT_INTMEM_3f,param_5)
    ;
    *(undefined1 *)(bVar1 + 0x5f) = BANK0_R6;
  }
  DAT_INTMEM_5d = param_4;
  bVar1 = DAT_SFR_9b;
  DAT_SFR_9b = bVar1 | 1;
  return;
}


/* function FUN_CODE_1503 at CODE:1503 */

void FUN_CODE_1503(undefined1 param_1,undefined1 param_2,undefined1 param_3)

{
  byte bVar1;
  
  BANK1_R7 = param_3;
  BANK2_R0 = param_2;
  BANK2_R1 = param_1;
  bVar1 = T2MOD;
  T2MOD = bVar1 | 0x10;
  bVar1 = T2MOD;
  T2MOD = bVar1 & 0x9f;
  bVar1 = T2CON;
  T2CON = bVar1 & 0xfe;
  bVar1 = T2MOD;
  T2MOD = bVar1 | 0x80;
  bVar1 = T2MOD;
  T2MOD = bVar1 | 8;
  RCAP2H = 0xe8;
  RCAP2L = 0x90;
  TH2 = 0xe8;
  TL2 = 0x90;
  bVar1 = DAT_SFR_9b;
  DAT_SFR_9b = bVar1 | 0x80;
  TR2 = 1;
  ET0 = 1;
  return;
}


/* function FUN_CODE_154b at CODE:154b */

void FUN_CODE_154b(void)

{
  FUN_CODE_117b();
  FUN_CODE_1503(0x2c,0x15,0xff);
  FUN_CODE_12e1();
  FUN_CODE_13ef();
  FUN_CODE_0b7b();
  _0_0 = 1;
  FUN_CODE_15a4();
  return;
}


/* function FUN_CODE_1565 at CODE:1565 */

void FUN_CODE_1565(void)

{
  if (_1_3 != '\0') {
    thunk_FUN_CODE_0cb8();
    _1_3 = '\0';
  }
  if (_1_1 != '\0') {
    FUN_CODE_002a();
    _1_1 = '\0';
  }
  if (_1_2 != '\0') {
    FUN_CODE_0031();
    _1_2 = '\0';
  }
  return;
}


/* function FUN_CODE_157e at CODE:157e */

void FUN_CODE_157e(void)

{
  FUN_CODE_154b();
  do {
    FUN_CODE_1565();
    FUN_CODE_142f();
  } while( true );
}


/* function FUN_CODE_1589 at CODE:1589 */

void FUN_CODE_1589(void)

{
  if (_0_0 != '\0') {
    P0_4 = 1;
    return;
  }
  P0_4 = 0;
  return;
}


/* function FUN_CODE_1592 at CODE:1592 */

void FUN_CODE_1592(void)

{
  if (_0_0 != '\0') {
    P0_5 = 1;
    return;
  }
  P0_5 = 0;
  return;
}


/* function FUN_CODE_159b at CODE:159b */

void FUN_CODE_159b(void)

{
  if (_0_0 != '\0') {
    P1_5 = 1;
    return;
  }
  P1_5 = 0;
  return;
}


/* function FUN_CODE_15a4 at CODE:15a4 */

void FUN_CODE_15a4(void)

{
  if (_0_0 != '\0') {
    EA = 1;
    return;
  }
  EA = 0;
  return;
}


/* function FUN_CODE_15ad at CODE:15ad */

void FUN_CODE_15ad(void)

{
  char cVar1;
  
  cVar1 = P0_5;
  if (cVar1 << 7 < '\0') {
    return;
  }
  return;
}


/* function FUN_CODE_15b4 at CODE:15b4 */

void FUN_CODE_15b4(void)

{
  char cVar1;
  
  cVar1 = P0_4;
  if (cVar1 << 7 < '\0') {
    return;
  }
  return;
}


/* function FUN_CODE_15bb at CODE:15bb */

void FUN_CODE_15bb(void)

{
  char cVar1;
  
  cVar1 = P1_5;
  if (cVar1 << 7 < '\0') {
    return;
  }
  return;
}


/* function FUN_CODE_15c2 at CODE:15c2 */

void FUN_CODE_15c2(void)

{
  undefined1 uVar1;
  
  uVar1 = P1_7;
  return;
}


/* function FUN_CODE_15c8 at CODE:15c8 */

void FUN_CODE_15c8(void)

{
  return;
}


/* function FUN_CODE_15cb at CODE:15cb */

void FUN_CODE_15cb(void)

{
  return;
}


/* function thunk_FUN_CODE_15d4 at CODE:15ce */

void thunk_FUN_CODE_15d4(void)

{
  CF = 1;
  return;
}


/* function thunk_FUN_CODE_15d7 at CODE:15d1 */

void thunk_FUN_CODE_15d7(void)

{
  CF = 0;
  return;
}


/* function FUN_CODE_15d4 at CODE:15d4 */

void FUN_CODE_15d4(void)

{
  CF = 1;
  return;
}


/* function FUN_CODE_15d7 at CODE:15d7 */

void FUN_CODE_15d7(void)

{
  CF = 0;
  return;
}


/* function FUN_CODE_15da at CODE:15da */

void FUN_CODE_15da(void)

{
  CR = 1;
  return;
}


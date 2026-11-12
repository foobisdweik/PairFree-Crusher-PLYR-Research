/* Selected Master .35 functions. Pointer-derived MCU mapping. Static evidence only. */

/* function at 081acb44 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ds_081acb44(uint param_1,byte *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 auStack_14 [2];
  
  pcVar1 = _DAT_081acbe8;
  if (*_DAT_081acbe8 == '\0') {
    func_0x082528d0(_DAT_081acbec,0,0x238);
    *pcVar1 = '\x01';
  }
  if (param_1 < 4) {
    if (*param_2 < 0xb) {
      func_0x082eeb38(auStack_14);
      iVar2 = _DAT_081acbec;
      uVar4 = (uint)*(byte *)(_DAT_081acbec + param_1 * 0x8e);
      if (((uVar4 & 3) != 1) && (-1 < (int)(uVar4 << 0x1b))) {
        func_0x082ef438(auStack_14[0]);
        uVar3 = func_0x081ac684(param_1,param_2,1);
        return uVar3;
      }
      func_0x082ef438(auStack_14[0]);
      func_0x082eeb08(_DAT_081acbf0,_DAT_081acbfc,2,param_1,*(undefined1 *)(iVar2 + param_1 * 0x8e))
      ;
      uVar3 = 0xfffffffc;
    }
    else {
      func_0x082eeb08(_DAT_081acbf0,_DAT_081acbf8,1);
      uVar3 = 0xffffffff;
    }
  }
  else {
    func_0x082eeb08(_DAT_081acbf0,_DAT_081acbf4,1);
    uVar3 = 0xfffffffe;
  }
  return uVar3;
}


/* function at 0824d4a4 */

void ds_0824d4a4(void)

{
  return;
}


/* function at 0824cc28 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_0824cfb8(void)

{
  undefined4 in_r3;
  
  func_0x0824cf2c(0x45,0);
  func_0x082ee498(0x28);
                    /* WARNING: Could not recover jumptable at 0x082ee040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_082ee044)(_DAT_0824cfdc,_DAT_0824cfd8,0,in_r3);
  return;
}


/* function at 0824d214 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool ds_0824d214(void)

{
  int iVar1;
  
  iVar1 = ds_081f8c14();
  if (iVar1 != 0) {
    func_0x082ee038(_DAT_0824d234,_DAT_0824d238,0);
  }
  return iVar1 == 0;
}


/* listing 0824cf2c..0824cf70 (linear sweep) */
0824cf2c push {r0,r1,r2,r3,r4,r5,r6,lr}
0824cf2e movs r6,#0x2
0824cf30 mov r5,r1
0824cf32 movs r3,#0x0
0824cf34 strb.w r1,[sp,#0x9]
0824cf38 movs r1,#0x64
0824cf3a str r6,[sp,#0xc]
0824cf3c mov r4,r0
0824cf3e strd r3,r1,[sp,#0x0]
0824cf42 strb.w r0,[sp,#0x8]
0824cf46 ldr r2,[sp,#0xc]
0824cf48 ldr r0,[0x0824cf64]
0824cf4a add r1,sp,#0x8
0824cf4c bl 0x081f8c14
0824cf50 cbz r0,0x0824cf60
0824cf52 mov r3,r4
0824cf54 mov r2,r6
0824cf56 ldr r1,[0x0824cf68]
0824cf58 ldr r0,[0x0824cf6c]
0824cf5a str r5,[sp,#0x0]
0824cf5c bl 0x082eeb08
0824cf60 add sp,#0x10
0824cf62 pop {r4,r5,r6,pc}
0824cf64 ??
0824cf66 lsls r0,r4,#0x10
0824cf68 adds r1,#0x54
0824cf6a lsls r6,r1,#0x18
0824cf6c strb r4,[r6,#0x14]
0824cf6e lsrs r1,r6,#0x20
0824cf70 push {r3,lr}

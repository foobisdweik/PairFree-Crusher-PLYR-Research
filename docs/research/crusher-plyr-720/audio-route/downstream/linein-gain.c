/* Selected Master .35 functions. Pointer-derived MCU mapping. Static evidence only. */

/* function at 08221c0a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ds_08221c0a(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  char in_CY;
  
  if (in_CY != '\0') {
    param_2 = 10;
  }
  uVar2 = (uint)*(ushort *)(_LAB_08221c64 + param_2 * 2);
  if ((param_1 == 1) || (param_1 == 4)) {
    *_DAT_08221c68 = uVar2;
    iVar1 = func_0x081bd660(7);
    if (iVar1 != 0) {
      func_0x08221bc4(1);
    }
  }
  else if (param_1 == 7) {
    *_DAT_08221c74 = uVar2;
    iVar1 = func_0x081bd660(0x34);
    if (iVar1 != 0) {
      ds_08221b80(1);
    }
  }
  func_0x082ee038(_DAT_08221c70,_DAT_08221c6c,3,param_1,param_2,uVar2);
  return;
}


/* function at 08221bc4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ds_08221bc4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uStack_c;
  
  uStack_c = param_2;
  uStack_c = func_0x08208f78(0,1,param_3,param_4,param_1);
  func_0x082ee038(_LAB_08221bf8,_LAB_08221bf4,1,param_1);
  uVar1 = _LAB_08221c04;
  uVar2 = 0;
  if (param_1 != 0) {
    uVar2 = *_DAT_08221bfc;
  }
  *_DAT_08221c00 = uVar2;
  func_0x08207c78(uVar1,&uStack_c);
  return;
}


/* function at 081bd660 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool ds_081bd660(int param_1)

{
  return *(int *)(_DAT_081bd670 + param_1 * 4) != 0;
}


/* listing 08221900..082219c0 (linear sweep) */
08221900 mov r2,r7
08221902 movs r1,#0x1
08221904 mov r0,r8
08221906 bl 0x082206a8
0822190a ldr r3,[0x08221a48]
0822190c mov r2,r7
0822190e ldr r6,[r3,#0x0]
08221910 movs r1,#0x0
08221912 add r6,r0
08221914 mov r0,r8
08221916 bl 0x082206a8
0822191a movs r7,#0x4
0822191c strd r6,r0,[sp,#0x34]
08221920 movs r6,#0x0
08221922 add r1,sp,#0x18
08221924 movs r2,#0x38
08221926 mov r0,r9
08221928 bl 0x082ee988
0822192c ldrb r3,[r5,#0x8]
0822192e movs r2,#0x5
08221930 str r3,[sp,#0x8]
08221932 ldrb r3,[r5,#0x4]
08221934 ldr r1,[0x08221a4c]
08221936 str r3,[sp,#0x4]
08221938 ldrh r3,[r5,#0x6]
0822193a ldr r0,[0x08221a3c]
0822193c str r3,[sp,#0x0]
0822193e ldrh r3,[r5,#0x2]
08221940 bl 0x082ee038
08221944 ldr r3,[r4,#0x24]
08221946 movs r2,#0x6
08221948 str r3,[sp,#0x10]
0822194a ldr r3,[r4,#0x20]
0822194c ldr r1,[0x08221a50]
0822194e str r3,[sp,#0xc]
08221950 ldr r3,[r4,#0x8]
08221952 ldr r0,[0x08221a3c]
08221954 str r3,[sp,#0x8]
08221956 ldr r3,[r4,#0x4]
08221958 strd r6,r3,[sp,#0x0]
0822195c mov r3,r7
0822195e bl 0x082ee038
08221962 b 0x0822182a
08221964 cmp.w r10,#0x10
08221968 bne 0x082219a6
0822196a cmp r6,#0x1
0822196c bne 0x082219ea
0822196e mov r1,r7
08221970 mov r0,r6
08221972 add r2,sp,#0x18
08221974 bl 0x08220d60
08221978 mov r1,r7
0822197a movs r0,#0x0
0822197c add r2,sp,#0x18
0822197e bl 0x08220d60
08221982 mov r2,r7
08221984 mov r1,r6
08221986 mov r0,r8
08221988 bl 0x082206a8
0822198c ldr r3,[0x08221a48]
0822198e mov r2,r7
08221990 ldr r3,[r3,#0x0]
08221992 movs r1,#0x0
08221994 add.w r10,r0,r3
08221998 mov r0,r8
0822199a bl 0x082206a8
0822199e movs r7,#0x5
082219a0 strd r10,r0,[sp,#0x34]
082219a4 b 0x08221922
082219a6 cmp.w r10,#0x20
082219aa bne 0x082219ea
082219ac cmp.w r6,#0x200
082219b0 bne 0x082219ea
082219b2 movs r1,#0x7
082219b4 movs r0,#0x1
082219b6 add r2,sp,#0x18
082219b8 bl 0x08220d60
082219bc movs r1,#0x7
082219be movs r0,#0x0
082219c0 add r2,sp,#0x18

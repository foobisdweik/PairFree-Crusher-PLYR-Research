
undefined * entry(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  
  puVar3 = PTR_FUN_00010198;
  puVar2 = PTR_FUN_00010194;
  puVar1 = PTR_FUN_00010190;
  pcVar4 = (code *)*param_1;
  *(code **)PTR_FUN_00010190 = pcVar4;
  (*pcVar4)(puVar2,puVar3);
  (**(code **)puVar1)(PTR_FUN_0001019c,PTR_FUN_000101a0);
  (**(code **)puVar1)(PTR_FUN_000101a4,PTR_FUN_000101a8);
  return PTR_FUN_000101ac;
}


int __fastcall ShitOnWRD(int a1, int a2)
{
  int v2; // esi
  int v4; // esi
  int result; // eax

  v2 = dword_1013D4E8; // you think i would include this?
  sub_1002AB30("luastate", "");
  sub_1002AB30("extra", "");
  sub_1002AB30("identity2", "");
  v4 = *(_DWORD *)(sub_1002A120() + v2);
  sub_1002AB30("luastate", "");
  sub_1002AB30("extra", "");
  sub_1002AB30("identity1", "");
  result = sub_1002A120();
  *(_DWORD *)(result + v4) = a2;
  return result;
}

int __thiscall sub_1002AB30(_BYTE *this, void *a2, int a3)
{
  int v4; // esi
  int v5; // eax
  int v6; // esi
  int v8; // edi
  int v9; // esi
  int v10; // ecx
  int v11; // eax
  int v12[3]; // [esp+10h] [ebp-F0h] BYREF
  int v13[3]; // [esp+1Ch] [ebp-E4h] BYREF
  char *v14; // [esp+28h] [ebp-D8h]
  _BYTE *v15; // [esp+2Ch] [ebp-D4h]
  LPVOID v16; // [esp+C8h] [ebp-38h] BYREF
  int v17; // [esp+CCh] [ebp-34h]
  char v18[12]; // [esp+D0h] [ebp-30h] BYREF
  int v19; // [esp+DCh] [ebp-24h]
  __int64 v20; // [esp+E8h] [ebp-18h] BYREF
  int v21; // [esp+FCh] [ebp-4h]

  v15 = this;
  if ( this[8] )
  {
    if ( this[8] != 7 )
    {
      sub_10028EE0(this);
      sub_1002B7F0(v10);
      v21 = 0;
      sub_1002E180();
      v11 = sub_1002B7D0(v12);
      LOBYTE(v21) = 1;
      sub_10029350(v11);
    }
  }
  else
  {
    v13[0] = 0;
    v21 = 3;
    sub_1002A830(7, 0);
    v4 = sub_100CD76A(8);
    v14 = (char *)v4;
    *(_QWORD *)v4 = 0i64;
    *(_DWORD *)v4 = 0;
    *(_DWORD *)(v4 + 4) = 0;
    v5 = sub_100CD76A(48);
    v12[0] = v4;
    *(_DWORD *)v5 = v5;
    *(_DWORD *)(v5 + 4) = v5;
    *(_DWORD *)(v5 + 8) = v5;
    *(_WORD *)(v5 + 12) = 257;
    *(_DWORD *)v4 = v5;
    sub_100298F0(this);
    sub_100297B0(v12);
  }
  LODWORD(v20) = a2;
  HIDWORD(v20) = (4 * (a3 - (_DWORD)a2)) | 2;
  v21 = 4;
  v6 = *(_DWORD *)(sub_1002ECA0(v13, &v20) + 8);
  if ( v6 != **(_DWORD **)this && (unsigned __int8)sub_10029600(&v20) )
    return v6 + 24;
  v8 = sub_10028F00();
  sub_100293F0(&v20);
  v19 = 0;
  v14 = v18;
  LOBYTE(v21) = 6;
  sub_1002A8D0(v8);
  sub_1002AA60(v8);
  LOBYTE(v21) = 7;
  v9 = sub_10033A00(v6, &v16) + 24;
  sub_100297B0(v18);
  if ( v16 && (v17 & 3) == 1 )
    sub_100D7FF7(v16);
  if ( a2 )
  {
    if ( (((unsigned __int8)(4 * (a3 - (_BYTE)a2)) | 2) & 3) == 1 )
      sub_100D7FF7(a2);
  }
  return v9;
}

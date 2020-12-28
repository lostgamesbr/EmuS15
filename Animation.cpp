#include "stdafx.h"
#include "Hustle.h"
#include "TMemory.h"
#include "Defines.h"
#include "Util.h"

void AniHustle()
{
  SetDword(0x005AA410 + 1,	(DWORD)"/comer"); // --> 005AA410  ; Hustle

  SetDword(0x005A4A82 + 1,	(DWORD)"/mover"); // --> 005A4A82  ; Move

  SetDword(0x004D2AA7+1,(DWORD)"Nenhuma placa de som encontrada"); // --> Direct Sound Failed ; 004D2AA7

  //MemorySet(0x004D2AA7,0x90,0x05); // --> Direct Sound Failed ; 004D2AA7 ; Remove MSG

  //SetDword(0x004D2AB9+1,(DWORD)"Nenhuma placa de som encontrada"); // --> Direct Sound Failed ; 004D2AB9

  //SetDword(0x0096AF10+1,(DWORD)"Sair"); // --> Menu - Exit ; 007A89EB Original Function

  //MemorySet(0x004D17BC,0x90,0x05); // Remove mumsg.dll ; Função não abre o Main
   
   
}

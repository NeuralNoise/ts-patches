#include "macros/patch.h"
#include "TiberianSun.h"
#include <windows.h>
#include "patch.h"
#include <string.h>

#ifdef WWDEBUG
LJMP(0x004082D0, _hook_wwdebug_printf);
LJMP(0x004735C0, _hook_wwdebug_printf);
#endif

/* To call Cell_Is_Shrouded, we need to convert the xy mouse coords to
   xyz cell coords.
*/
bool __thiscall
is_coord_shrouded(MouseClass *Map, wCoordStruct *xy_coords) {
  xyzCoordStruct xyz;
  xyz.x = (xy_coords->x << 8) + 128;
  xyz.y = (xy_coords->y << 8) + 128;
  xyz.z = 0;
  xyz.z = MapClass__GetCellFloorHeight(Map, &xyz);
  CellClass *cell = MapClass__Get_Target_Coord(Map, &xyz);

  if (cell->VisibilityFlags & 0x1000)
    xyz.z += dword_7B3304;

  return MapClass__Cell_Is_Shrouded(Map, &xyz);
}


int __cdecl vsprintf(char * restrict str, const char * restrict format, va_list ap);
size_t strnlen(const char *s, size_t maxlen);
char wwdebug_buf[100];

void __cdecl
hook_wwdebug_printf(char const *fmt, ...)
{
  va_list ap;
  va_start(ap,fmt);
  static bool already_consoled = false;

  if (!already_consoled) {
    AllocConsole();
    already_consoled = true;
    WWDebug_Printf("Allocated the console\n");
  }

  HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

  size_t fmt_len = strnlen(fmt,99);

  if (fmt_len >= 99)
    return;
  vsprintf(wwdebug_buf, fmt, ap);
  va_end(ap);

  size_t len = strnlen(wwdebug_buf,99);
  if (len >= 99)
    return;
  LPDWORD ret;

  WriteConsole(h,wwdebug_buf,len, 0, 0);
  return;
}

size_t
strnlen(const char *s, size_t maxlen)
{
        size_t len;

        for (len = 0; len < maxlen; len++, s++) {
                if (!*s)
                        break;
        }
        return (len);
}

HouseClass * __stdcall //HouseClass *
GetHouseByUserName(char *name) {

  if (name == 0)
    return 0;

  HouseClass **house = HouseClassArray.Vector;
  for (int i = 0; i < HouseClassArray.ActiveCount; i++) {
    char *this_name = house[i]->Name;

    if (__strcmpi(this_name, name) == 0)
      return house[i];

  }
  return 0;
}

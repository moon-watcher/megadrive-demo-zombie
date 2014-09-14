#include "config.h"
#include "types.h"

#include "font.h"


const u32 font_base[FONT_LEN * 8] =
{
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,


    0x00000000,
    0x000FF000,
    0x000FF000,
    0x000FF000,
    0x000FF000,
    0x00000000,
    0x000FF000,
    0x00000000,


    0x00000000,
    0x0FF00FF0,
    0x0FF00FF0,
    0x0FF00FF0,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,


    0x00000000,
    0x0FF00FF0,
    0xFFFFFFFF,
    0x0FF00FF0,
    0x0FF00FF0,
    0xFFFFFFFF,
    0x0FF00FF0,
    0x00000000,


    0x000FF000,
    0x00FFFFF0,
    0x0FF00000,
    0x00FFFF00,
    0x00000FF0,
    0x0FFFFF00,
    0x000FF000,
    0x00000000,


    0x00000000,
    0x0FF00FF0,
    0x0FF0FF00,
    0x000FF000,
    0x00FF0000,
    0x0FF00FF0,
    0x0F000FF0,
    0x00000000,


    0x000FFF00,
    0x00FF0FF0,
    0x000FFF00,
    0x00FFF000,
    0x0FF0FFFF,
    0x0FF00FF0,
    0x00FFF0FF,
    0x00000000,


    0x00000000,
    0x000FF000,
    0x000FF000,
    0x000FF000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,


    0x00000000,
    0x0000FFF0,
    0x000FFF00,
    0x000FF000,
    0x000FF000,
    0x000FFF00,
    0x0000FFF0,
    0x00000000,


    0x00000000,
    0x0FFF0000,
    0x00FFF000,
    0x000FF000,
    0x000FF000,
    0x00FFF000,
    0x0FFF0000,
    0x00000000,


    0x00000000,
    0x0FF00FF0,
    0x00FFFF00,
    0xFFFFFFFF,
    0x00FFFF00,
    0x0FF00FF0,
    0x00000000,
    0x00000000,


    0x00000000,
    0x000FF000,
    0x000FF000,
    0x0FFFFFF0,
    0x000FF000,
    0x000FF000,
    0x00000000,
    0x00000000,


    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x000FF000,
    0x000FF000,
    0x00FF0000,


    0x00000000,
    0x00000000,
    0x00000000,
    0x0FFFFFF0,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,


    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x000FF000,
    0x000FF000,
    0x00000000,


    0x00000000,
    0x00000FF0,
    0x0000FF00,
    0x000FF000,
    0x00FF0000,
    0x0FF00000,
    0x0F000000,
    0x00000000,


    0x00000000,
    0x00FFFF00,
    0x0FF00FF0,
    0x0FF0FFF0,
    0x0FFF0FF0,
    0x0FF00FF0,
    0x00FFFF00,
    0x00000000,


    0x00000000,
    0x000FF000,
    0x00FFF000,
    0x000FF000,
    0x000FF000,
    0x000FF000,
    0x0FFFFFF0,
    0x00000000,


    0x00000000,
    0x00FFFF00,
    0x0FF00FF0,
    0x0000FF00,
    0x000FF000,
    0x00FF0000,
    0x0FFFFFF0,
    0x00000000,


    0x00000000,
    0x0FFFFFF0,
    0x0000FF00,
    0x000FF000,
    0x0000FF00,
    0x0FF00FF0,
    0x00FFFF00,
    0x00000000,


    0x00000000,
    0x0000FF00,
    0x000FFF00,
    0x00FFFF00,
    0x0FF0FF00,
    0x0FFFFFF0,
    0x0000FF00,
    0x00000000,


    0x00000000,
    0x0FFFFFF0,
    0x0FF00000,
    0x0FFFFF00,
    0x00000FF0,
    0x0FF00FF0,
    0x00FFFF00,
    0x00000000,


    0x00000000,
    0x00FFFF00,
    0x0FF00000,
    0x0FFFFF00,
    0x0FF00FF0,
    0x0FF00FF0,
    0x00FFFF00,
    0x00000000,


    0x00000000,
    0x0FFFFFF0,
    0x00000FF0,
    0x0000FF00,
    0x000FF000,
    0x00FF0000,
    0x00FF0000,
    0x00000000,


    0x00000000,
    0x00FFFF00,
    0x0FF00FF0,
    0x00FFFF00,
    0x0FF00FF0,
    0x0FF00FF0,
    0x00FFFF00,
    0x00000000,


    0x00000000,
    0x00FFFF00,
    0x0FF00FF0,
    0x00FFFFF0,
    0x00000FF0,
    0x0000FF00,
    0x00FFF000,
    0x00000000,


    0x00000000,
    0x00000000,
    0x000FF000,
    0x000FF000,
    0x00000000,
    0x000FF000,
    0x000FF000,
    0x00000000,


    0x00000000,
    0x00000000,
    0x000FF000,
    0x000FF000,
    0x00000000,
    0x000FF000,
    0x000FF000,
    0x00FF0000,


    0x00000FF0,
    0x0000FF00,
    0x000FF000,
    0x00FF0000,
    0x000FF000,
    0x0000FF00,
    0x00000FF0,
    0x00000000,


    0x00000000,
    0x00000000,
    0x0FFFFFF0,
    0x00000000,
    0x00000000,
    0x0FFFFFF0,
    0x00000000,
    0x00000000,


    0x0FF00000,
    0x00FF0000,
    0x000FF000,
    0x0000FF00,
    0x000FF000,
    0x00FF0000,
    0x0FF00000,
    0x00000000,


    0x00000000,
    0x00FFFF00,
    0x0FF00FF0,
    0x0000FF00,
    0x000FF000,
    0x00000000,
    0x000FF000,
    0x00000000,


    0x00000000,
    0x00FFFF00,
    0x0FF00FF0,
    0x0FF0FFF0,
    0x0FF0FFF0,
    0x0FF00000,
    0x00FFFFF0,
    0x00000000,


    0x00000000,
    0x000FF000,
    0x00FFFF00,
    0x0FF00FF0,
    0x0FF00FF0,
    0x0FFFFFF0,
    0x0FF00FF0,
    0x00000000,


    0x00000000,
    0x0FFFFF00,
    0x0FF00FF0,
    0x0FFFFF00,
    0x0FF00FF0,
    0x0FF00FF0,
    0x0FFFFF00,
    0x00000000,


    0x00000000,
    0x00FFFF00,
    0x0FF00FF0,
    0x0FF00000,
    0x0FF00000,
    0x0FF00FF0,
    0x00FFFF00,
    0x00000000,


    0x00000000,
    0x0FFFF000,
    0x0FF0FF00,
    0x0FF00FF0,
    0x0FF00FF0,
    0x0FF0FF00,
    0x0FFFF000,
    0x00000000,


    0x00000000,
    0x0FFFFFF0,
    0x0FF00000,
    0x0FFFFF00,
    0x0FF00000,
    0x0FF00000,
    0x0FFFFFF0,
    0x00000000,


    0x00000000,
    0x0FFFFFF0,
    0x0FF00000,
    0x0FFFFF00,
    0x0FF00000,
    0x0FF00000,
    0x0FF00000,
    0x00000000,


    0x00000000,
    0x00FFFFF0,
    0x0FF00000,
    0x0FF00000,
    0x0FF0FFF0,
    0x0FF00FF0,
    0x00FFFFF0,
    0x00000000,


    0x00000000,
    0x0FF00FF0,
    0x0FF00FF0,
    0x0FFFFFF0,
    0x0FF00FF0,
    0x0FF00FF0,
    0x0FF00FF0,
    0x00000000,


    0x00000000,
    0x0FFFFFF0,
    0x000FF000,
    0x000FF000,
    0x000FF000,
    0x000FF000,
    0x0FFFFFF0,
    0x00000000,


    0x00000000,
    0x00000FF0,
    0x00000FF0,
    0x00000FF0,
    0x00000FF0,
    0x0FF00FF0,
    0x00FFFF00,
    0x00000000,


    0x00000000,
    0x0FF00FF0,
    0x0FF0FF00,
    0x0FFFF000,
    0x0FFFF000,
    0x0FF0FF00,
    0x0FF00FF0,
    0x00000000,


    0x00000000,
    0x0FF00000,
    0x0FF00000,
    0x0FF00000,
    0x0FF00000,
    0x0FF00000,
    0x0FFFFFF0,
    0x00000000,


    0x00000000,
    0x0FF000FF,
    0x0FFF0FFF,
    0x0FFFFFFF,
    0x0FF0F0FF,
    0x0FF000FF,
    0x0FF000FF,
    0x00000000,


    0x00000000,
    0x0FF00FF0,
    0x0FFF0FF0,
    0x0FFFFFF0,
    0x0FFFFFF0,
    0x0FF0FFF0,
    0x0FF00FF0,
    0x00000000,


    0x00000000,
    0x00FFFF00,
    0x0FF00FF0,
    0x0FF00FF0,
    0x0FF00FF0,
    0x0FF00FF0,
    0x00FFFF00,
    0x00000000,


    0x00000000,
    0x0FFFFF00,
    0x0FF00FF0,
    0x0FF00FF0,
    0x0FFFFF00,
    0x0FF00000,
    0x0FF00000,
    0x00000000,


    0x00000000,
    0x00FFFF00,
    0x0FF00FF0,
    0x0FF00FF0,
    0x0FF00FF0,
    0x0FF0FF00,
    0x00FF0FF0,
    0x00000000,


    0x00000000,
    0x0FFFFF00,
    0x0FF00FF0,
    0x0FF00FF0,
    0x0FFFFF00,
    0x0FF0FF00,
    0x0FF00FF0,
    0x00000000,


    0x00000000,
    0x00FFFF00,
    0x0FF00000,
    0x00FFFF00,
    0x00000FF0,
    0x00000FF0,
    0x00FFFF00,
    0x00000000,


    0x00000000,
    0x0FFFFFF0,
    0x000FF000,
    0x000FF000,
    0x000FF000,
    0x000FF000,
    0x000FF000,
    0x00000000,


    0x00000000,
    0x0FF00FF0,
    0x0FF00FF0,
    0x0FF00FF0,
    0x0FF00FF0,
    0x0FF00FF0,
    0x0FFFFFF0,
    0x00000000,


    0x00000000,
    0x0FF00FF0,
    0x0FF00FF0,
    0x0FF00FF0,
    0x0FF00FF0,
    0x00FFFF00,
    0x000FF000,
    0x00000000,


    0x00000000,
    0x0FF000FF,
    0x0FF000FF,
    0x0FF0F0FF,
    0x0FFFFFFF,
    0x0FFF0FFF,
    0x0FF000FF,
    0x00000000,


    0x00000000,
    0x0FF00FF0,
    0x0FF00FF0,
    0x00FFFF00,
    0x00FFFF00,
    0x0FF00FF0,
    0x0FF00FF0,
    0x00000000,


    0x00000000,
    0x0FF00FF0,
    0x0FF00FF0,
    0x00FFFF00,
    0x000FF000,
    0x000FF000,
    0x000FF000,
    0x00000000,


    0x00000000,
    0x0FFFFFF0,
    0x0000FF00,
    0x000FF000,
    0x00FF0000,
    0x0FF00000,
    0x0FFFFFF0,
    0x00000000,


    0x00000000,
    0x000FFFF0,
    0x000FF000,
    0x000FF000,
    0x000FF000,
    0x000FF000,
    0x000FFFF0,
    0x00000000,


    0x00000000,
    0x0F000000,
    0x0FF00000,
    0x00FF0000,
    0x000FF000,
    0x0000FF00,
    0x00000FF0,
    0x00000000,


    0x00000000,
    0x0FFFF000,
    0x000FF000,
    0x000FF000,
    0x000FF000,
    0x000FF000,
    0x0FFFF000,
    0x00000000,


    0x00000000,
    0x0000F000,
    0x000FFF00,
    0x00FF0FF0,
    0x0FF000FF,
    0x00000000,
    0x00000000,
    0x00000000,


    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0xFFFFFFFF,
    0x00000000,


    0x00000000,
    0x000FF000,
    0x00FFFF00,
    0x0FFFFFF0,
    0x0FFFFFF0,
    0x00FFFF00,
    0x000FF000,
    0x00000000,


    0x00000000,
    0x00000000,
    0x00FFFF00,
    0x00000FF0,
    0x00FFFFF0,
    0x0FF00FF0,
    0x00FFFFF0,
    0x00000000,


    0x00000000,
    0x0FF00000,
    0x0FF00000,
    0x0FFFFF00,
    0x0FF00FF0,
    0x0FF00FF0,
    0x0FFFFF00,
    0x00000000,


    0x00000000,
    0x00000000,
    0x00FFFF00,
    0x0FF00000,
    0x0FF00000,
    0x0FF00000,
    0x00FFFF00,
    0x00000000,


    0x00000000,
    0x00000FF0,
    0x00000FF0,
    0x00FFFFF0,
    0x0FF00FF0,
    0x0FF00FF0,
    0x00FFFFF0,
    0x00000000,


    0x00000000,
    0x00000000,
    0x00FFFF00,
    0x0FF00FF0,
    0x0FFFFFF0,
    0x0FF00000,
    0x00FFFF00,
    0x00000000,


    0x00000000,
    0x0000FFF0,
    0x000FF000,
    0x00FFFFF0,
    0x000FF000,
    0x000FF000,
    0x000FF000,
    0x00000000,


    0x00000000,
    0x00000000,
    0x00FFFFF0,
    0x0FF00FF0,
    0x0FF00FF0,
    0x00FFFFF0,
    0x00000FF0,
    0x0FFFFF00,


    0x00000000,
    0x0FF00000,
    0x0FF00000,
    0x0FFFFF00,
    0x0FF00FF0,
    0x0FF00FF0,
    0x0FF00FF0,
    0x00000000,


    0x00000000,
    0x000FF000,
    0x00000000,
    0x00FFF000,
    0x000FF000,
    0x000FF000,
    0x00FFFF00,
    0x00000000,


    0x00000000,
    0x00000FF0,
    0x00000000,
    0x00000FF0,
    0x00000FF0,
    0x00000FF0,
    0x00000FF0,
    0x00FFFF00,


    0x00000000,
    0x0FF00000,
    0x0FF00000,
    0x0FF0FF00,
    0x0FFFF000,
    0x0FF0FF00,
    0x0FF00FF0,
    0x00000000,


    0x00000000,
    0x00FFF000,
    0x000FF000,
    0x000FF000,
    0x000FF000,
    0x000FF000,
    0x00FFFF00,
    0x00000000,


    0x00000000,
    0x00000000,
    0x0FF00FF0,
    0x0FFFFFFF,
    0x0FFFFFFF,
    0x0FF0F0FF,
    0x0FF000FF,
    0x00000000,


    0x00000000,
    0x00000000,
    0x0FFFFF00,
    0x0FF00FF0,
    0x0FF00FF0,
    0x0FF00FF0,
    0x0FF00FF0,
    0x00000000,


    0x00000000,
    0x00000000,
    0x00FFFF00,
    0x0FF00FF0,
    0x0FF00FF0,
    0x0FF00FF0,
    0x00FFFF00,
    0x00000000,


    0x00000000,
    0x00000000,
    0x0FFFFF00,
    0x0FF00FF0,
    0x0FF00FF0,
    0x0FFFFF00,
    0x0FF00000,
    0x0FF00000,


    0x00000000,
    0x00000000,
    0x00FFFFF0,
    0x0FF00FF0,
    0x0FF00FF0,
    0x00FFFFF0,
    0x00000FF0,
    0x00000FF0,


    0x00000000,
    0x00000000,
    0x0FFFFF00,
    0x0FF00FF0,
    0x0FF00000,
    0x0FF00000,
    0x0FF00000,
    0x00000000,


    0x00000000,
    0x00000000,
    0x00FFFFF0,
    0x0FF00000,
    0x00FFFF00,
    0x00000FF0,
    0x0FFFFF00,
    0x00000000,


    0x00000000,
    0x000FF000,
    0x0FFFFFF0,
    0x000FF000,
    0x000FF000,
    0x000FF000,
    0x0000FFF0,
    0x00000000,


    0x00000000,
    0x00000000,
    0x0FF00FF0,
    0x0FF00FF0,
    0x0FF00FF0,
    0x0FF00FF0,
    0x00FFFFF0,
    0x00000000,


    0x00000000,
    0x00000000,
    0x0FF00FF0,
    0x0FF00FF0,
    0x0FF00FF0,
    0x00FFFF00,
    0x000FF000,
    0x00000000,


    0x00000000,
    0x00000000,
    0x0FF000FF,
    0x0FF0F0FF,
    0x0FFFFFFF,
    0x00FFFFF0,
    0x00FF0FF0,
    0x00000000,


    0x00000000,
    0x00000000,
    0x0FF00FF0,
    0x00FFFF00,
    0x000FF000,
    0x00FFFF00,
    0x0FF00FF0,
    0x00000000,


    0x00000000,
    0x00000000,
    0x0FF00FF0,
    0x0FF00FF0,
    0x0FF00FF0,
    0x00FFFFF0,
    0x0000FF00,
    0x0FFFF000,


    0x00000000,
    0x00000000,
    0x0FFFFFF0,
    0x0000FF00,
    0x000FF000,
    0x00FF0000,
    0x0FFFFFF0,
    0x00000000,


    0x00000000,
    0x000FF000,
    0x00FFFF00,
    0x0FFFFFF0,
    0x0FFFFFF0,
    0x000FF000,
    0x00FFFF00,
    0x00000000,


    0x000FF000,
    0x000FF000,
    0x000FF000,
    0x000FF000,
    0x000FF000,
    0x000FF000,
    0x000FF000,
    0x000FF000,


    0x00000000,
    0x0FFFFFF0,
    0x0FFFF000,
    0x0FFFFF00,
    0x0FF0FFF0,
    0x0FF00FF0,
    0x00000FF0,
    0x00000000,


    0x0000F000,
    0x000FF000,
    0x00FFF000,
    0x0FFFF000,
    0x00FFF000,
    0x000FF000,
    0x0000F000,
    0x00000000,


    0x000F0000,
    0x000FF000,
    0x000FFF00,
    0x000FFFF0,
    0x000FFF00,
    0x000FF000,
    0x000F0000,
    0x00000000
};

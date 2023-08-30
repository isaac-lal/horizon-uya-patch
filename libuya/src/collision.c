#include <tamtypes.h>
#include "interop.h"

VariableAddress_t vaCollLineFix = {
#if UYA_PAL
    .Lobby = 0,
    .Bakisi = 0x0044d138,
    .Hoven = 0x0044ecb8,
    .OutpostX12 = 0x00445ab8,
    .KorgonOutpost = 0x00443678,
    .Metropolis = 0x004429b8,
    .BlackwaterCity = 0x004401b8,
    .CommandCenter = 0x00440e38,
    .BlackwaterDocks = 0x004436b8,
    .AquatosSewers = 0x004429b8,
    .MarcadiaPalace = 0x00442338,
#else
    .Lobby = 0,
    .Bakisi = 0x0044c290,
    .Hoven = 0x0044dd50,
    .OutpostX12 = 0x00444b90,
    .KorgonOutpost = 0x004427d0,
    .Metropolis = 0x00441b10,
    .BlackwaterCity = 0x0043f290,
    .CommandCenter = 0x004400d0,
    .BlackwaterDocks = 0x00442910,
    .AquatosSewers = 0x00441c50,
    .MarcadiaPalace = 0x00441590,
#endif
};
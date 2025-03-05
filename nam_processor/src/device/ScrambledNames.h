/*
 * Copyright (c) 2022 Braingines SA - All Rights Reserved
 * Unauthorized copying of this file is strictly prohibited
 * Proprietary and confidential
 */

#ifndef NAM_SCRAMBLED_NAMES_H
#define NAM_SCRAMBLED_NAMES_H

// The entries in GPUFUNCTIONS_SCRAMBLED are used to replace the processor device function names
// during compilation to avoid name conflicts between processors.
// New processors must always define their own unique names in this list.
// clang-format off
#define GPUFUNCTIONS_SCRAMBLED \
IoeEtdwGpWSpjj45l1Kr, \
wHHWOLSpP5g7S7EvWroi, \
kzzneAcHH1Bl4QEc7dJw, \
rTMQA9B3IvKk4DF6eIcO, \
j4fI3VxfeH20aghTDRkO, \
ncRwQ04NhG50iBzb9OaW, \
G889j9vTFfKZeGZnIR3K, \
Mraurk3oH24dmG0k5Rju, \
l9XeZaBGuA7EJBiKTpf4, \
nMN9HlxQyroT2K0L0J7m, \
Lr3PGc10AozQa83KzFY0, \
NQNhFlZLXb2vQv2TbNt6, \
mnpJTOlGt9cCNeff5UOz, \
i9WhRjWaXPbaGduCrH1R, \
jnGPE3wBFOnTSDn7oL20, \
QVU6BfQN2iaK3DzSuidU, \
vlpUKCXBwKXdB8fG21TH, \
y0R7iibwoYrkAAFEf7On, \
fI0uxBTPyCxWSqkAlgyU, \
TcIwt0G2wGXg38BMzE8B, \
ek1v8pJIAa6XU7WPGGjh, \
DxmLiWLLMN7E1YyGogeq, \
vKsyFNVuU97Ar0p03Crh, \
nynMfHXe1XWfEH8hBmOy, \
s042VDIQZKHeqiTm5Qhm, \
EkOEVdsljrLRMjAq7wZU, \
VHdRHz7XYcv8dDG6X4yE, \
NAtq581kvkBeFt4hZJ7F, \
qcDmflzCmRVt0sdGXLJU, \
uxmCGyCQ24NQy3ZM0pG3, \
DylBsAUt1xIx2GxZ5tWN, \
C8Lx3zbyJJyDkNYM4pBA, \
lKoPKePlOgq1axApDnu2, \
lup538mLYPx29uyvz3W4, \
Fiww5Sj4eHcYVClK8Ilr, \
ClkFkIorVCYZSpWVWUTI, \
l9gbqEFpEpunfU0047LY, \
YRpd6AS6cRFN45BYCjXN, \
QrqCHdFxWb45c5UoPyn5, \
xQhdKQsStHYkqI2TqYBX, \
HAqMtQK6329NFY1qxKOd, \
beS2j9neBYrA9kD2hbMB, \
tinAgHTLSeeHyOZY9W4i, \
oF71G3QtyqupalDqBk3Y, \
PNUQ1do7pQ1XeOZ1Fn7J, \
z8E9gJI0gOqSCFp00qb4, \
ItCsHa2AOPxucSuYXSpI, \
aXL9TNAHzgximTKyL8bL, \
JC5WXMdAiMpGU6JV9kyp, \
kgs5avHCPMUgi7glrDH0, \
ilS6PPPR5EQ8WmJN2ZIl, \
LGUXqHa82E6rG6RE1mTB
// clang-format on

#if !defined(GPU_AUDIO_MAC)
#include <cstdint>
#endif

// DO NOT REMOVE! Contains macros for device function name substitution.
#include <scheduler/common_macros.h>

#endif // NAM_SCRAMBLED_NAMES_H

/* Copyright (C) 2017 Dániel Bátyai dbatyai@inf.u-szeged.hu
 * Copyright (C) 2017 Szilard Ledan szledan@gmail.com
 *
 * See the root LICENSE.
 *
 */

#ifndef BETU_VETO_H
#define BETU_VETO_H

#include <stdbool.h>

typedef struct VetoCtx {
    int id;
} VetoCtx;

bool betuveto(VetoCtx *ctx, char *txt);

#endif /* BETU_VETO_H */

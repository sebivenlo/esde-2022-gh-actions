/*
 * Copyright (c) 2022 - for information on the respective copyright owner
 * see the NOTICE file and/or the repository https://github.com/grevend/shamirs-secret-sharing.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "secret_sharing.h"
#include "bridge.h"

char *shares__bridge__auto(size_t secretc, char *secretv, size_t n, size_t k) {
    return shares(secretc, secretv, _rand_bytes, n, k);
}

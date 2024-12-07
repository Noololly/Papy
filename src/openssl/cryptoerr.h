/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2021 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#ifndef OPENSSL_CRYPTOERR_H
# define OPENSSL_CRYPTOERR_H
# pragma once

#include "opensslconf.h"
#include "symhacks.h"
#include "cryptoerr_legacy.h"



/*
 * CRYPTO reason codes.
 */
# define CRYPTO_R_BAD_ALGORITHM_NAME                      117
# define CRYPTO_R_CONFLICTING_NAMES                       118
# define CRYPTO_R_HEX_STRING_TOO_SHORT                    121
# define CRYPTO_R_ILLEGAL_HEX_DIGIT                       102
# define CRYPTO_R_INSUFFICIENT_DATA_SPACE                 106
# define CRYPTO_R_INSUFFICIENT_PARAM_SIZE                 107
# define CRYPTO_R_INSUFFICIENT_SECURE_DATA_SPACE          108
# define CRYPTO_R_INVALID_NEGATIVE_VALUE                  122
# define CRYPTO_R_INVALID_NULL_ARGUMENT                   109
# define CRYPTO_R_INVALID_OSSL_PARAM_TYPE                 110
# define CRYPTO_R_ODD_NUMBER_OF_DIGITS                    103
# define CRYPTO_R_PROVIDER_ALREADY_EXISTS                 104
# define CRYPTO_R_PROVIDER_SECTION_ERROR                  105
# define CRYPTO_R_RANDOM_SECTION_ERROR                    119
# define CRYPTO_R_SECURE_MALLOC_FAILURE                   111
# define CRYPTO_R_STRING_TOO_LONG                         112
# define CRYPTO_R_TOO_MANY_BYTES                          113
# define CRYPTO_R_TOO_MANY_RECORDS                        114
# define CRYPTO_R_TOO_SMALL_BUFFER                        116
# define CRYPTO_R_UNKNOWN_NAME_IN_RANDOM_SECTION          120
# define CRYPTO_R_ZERO_LENGTH_NUMBER                      115

#endif

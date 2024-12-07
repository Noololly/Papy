/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2021 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#ifndef OPENSSL_STOREERR_H
# define OPENSSL_STOREERR_H
# pragma once

#include "opensslconf.h"
#include "symhacks.h"
#include "cryptoerr_legacy.h"



/*
 * OSSL_STORE reason codes.
 */
# define OSSL_STORE_R_AMBIGUOUS_CONTENT_TYPE              107
# define OSSL_STORE_R_BAD_PASSWORD_READ                   115
# define OSSL_STORE_R_ERROR_VERIFYING_PKCS12_MAC          113
# define OSSL_STORE_R_FINGERPRINT_SIZE_DOES_NOT_MATCH_DIGEST 121
# define OSSL_STORE_R_INVALID_SCHEME                      106
# define OSSL_STORE_R_IS_NOT_A                            112
# define OSSL_STORE_R_LOADER_INCOMPLETE                   116
# define OSSL_STORE_R_LOADING_STARTED                     117
# define OSSL_STORE_R_NOT_A_CERTIFICATE                   100
# define OSSL_STORE_R_NOT_A_CRL                           101
# define OSSL_STORE_R_NOT_A_NAME                          103
# define OSSL_STORE_R_NOT_A_PRIVATE_KEY                   102
# define OSSL_STORE_R_NOT_A_PUBLIC_KEY                    122
# define OSSL_STORE_R_NOT_PARAMETERS                      104
# define OSSL_STORE_R_NO_LOADERS_FOUND                    123
# define OSSL_STORE_R_PASSPHRASE_CALLBACK_ERROR           114
# define OSSL_STORE_R_PATH_MUST_BE_ABSOLUTE               108
# define OSSL_STORE_R_SEARCH_ONLY_SUPPORTED_FOR_DIRECTORIES 119
# define OSSL_STORE_R_UI_PROCESS_INTERRUPTED_OR_CANCELLED 109
# define OSSL_STORE_R_UNREGISTERED_SCHEME                 105
# define OSSL_STORE_R_UNSUPPORTED_CONTENT_TYPE            110
# define OSSL_STORE_R_UNSUPPORTED_OPERATION               118
# define OSSL_STORE_R_UNSUPPORTED_SEARCH_TYPE             120
# define OSSL_STORE_R_URI_AUTHORITY_UNSUPPORTED           111

#endif

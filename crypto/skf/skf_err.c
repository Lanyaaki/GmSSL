/* crypto/skf/skf_err.c */
/* ====================================================================
 * Copyright (c) 1999-2016 The OpenSSL Project.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. All advertising materials mentioning features or use of this
 *    software must display the following acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit. (http://www.OpenSSL.org/)"
 *
 * 4. The names "OpenSSL Toolkit" and "OpenSSL Project" must not be used to
 *    endorse or promote products derived from this software without
 *    prior written permission. For written permission, please contact
 *    openssl-core@OpenSSL.org.
 *
 * 5. Products derived from this software may not be called "OpenSSL"
 *    nor may "OpenSSL" appear in their names without prior written
 *    permission of the OpenSSL Project.
 *
 * 6. Redistributions of any form whatsoever must retain the following
 *    acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit (http://www.OpenSSL.org/)"
 *
 * THIS SOFTWARE IS PROVIDED BY THE OpenSSL PROJECT ``AS IS'' AND ANY
 * EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE OpenSSL PROJECT OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 * ====================================================================
 *
 * This product includes cryptographic software written by Eric Young
 * (eay@cryptsoft.com).  This product includes software written by Tim
 * Hudson (tjh@cryptsoft.com).
 *
 */

/*
 * NOTE: this file was auto generated by the mkerr.pl script: any changes
 * made to it will be overwritten when the script next updates this file,
 * only reason strings will be preserved.
 */

#include <stdio.h>
#include <openssl/err.h>
#include <openssl/skf_ex.h>

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR

# define ERR_FUNC(func) ERR_PACK(ERR_LIB_SKF,func,0)
# define ERR_REASON(reason) ERR_PACK(ERR_LIB_SKF,0,reason)

static ERR_STRING_DATA SKF_str_functs[] = {
    {ERR_FUNC(SKF_F_ECDSA_SIG_GET_ECCSIGNATUREBLOB),
     "ECDSA_SIG_get_ECCSIGNATUREBLOB"},
    {ERR_FUNC(SKF_F_ECDSA_SIG_NEW_FROM_ECCSIGNATUREBLOB),
     "ECDSA_SIG_new_from_ECCSIGNATUREBLOB"},
    {ERR_FUNC(SKF_F_ECDSA_SIG_SET_ECCSIGNATUREBLOB),
     "ECDSA_SIG_set_ECCSIGNATUREBLOB"},
    {ERR_FUNC(SKF_F_EC_KEY_GET_ECCPRIVATEKEYBLOB),
     "EC_KEY_get_ECCPRIVATEKEYBLOB"},
    {ERR_FUNC(SKF_F_EC_KEY_GET_ECCPUBLICKEYBLOB),
     "EC_KEY_get_ECCPUBLICKEYBLOB"},
    {ERR_FUNC(SKF_F_EC_KEY_NEW_FROM_ECCPRIVATEKEYBLOB),
     "EC_KEY_new_from_ECCPRIVATEKEYBLOB"},
    {ERR_FUNC(SKF_F_EC_KEY_NEW_FROM_ECCPUBLICKEYBLOB),
     "EC_KEY_new_from_ECCPUBLICKEYBLOB"},
    {ERR_FUNC(SKF_F_EC_KEY_SET_ECCPRIVATEKEYBLOB),
     "EC_KEY_set_ECCPRIVATEKEYBLOB"},
    {ERR_FUNC(SKF_F_EC_KEY_SET_ECCPUBLICKEYBLOB),
     "EC_KEY_set_ECCPUBLICKEYBLOB"},
    {ERR_FUNC(SKF_F_RSA_GET_RSAPRIVATEKEYBLOB), "RSA_get_RSAPRIVATEKEYBLOB"},
    {ERR_FUNC(SKF_F_RSA_GET_RSAPUBLICKEYBLOB), "RSA_get_RSAPUBLICKEYBLOB"},
    {ERR_FUNC(SKF_F_RSA_NEW_FROM_RSAPRIVATEKEYBLOB),
     "RSA_new_from_RSAPRIVATEKEYBLOB"},
    {ERR_FUNC(SKF_F_RSA_NEW_FROM_RSAPUBLICKEYBLOB),
     "RSA_new_from_RSAPUBLICKEYBLOB"},
    {ERR_FUNC(SKF_F_RSA_SET_RSAPRIVATEKEYBLOB), "RSA_set_RSAPRIVATEKEYBLOB"},
    {ERR_FUNC(SKF_F_RSA_SET_RSAPUBLICKEYBLOB), "RSA_set_RSAPUBLICKEYBLOB"},
    {ERR_FUNC(SKF_F_SKF_CHANGEDEVAUTHKEY), "SKF_CHANGEDEVAUTHKEY"},
    {ERR_FUNC(SKF_F_SKF_CHANGEPIN), "SKF_CHANGEPIN"},
    {ERR_FUNC(SKF_F_SKF_CLEARSECURESTATE), "SKF_CLEARSECURESTATE"},
    {ERR_FUNC(SKF_F_SKF_CLOSEHANDLE), "SKF_CLOSEHANDLE"},
    {ERR_FUNC(SKF_F_SKF_CONNECTDEV), "SKF_CONNECTDEV"},
    {ERR_FUNC(SKF_F_SKF_CREATEAPPLICATION), "SKF_CREATEAPPLICATION"},
    {ERR_FUNC(SKF_F_SKF_CREATEFILE), "SKF_CREATEFILE"},
    {ERR_FUNC(SKF_F_SKF_DECRYPT), "SKF_DECRYPT"},
    {ERR_FUNC(SKF_F_SKF_DECRYPTFINAL), "SKF_DECRYPTFINAL"},
    {ERR_FUNC(SKF_F_SKF_DECRYPTINIT), "SKF_DECRYPTINIT"},
    {ERR_FUNC(SKF_F_SKF_DECRYPTUPDATE), "SKF_DECRYPTUPDATE"},
    {ERR_FUNC(SKF_F_SKF_DELETEAPPLICATION), "SKF_DELETEAPPLICATION"},
    {ERR_FUNC(SKF_F_SKF_DELETEFILE), "SKF_DELETEFILE"},
    {ERR_FUNC(SKF_F_SKF_DEVAUTH), "SKF_DEVAUTH"},
    {ERR_FUNC(SKF_F_SKF_DIGEST), "SKF_DIGEST"},
    {ERR_FUNC(SKF_F_SKF_DIGESTFINAL), "SKF_DIGESTFINAL"},
    {ERR_FUNC(SKF_F_SKF_DIGESTINIT), "SKF_DIGESTINIT"},
    {ERR_FUNC(SKF_F_SKF_DIGESTUPDATE), "SKF_DIGESTUPDATE"},
    {ERR_FUNC(SKF_F_SKF_DISCONNECTDEV), "SKF_DISCONNECTDEV"},
    {ERR_FUNC(SKF_F_SKF_ENCRYPT), "SKF_ENCRYPT"},
    {ERR_FUNC(SKF_F_SKF_ENCRYPTFINAL), "SKF_ENCRYPTFINAL"},
    {ERR_FUNC(SKF_F_SKF_ENCRYPTINIT), "SKF_ENCRYPTINIT"},
    {ERR_FUNC(SKF_F_SKF_ENCRYPTUPDATE), "SKF_ENCRYPTUPDATE"},
    {ERR_FUNC(SKF_F_SKF_ENUMAPPLICATION), "SKF_ENUMAPPLICATION"},
    {ERR_FUNC(SKF_F_SKF_ENUMDEV), "SKF_ENUMDEV"},
    {ERR_FUNC(SKF_F_SKF_ENUMFILES), "SKF_ENUMFILES"},
    {ERR_FUNC(SKF_F_SKF_EXTECCDECRYPT), "SKF_EXTECCDECRYPT"},
    {ERR_FUNC(SKF_F_SKF_EXTECCENCRYPT), "SKF_EXTECCENCRYPT"},
    {ERR_FUNC(SKF_F_SKF_EXTECCSIGN), "SKF_EXTECCSIGN"},
    {ERR_FUNC(SKF_F_SKF_EXTECCVERIFY), "SKF_EXTECCVERIFY"},
    {ERR_FUNC(SKF_F_SKF_EXTRSAPRIKEYOPERATION), "SKF_EXTRSAPRIKEYOPERATION"},
    {ERR_FUNC(SKF_F_SKF_EXTRSAPUBKEYOPERATION), "SKF_EXTRSAPUBKEYOPERATION"},
    {ERR_FUNC(SKF_F_SKF_GENEXTECCKEYPAIR), "SKF_GENEXTECCKEYPAIR"},
    {ERR_FUNC(SKF_F_SKF_GENEXTRSAKEY), "SKF_GENEXTRSAKEY"},
    {ERR_FUNC(SKF_F_SKF_GENRANDOM), "SKF_GENRANDOM"},
    {ERR_FUNC(SKF_F_SKF_GETDEVINFO), "SKF_GETDEVINFO"},
    {ERR_FUNC(SKF_F_SKF_GETDEVSTATE), "SKF_GETDEVSTATE"},
    {ERR_FUNC(SKF_F_SKF_GETFILEINFO), "SKF_GETFILEINFO"},
    {ERR_FUNC(SKF_F_SKF_GETPININFO), "SKF_GETPININFO"},
    {ERR_FUNC(SKF_F_SKF_HANDLE_GET_CBCMAC_CTX), "SKF_HANDLE_GET_CBCMAC_CTX"},
    {ERR_FUNC(SKF_F_SKF_HANDLE_GET_CIPHER), "SKF_HANDLE_GET_CIPHER"},
    {ERR_FUNC(SKF_F_SKF_HANDLE_GET_CIPHER_CTX), "SKF_HANDLE_GET_CIPHER_CTX"},
    {ERR_FUNC(SKF_F_SKF_HANDLE_GET_KEY), "SKF_HANDLE_GET_KEY"},
    {ERR_FUNC(SKF_F_SKF_HANDLE_GET_MD_CTX), "SKF_HANDLE_GET_MD_CTX"},
    {ERR_FUNC(SKF_F_SKF_LOCKDEV), "SKF_LOCKDEV"},
    {ERR_FUNC(SKF_F_SKF_MAC), "SKF_MAC"},
    {ERR_FUNC(SKF_F_SKF_MACFINAL), "SKF_MACFINAL"},
    {ERR_FUNC(SKF_F_SKF_MACINIT), "SKF_MACINIT"},
    {ERR_FUNC(SKF_F_SKF_MACUPDATE), "SKF_MACUPDATE"},
    {ERR_FUNC(SKF_F_SKF_READFILE), "SKF_READFILE"},
    {ERR_FUNC(SKF_F_SKF_SETLABEL), "SKF_SETLABEL"},
    {ERR_FUNC(SKF_F_SKF_SETSYMMKEY), "SKF_SETSYMMKEY"},
    {ERR_FUNC(SKF_F_SKF_TRANSMIT), "SKF_TRANSMIT"},
    {ERR_FUNC(SKF_F_SKF_UNBLOCKPIN), "SKF_UNBLOCKPIN"},
    {ERR_FUNC(SKF_F_SKF_UNLOCKDEV), "SKF_UNLOCKDEV"},
    {ERR_FUNC(SKF_F_SKF_VERIFYPIN), "SKF_VERIFYPIN"},
    {ERR_FUNC(SKF_F_SKF_WRITEFILE), "SKF_WRITEFILE"},
    {ERR_FUNC(SKF_F_SM2_CIPHERTEXT_VALUE_GET_ECCCIPHERBLOB),
     "SM2_CIPHERTEXT_VALUE_get_ECCCIPHERBLOB"},
    {ERR_FUNC(SKF_F_SM2_CIPHERTEXT_VALUE_NEW_FROM_ECCCIPHERBLOB),
     "SM2_CIPHERTEXT_VALUE_new_from_ECCCIPHERBLOB"},
    {ERR_FUNC(SKF_F_SM2_CIPHERTEXT_VALUE_SET_ECCCIPHERBLOB),
     "SM2_CIPHERTEXT_VALUE_set_ECCCIPHERBLOB"},
    {0, NULL}
};

static ERR_STRING_DATA SKF_str_reasons[] = {
    {ERR_REASON(SKF_R_ALGOR_NOT_SUPPORTED), "algor not supported"},
    {ERR_REASON(SKF_R_BAD_ARGUMENT), "bad argument"},
    {ERR_REASON(SKF_R_BUFFER_TOO_SMALL), "buffer too small"},
    {ERR_REASON(SKF_R_CMAC_LIB), "cmac lib"},
    {ERR_REASON(SKF_R_CTX_NOT_CREATED), "ctx not created"},
    {ERR_REASON(SKF_R_DECODE_EC_PRIVATE_KEY_FAILED),
     "decode ec private key failed"},
    {ERR_REASON(SKF_R_DECODE_EC_PUBLIC_KEY_FAILED),
     "decode ec public key failed"},
    {ERR_REASON(SKF_R_DECRYPT_FAILED), "decrypt failed"},
    {ERR_REASON(SKF_R_ENCODE_CIPHERTEXT_FAILED), "encode ciphertext failed"},
    {ERR_REASON(SKF_R_ENCODE_FAILED), "encode failed"},
    {ERR_REASON(SKF_R_ENCODE_RSA_PUBLIC_KEY_FAILED),
     "encode rsa public key failed"},
    {ERR_REASON(SKF_R_ENCODE_SIGNATURE_FAILED), "encode signature failed"},
    {ERR_REASON(SKF_R_ENCRYPT_FAILED), "encrypt failed"},
    {ERR_REASON(SKF_R_FAIL), "fail"},
    {ERR_REASON(SKF_R_FREE_HANDLE_FAILED), "free handle failed"},
    {ERR_REASON(SKF_R_GEN_RSA_FAILED), "gen rsa failed"},
    {ERR_REASON(SKF_R_GET_PRIVATE_KEY_FAILED), "get private key failed"},
    {ERR_REASON(SKF_R_GET_PUBLIC_KEY_FAILED), "get public key failed"},
    {ERR_REASON(SKF_R_INVALID_ALGID), "invalid algid"},
    {ERR_REASON(SKF_R_INVALID_ALGOR), "invalid algor"},
    {ERR_REASON(SKF_R_INVALID_APP_HANDLE), "invalid app handle"},
    {ERR_REASON(SKF_R_INVALID_ARGUMENTS), "invalid arguments"},
    {ERR_REASON(SKF_R_INVALID_BIGNUM_LENGTH), "invalid bignum length"},
    {ERR_REASON(SKF_R_INVALID_BLOB), "invalid blob"},
    {ERR_REASON(SKF_R_INVALID_CIPHERTEXT), "invalid ciphertext"},
    {ERR_REASON(SKF_R_INVALID_CIPHERTEXT_LENGTH), "invalid ciphertext length"},
    {ERR_REASON(SKF_R_INVALID_CIPHERTEXT_MAC), "invalid ciphertext mac"},
    {ERR_REASON(SKF_R_INVALID_CIPHERTEXT_POINT), "invalid ciphertext point"},
    {ERR_REASON(SKF_R_INVALID_CIPHER_CTX_HANDLE), "invalid cipher ctx handle"},
    {ERR_REASON(SKF_R_INVALID_DEV_HANDLE), "invalid dev handle"},
    {ERR_REASON(SKF_R_INVALID_DIGEST_LENGTH), "invalid digest length"},
    {ERR_REASON(SKF_R_INVALID_ECC_PRIVATE_KEY), "invalid ecc private key"},
    {ERR_REASON(SKF_R_INVALID_ECC_PUBLIC_KEY), "invalid ecc public key"},
    {ERR_REASON(SKF_R_INVALID_EC_KEY), "invalid ec key"},
    {ERR_REASON(SKF_R_INVALID_EC_PRIVATE_KEY), "invalid ec private key"},
    {ERR_REASON(SKF_R_INVALID_EC_PUBLIC_KEY), "invalid ec public key"},
    {ERR_REASON(SKF_R_INVALID_FEED_BIT_LENGTH), "invalid feed bit length"},
    {ERR_REASON(SKF_R_INVALID_HANDLE), "invalid handle"},
    {ERR_REASON(SKF_R_INVALID_HANDLE_ALGOR), "invalid handle algor"},
    {ERR_REASON(SKF_R_INVALID_HANDLE_MAGIC), "invalid handle magic"},
    {ERR_REASON(SKF_R_INVALID_HANDLE_TYPE), "invalid handle type"},
    {ERR_REASON(SKF_R_INVALID_HASH_HANDLE), "invalid hash handle"},
    {ERR_REASON(SKF_R_INVALID_ID_LENGTH), "invalid id length"},
    {ERR_REASON(SKF_R_INVALID_INPUT_LENGTH), "invalid input length"},
    {ERR_REASON(SKF_R_INVALID_IV_LENGTH), "invalid iv length"},
    {ERR_REASON(SKF_R_INVALID_KEY_HANDLE), "invalid key handle"},
    {ERR_REASON(SKF_R_INVALID_KEY_LENGTH), "invalid key length"},
    {ERR_REASON(SKF_R_INVALID_MAC_HANDLE), "invalid mac handle"},
    {ERR_REASON(SKF_R_INVALID_PLAINTEXT_LENGTH), "invalid plaintext length"},
    {ERR_REASON(SKF_R_INVALID_PRIVATE_KEY), "invalid private key"},
    {ERR_REASON(SKF_R_INVALID_PUBLIC_KEY), "invalid public key"},
    {ERR_REASON(SKF_R_INVALID_RANDOM_LENGTH), "invalid random length"},
    {ERR_REASON(SKF_R_INVALID_RSA_KEY_LENGTH), "invalid rsa key length"},
    {ERR_REASON(SKF_R_INVALID_RSA_PRIVATE_KEY), "invalid rsa private key"},
    {ERR_REASON(SKF_R_INVALID_RSA_PUBLIC_KEY), "invalid rsa public key"},
    {ERR_REASON(SKF_R_INVALID_SIGNATURE), "invalid signature"},
    {ERR_REASON(SKF_R_MALLOC_FAILED), "malloc failed"},
    {ERR_REASON(SKF_R_NO_PUBLIC_KEY), "no public key"},
    {ERR_REASON(SKF_R_NULL_ARGUMENT), "null argument"},
    {ERR_REASON(SKF_R_SAR_FAIL), "sar fail"},
    {ERR_REASON(SKF_R_SAR_OK), "sar ok"},
    {ERR_REASON(SKF_R_SET_CIPHER_CTX_FAILED), "set cipher ctx failed"},
    {ERR_REASON(SKF_R_SIGN_FAILED), "sign failed"},
    {ERR_REASON(SKF_R_UNKNOWN_ALGOR), "unknown algor"},
    {ERR_REASON(SKF_R_UNKNOWN_APP), "unknown app"},
    {ERR_REASON(SKF_R_VERIFY_NOT_PASS), "verify not pass"},
    {0, NULL}
};

#endif

void ERR_load_SKF_strings(void)
{
#ifndef OPENSSL_NO_ERR

    if (ERR_func_error_string(SKF_str_functs[0].error) == NULL) {
        ERR_load_strings(0, SKF_str_functs);
        ERR_load_strings(0, SKF_str_reasons);
    }
#endif
}

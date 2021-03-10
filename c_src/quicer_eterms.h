/*--------------------------------------------------------------------
Copyright (c) 2021 EMQ Technologies Co., Ltd. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
-------------------------------------------------------------------*/

#ifndef __QUICER_ETERMS_H_
#define __QUICER_ETERMS_H_
#include <erl_nif.h>

// quicer internal 'errors'
extern ERL_NIF_TERM ATOM_OK;
extern ERL_NIF_TERM ATOM_ERROR;
extern ERL_NIF_TERM ATOM_REG_FAILED;
extern ERL_NIF_TERM ATOM_OPEN_FAILED;
extern ERL_NIF_TERM ATOM_CTX_INIT_FAILED;
extern ERL_NIF_TERM ATOM_BAD_PID;
extern ERL_NIF_TERM ATOM_CONFIG_ERROR;
extern ERL_NIF_TERM ATOM_CERT_ERROR;
extern ERL_NIF_TERM ATOM_BAD_MON;
extern ERL_NIF_TERM ATOM_LISTENER_OPEN_ERROR;
extern ERL_NIF_TERM ATOM_LISTENER_START_ERROR;
extern ERL_NIF_TERM ATOM_BADARG;
extern ERL_NIF_TERM ATOM_CONN_OPEN_ERROR;
extern ERL_NIF_TERM ATOM_CONN_START_ERROR;
extern ERL_NIF_TERM ATOM_STREAM_OPEN_ERROR;
extern ERL_NIF_TERM ATOM_STREAM_START_ERROR;
extern ERL_NIF_TERM ATOM_STREAM_SEND_ERROR;
extern ERL_NIF_TERM ATOM_SOCKNAME_ERROR;
extern ERL_NIF_TERM ATOM_OWNER_DEAD;

// msquic_linux.h 'errors'
extern ERL_NIF_TERM ATOM_ERROR_NO_ERROR;
extern ERL_NIF_TERM ATOM_ERROR_CONTINUE;
extern ERL_NIF_TERM ATOM_ERROR_NOT_READY;
extern ERL_NIF_TERM ATOM_ERROR_NOT_ENOUGH_MEMORY;
extern ERL_NIF_TERM ATOM_ERROR_INVALID_STATE;
extern ERL_NIF_TERM ATOM_ERROR_INVALID_PARAMETER;
extern ERL_NIF_TERM ATOM_ERROR_NOT_SUPPORTED;
extern ERL_NIF_TERM ATOM_ERROR_NOT_FOUND;
extern ERL_NIF_TERM ATOM_ERROR_BUFFER_OVERFLOW;
extern ERL_NIF_TERM ATOM_ERROR_CONNECTION_REFUSED;
extern ERL_NIF_TERM ATOM_ERROR_OPERATION_ABORTED;
extern ERL_NIF_TERM ATOM_ERROR_HANDSHAKE_FAILURE;
extern ERL_NIF_TERM ATOM_ERROR_NETWORK_UNREACHABLE;
extern ERL_NIF_TERM ATOM_ERROR_CONNECTION_IDLE;
extern ERL_NIF_TERM ATOM_ERROR_INTERNAL_ERROR;
extern ERL_NIF_TERM ATOM_ERROR_PROTOCOL_ERROR;
extern ERL_NIF_TERM ATOM_ERROR_VER_NEG_ERROR;
extern ERL_NIF_TERM ATOM_ERROR_EPOLL_ERROR;
extern ERL_NIF_TERM ATOM_ERROR_DNS_RESOLUTION_ERROR;
extern ERL_NIF_TERM ATOM_ERROR_SOCKET_ERROR;
extern ERL_NIF_TERM ATOM_ERROR_SSL_ERROR;
extern ERL_NIF_TERM ATOM_ERROR_USER_CANCELED;
extern ERL_NIF_TERM ATOM_ERROR_ALPN_NEG_FAILURE;

// option keys
extern ERL_NIF_TERM ATOM_CERT;
extern ERL_NIF_TERM ATOM_KEY;

#define SUCCESS(Term) enif_make_tuple(env, 2, ATOM_OK, Term)
#define ERROR_TUPLE_2(Err) enif_make_tuple2(env, ATOM_ERROR, Err)
#define ERROR_TUPLE_3(Err1, Err2) enif_make_tuple3(env, ATOM_ERROR, Err1, Err2)

#define OK_TUPLE_2(Term) enif_make_tuple2(env, ATOM_OK, Term)

#define ETERM_INT(i) enif_make_int(env, i)

#define ETERM_UINT_64(i) enif_make_int(env, (uint64_t)i)

#endif // __QUICER_ETERMS_H_

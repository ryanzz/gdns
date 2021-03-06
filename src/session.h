#ifndef GDNS_SESSION_H
#define GDNS_SESSION_H

#include "common.h"

void session_setup(server_ctx_t * server_ctx, const struct sockaddr * client_addr, char * data, ssize_t len,
                   upstream_proxy_t * proxys, int proxy_count, int query_timeout);

#endif //GDNS_SESSION_H

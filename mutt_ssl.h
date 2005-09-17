/*
 * Copyright (C) 1999-2000 Tommi Komulainen <Tommi.Komulainen@iki.fi>
 * 
 *     This program is free software; you can redistribute it and/or modify
 *     it under the terms of the GNU General Public License as published by
 *     the Free Software Foundation; either version 2 of the License, or
 *     (at your option) any later version.
 * 
 *     This program is distributed in the hope that it will be useful,
 *     but WITHOUT ANY WARRANTY; without even the implied warranty of
 *     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *     GNU General Public License for more details.
 * 
 *     You should have received a copy of the GNU General Public License
 *     along with this program; if not, write to the Free Software
 *     Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02111, USA.
 */ 

#ifndef _MUTT_SSL_H_
#define _MUTT_SSL_H_ 1

#include "mutt_socket.h"

#ifdef USE_SSL
int mutt_ssl_starttls (CONNECTION* conn);

extern int ssl_socket_setup (CONNECTION *conn);
#endif
#ifdef USE_GNUTLS
int mutt_gnutls_starttls (CONNECTION* conn);

extern int mutt_gnutls_socket_setup (CONNECTION *conn);
#endif
#endif /* _MUTT_SSL_H_ */

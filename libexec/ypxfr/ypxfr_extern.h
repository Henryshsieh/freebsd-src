/*
 * Copyright (c) 1995
 *	Bill Paul <wpaul@ctr.columbia.edu>.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by Bill Paul.
 * 4. Neither the name of the author nor the names of any co-contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY Bill Paul AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL Bill Paul OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	$Id: ypxfr_extern.h,v 1.3.2.1 1997/01/14 01:27:41 wpaul Exp $
 */
#include <sys/types.h>
#include <limits.h>
#include <paths.h>
#include <db.h>

extern HASHINFO	openinfo;
extern BTREEINFO openinfo_b;

#ifndef _PATH_YP
#define _PATH_YP "/var/yp/"
#endif

extern char	*yp_dir;
extern int	debug;
extern enum ypstat	yp_errno;
extern void	yp_error __P(( const char *, ... ));
extern int	_yp_check __P(( char ** ));
extern char	*ypxfrerr_string __P(( ypxfrstat ));
extern DB	*yp_open_db_rw __P(( const char *, const char *, const int));
extern void	yp_init_dbs __P(( void ));
extern int	yp_put_record __P(( DB *, DBT *, DBT * , int ));
extern int	yp_get_record __P(( const char *, const char *, const DBT *, DBT *, int ));
extern int	ypxfr_get_map __P(( char *, char *, char *, int (*)() ));
extern char	*ypxfr_get_master __P(( char *, char *, char *, const int ));
extern unsigned	long ypxfr_get_order __P(( char *, char *, char *, const int ));
extern int	ypxfr_match __P(( char *, char *, char *, char *, unsigned long ));
extern char	*ypxfxerr_string __P(( ypxfrstat ));
extern int	ypxfrd_get_map __P(( char  *, char *, char *, char *));
extern int	callrpc __P(( char *, int, int, int, xdrproc_t, char *, xdrproc_t, char *));

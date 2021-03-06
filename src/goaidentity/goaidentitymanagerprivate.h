/* -*- Mode: C; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 8 -*-
 *
 * Copyright (C) 2012 Red Hat, Inc.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.
 *
 * Authors: Ray Strode
 */

#ifndef __GOA_IDENTITY_MANAGER_PRIVATE_H__
#define __GOA_IDENTITY_MANAGER_PRIVATE_H__

#include <glib.h>
#include <glib-object.h>

#include "goaidentitymanager.h"

G_BEGIN_DECLS
void _goa_identity_manager_emit_identity_added (GoaIdentityManager *identity_manager,
                                                GoaIdentity        *identity);
void _goa_identity_manager_emit_identity_removed (GoaIdentityManager *identity_manager,
                                                  GoaIdentity        *identity);
void _goa_identity_manager_emit_identity_refreshed (GoaIdentityManager *identity_manager,
                                                    GoaIdentity        *identity);
void _goa_identity_manager_emit_identity_renamed (GoaIdentityManager *identity_manager,
                                                  GoaIdentity        *identity);

void _goa_identity_manager_emit_identity_expiring (GoaIdentityManager *identity_manager,
                                                   GoaIdentity        *identity);

void _goa_identity_manager_emit_identity_needs_renewal (GoaIdentityManager *identity_manager,
                                                        GoaIdentity        *identity);
void _goa_identity_manager_emit_identity_expired (GoaIdentityManager *identity_manager,
                                                  GoaIdentity        *identity);
G_END_DECLS
#endif /* __GOA_IDENTITY_MANAGER_PRIVATE_H__ */

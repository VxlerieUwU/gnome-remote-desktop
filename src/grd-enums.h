/*
 * Copyright (C) 2018 Red Hat Inc.
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
 */

#ifndef GRD_ENUMS_H
#define GRD_ENUMS_H

typedef enum
{
  GRD_RDP_SCREEN_SHARE_MODE_MIRROR_PRIMARY,
  GRD_RDP_SCREEN_SHARE_MODE_EXTEND,
} GrdRdpScreenShareMode;

typedef enum
{
  GRD_VNC_AUTH_METHOD_PROMPT,
  GRD_VNC_AUTH_METHOD_PASSWORD
} GrdVncAuthMethod;

typedef enum
{
  GRD_VNC_SCREEN_SHARE_MODE_MIRROR_PRIMARY,
  GRD_VNC_SCREEN_SHARE_MODE_EXTEND,
} GrdVncScreenShareMode;

typedef enum
{
  GRD_RUNTIME_MODE_SCREEN_SHARE,
  GRD_RUNTIME_MODE_HEADLESS,
} GrdRuntimeMode;

#endif /* GRD_ENUMS_H */

/*
 *  OpenVPN-GUI -- A Windows GUI for OpenVPN.
 *
 *  Copyright (C) 2009 Heiko Hund <heikoh@users.sf.net>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program (see the file COPYING included with this
 *  distribution); if not, write to the Free Software Foundation, Inc.,
 *  59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef LOCALIZATION_H
#define LOCALIZATION_H

PTSTR LoadLocalizedString(const UINT, ...);
int LoadLocalizedStringBuf(PTSTR, const int, const UINT, ...);
void ShowLocalizedMsg(const PTSTR, const UINT, ...);
HICON LoadLocalizedIcon(const UINT);
LPCDLGTEMPLATE LocalizedDialogResource(const UINT);
INT_PTR LocalizedDialogBoxParam(const UINT, DLGPROC, const LPARAM);
INT_PTR LocalizedDialogBox(const UINT, DLGPROC);
HWND CreateLocalizedDialog(const UINT, DLGPROC);

#endif
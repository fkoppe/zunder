/************************************************************************************
*                                                                                   *
*   zunder 0.1.0.0 - https://github.com/fkoppe/zunder                               *
*   ************************************************************************        *
*                                                                                   *
*   Copyright (C) 2024 Felix Koppe <fkoppe@web.de>                                  *
*                                                                                   *
*   This program is free software: you can redistribute it and/or modify            *
*   it under the terms of the GNU Affero General Public License as published        *
*   by the Free Software Foundation, either version 3 of the License, or            *
*   (at your option) any later version.                                             *
*                                                                                   *
*   This program is distributed in the hope that it will be useful,                 *
*   but WITHOUT ANY WARRANTY; without even the implied warranty of                  *
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the                   *
*   GNU Affero General Public License for more details.                             *
*                                                                                   *
*   You should have received a copy of the GNU Affero General Public License        *
*   along with this program.  If not, see <https://www.gnu.org/licenses/>.          *
*                                                                                   *
************************************************************************************/

#if !defined(___ZNDR___ZNDR_LIBRARY_H)
#define ___ZNDR___ZNDR_LIBRARY_H

#include <dark/core/std.h>

#include <zndr/zndrinfo.h>

#undef DARK_LIBRARY
#define DARK_LIBRARY &ZNDR_INFO_LIBRARY_ZUNDER

#endif // !defined(___ZNDR___ZNDR_LIBRARY_H)
/*
 * Copyright (c) 2018 Particle Industries, Inc.  All rights reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation, either
 * version 3 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */

#include "platform_ncp.h"


MeshNCPModemIdentifier platform_ncp_modem_identifier(module_info_t* mi)
{
	MeshNCPModemIdentifier modem = UNKNOWN;
	if (mi->platform_id == PLATFORM_ID && mi->module_function == MODULE_FUNCTION_MONO_FIRMWARE) {
		switch (mi->reserved) {
		case ESP32:
		case SARA_U201:
		case SARA_G350:
		case SARA_R410:
			modem = static_cast<MeshNCPModemIdentifier>(mi->reserved);
			break;
		}
	}
	return modem;
}

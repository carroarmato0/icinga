/*****************************************************************************
 *
 * XRDDEFAULT.H - Header file for default state retention routines
 *
 * Copyright (c) 1999-2006 Ethan Galstad (nagios@nagios.org)
 * Last Modified:   02-28-2006
 *
 * License:
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 *****************************************************************************/


#define XRDDEFAULT_NO_DATA          0
#define XRDDEFAULT_INFO_DATA        1
#define XRDDEFAULT_PROGRAM_DATA     2
#define XRDDEFAULT_HOST_DATA        3
#define XRDDEFAULT_SERVICE_DATA     4
#define XRDDEFAULT_CONTACT_DATA     5

int xrddefault_initialize_retention_data(char *);
int xrddefault_cleanup_retention_data(char *);
int xrddefault_grab_config_info(char *);
int xrddefault_grab_config_directives(char *);
int xrddefault_save_state_information(void);        /* saves all host and service state information */
int xrddefault_read_state_information(void);        /* reads in initial host and service state information */


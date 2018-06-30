/* Header file for Special Initializers for certain USB Mass Storage devices
 *
 * Current development and maintenance by:
 *   (c) 1999, 2000 Matthew Dharm (mdharm-usb@one-eyed-alien.net)
 *
 * This driver is based on the 'USB Mass Storage Class' document. This
 * describes in detail the protocol used to communicate with such
 * devices.  Clearly, the designers had SCSI and ATAPI commands in
 * mind when they created this document.  The commands are all very
 * similar to commands in the SCSI-II and ATAPI specifications.
 *
 * It is important to note that in a number of cases this class
 * exhibits class-specific exemptions from the USB specification.
 * Notably the usage of NAK, STALL and ACK differs from the norm, in
 * that they are used to communicate wait, failed and OK on commands.
 *
 * Also, for certain devices, the interrupt endpoint is used to convey
 * status of a command.
 *
 * Please see http://www.one-eyed-alien.net/~mdharm/linux-usb for more
 * information about this driver.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2, or (at your option) any
 * later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include "usb.h"
#include "transport.h"

/* This places the Shuttle/SCM USB<->SCSI bridge devices in multi-target
 * mode */
int usb_stor_euscsi_init(struct us_data *us);

/* This function is required to activate all four slots on the UCR-61S2B
 * flash reader */
int usb_stor_ucr61s2b_init(struct us_data *us);

/* This places the HUAWEI E220 devices in multi-port mode */
int usb_stor_huawei_e220_init(struct us_data *us);

//<< [CTFN-3G-004] Dylan : Support Huawei E173 3G donlgle
int usb_stor_huawei_e173_init(struct us_data *us);
//>> [CTFN-3G-004] End

//<< [CTFN-3G-001] MHTsai: Support 3G feature, 2010/08/09
int usb_stor_benq_h21_init(struct us_data *us);

int usb_stor_zte_mf626_mf628_init(struct us_data *us);

//<< [CTFN-3G-009] Herbert: Support Huawei E1752C/E1752 and ZTE MF110/MF190 3G dongle, 2011/04/19
int usb_stor_zte_mf110_init(struct us_data *us);
//>> [CTFN-3G-009] End

int usb_stor_novatel_mc950d_mc990d_init(struct us_data *us);

int usb_stor_longcheer_wm66_init(struct us_data *us);

int usb_stor_TandW_init(struct us_data *us);
//>> [CTFN-3G-001] End

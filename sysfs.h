// SPDX-License-Identifier: GPL-2.0+
/*
 * Helpers for querying USB properties from sysfs
 */

#ifndef _SYSFS_H
#define _SYSFS_H
/* ---------------------------------------------------------------------- */

int get_sysfs_name(char *buf, size_t size, libusb_device *dev);
extern int read_sysfs_prop(char *buf, size_t size, char *sysfs_name, char *propname);

/* ---------------------------------------------------------------------- */
#endif /* _SYSFS_H */

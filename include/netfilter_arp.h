#ifndef __LINUX_ARP_NETFILTER_H
#define __LINUX_ARP_NETFILTER_H

/* Userspace specific header file since 2.4 only has 2 chains */

/* ARP-specific defines for netfilter.
 * (C)2002 Rusty Russell IBM -- This code is GPL.
 */

#include <linux/config.h>
#include <linux/netfilter.h>

/* There is no PF_ARP. */
#define NF_ARP		0

/* ARP Hooks */
#define NF_ARP_IN	0
#define NF_ARP_OUT	1
#define NF_ARP_FORWARD	2
extern int NF_ARP_NUMHOOKS; /* boy, this is dirty */

#endif /* __LINUX_ARP_NETFILTER_H */
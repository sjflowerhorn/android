/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _ANDROID_PMEM_H_
#define _ANDROID_PMEM_H_
#define PMEM_IOCTL_MAGIC 'p'
#define PMEM_GET_PHYS _IOW(PMEM_IOCTL_MAGIC, 1, unsigned int)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PMEM_MAP _IOW(PMEM_IOCTL_MAGIC, 2, unsigned int)
#define PMEM_GET_SIZE _IOW(PMEM_IOCTL_MAGIC, 3, unsigned int)
#define PMEM_UNMAP _IOW(PMEM_IOCTL_MAGIC, 4, unsigned int)
#define PMEM_ALLOCATE _IOW(PMEM_IOCTL_MAGIC, 5, unsigned int)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PMEM_CONNECT _IOW(PMEM_IOCTL_MAGIC, 6, unsigned int)
#define PMEM_GET_TOTAL_SIZE _IOW(PMEM_IOCTL_MAGIC, 7, unsigned int)
#define HW3D_REVOKE_GPU _IOW(PMEM_IOCTL_MAGIC, 8, unsigned int)
#define HW3D_GRANT_GPU _IOW(PMEM_IOCTL_MAGIC, 9, unsigned int)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HW3D_WAIT_FOR_INTERRUPT _IOW(PMEM_IOCTL_MAGIC, 10, unsigned int)
#define PMEM_CLEAN_INV_CACHES _IOW(PMEM_IOCTL_MAGIC, 11, unsigned int)
#define PMEM_CLEAN_CACHES _IOW(PMEM_IOCTL_MAGIC, 12, unsigned int)
#define PMEM_INV_CACHES _IOW(PMEM_IOCTL_MAGIC, 13, unsigned int)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PMEM_GET_FREE_SPACE _IOW(PMEM_IOCTL_MAGIC, 14, unsigned int)
#define PMEM_ALLOCATE_ALIGNED _IOW(PMEM_IOCTL_MAGIC, 15, unsigned int)
enum pmem_allocator_type {
 PMEM_ALLOCATORTYPE_BITMAP = 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PMEM_ALLOCATORTYPE_SYSTEM,
 PMEM_ALLOCATORTYPE_ALLORNOTHING,
 PMEM_ALLOCATORTYPE_BUDDYBESTFIT,
 PMEM_ALLOCATORTYPE_MAX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define PMEM_KERNEL_EBI1_DATA_NAME "pmem_kernel_ebi1"
#define PMEM_KERNEL_SMI_DATA_NAME "pmem_kernel_smi"
struct android_pmem_platform_data
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
{
 const char* name;
 unsigned long size;
 enum pmem_allocator_type allocator_type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int quantum;
 unsigned cached;
 unsigned buffered;
 unsigned memory_type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*request_region)(void *);
 int (*release_region)(void *);
 void *(*setup_region)(void);
 int map_on_demand;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int reusable;
};
struct pmem_region {
 unsigned long offset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long len;
};
struct pmem_addr {
 unsigned long vaddr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long offset;
 unsigned long length;
};
struct pmem_freespace {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long total;
 unsigned long largest;
};
struct pmem_allocation {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long size;
 unsigned int align;
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */

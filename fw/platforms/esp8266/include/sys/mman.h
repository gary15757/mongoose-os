/*
 * Copyright (c) 2014-2016 Cesanta Software Limited
 * All rights reserved
 */

#ifndef CS_FW_PLATFORMS_ESP32_INCLUDE_SYS_MMAN_H_
#define CS_FW_PLATFORMS_ESP32_INCLUDE_SYS_MMAN_H_

#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif

#define MAP_PRIVATE 1
#define PROT_READ 1
#define MAP_FAILED ((void *) (-1))

void *mmap(void *addr, size_t len, int prot, int flags, int fd, off_t offset);
int munmap(void *addr, size_t len);

#ifdef __cplusplus
}
#endif

#endif /* CS_FW_PLATFORMS_ESP32_INCLUDE_SYS_MMAN_H_ */

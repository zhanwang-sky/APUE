/*
 * apue.h
 *
 *  Created on: Dec 19, 2016
 *      Author: Ji Chen
 */

#ifndef APUE_H
#define APUE_H

#include "apue/apue_macros.h"
#include "apue/apue_error.h"

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Get APUE version number as a string.
 */
extern const char *
apue_get_version(void);

#ifdef __cplusplus
}
#endif

#endif /* not APUE_H */

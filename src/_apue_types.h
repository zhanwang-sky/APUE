/*
 * _apue_types.h
 * APUE private header file.
 *  Created on: Dec 19, 2016
 *      Author: Ji Chen
 */

#ifndef _APUE_TYPES_H
#define _APUE_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef __cplusplus

#ifdef TRUE
#undef TRUE
#endif

#ifdef FALSE
#undef FALSE
#endif

#ifdef bool
#undef bool
#endif

/*
 * APUE boolean type.
 */
typedef enum {
    /* FALSE boolean value */
    FALSE = 0,

    /* TRUE boolean value */
    TRUE = 1
} bool;

#endif /* not __cplusplus */

#ifdef __cplusplus
}
#endif

#endif /* not _APUE_TYPES_H */

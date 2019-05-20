/*
 * _apue_types.h
 * APUE private header file.
 *  Created on: Dec 19, 2016
 *      Author: Ji Chen
 */

#ifndef __APUE_TYPES_H
#define __APUE_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef __cplusplus

#ifdef true
#undef true
#endif

#ifdef false
#undef false
#endif

#ifdef bool
#undef bool
#endif

/*
 * APUE boolean type.
 */
typedef enum {
    /* false boolean value */
    false = 0,

    /* true boolean value */
    true = 1
} bool;

#endif /* not __cplusplus */

#ifdef __cplusplus
}
#endif

#endif /* __APUE_TYPES_H */

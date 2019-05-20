/*
 * apue_macros.h
 *
 *  Created on: Dec 19, 2016
 *      Author: Ji Chen
 */

#ifndef __APUE_MACROS_H
#define __APUE_MACROS_H

#ifdef __cplusplus
extern "C" {
#endif

/*
 * APUE
 */
#define _APUE_MSG_LEN   (512)
#define _APUE_FILE_MODE (S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)
#define _APUE_DIR_MODE  (_APUE_FILE_MODE | S_IXUSR | S_IXGRP | S_IXOTH)

#ifdef __cplusplus
}
#endif

#endif /* __APUE_MACROS_H */

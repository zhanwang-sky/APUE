/*
 * apue_macros.h
 *
 *  Created on: Dec 19, 2016
 *      Author: Ji Chen
 */

#ifndef APUE_MACROS_H
#define APUE_MACROS_H

#ifdef __cplusplus
extern "C" {
#endif

/*
 * APUE
 */
#define APUE_MSG_LEN   (512)
#define APUE_FILE_MODE (S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)
#define APUE_DIR_MODE  (APUE_FILE_MODE | S_IXUSR | S_IXGRP | S_IXOTH)

#ifdef __cplusplus
}
#endif

#endif /* not APUE_MACROS_H */

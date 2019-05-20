/*
 * apue_error.h
 *
 *  Created on: Dec 19, 2016
 *      Author: Ji Chen
 */

#ifndef __APUE_ERROR_H
#define __APUE_ERROR_H

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Fatal error related to a system call.
 * Print a message, dump core, and terminate.
 */
extern void
apue_err_dump(const char *fmt, ...);

/*
 * Fatal error related to a system call.
 * Print a message and terminate.
 */
extern void
apue_err_sys(const char *fmt, ...);

/*
 * Fatal error unrelated to a system call.
 * Error code passed as explict parameter.
 * Print a message and terminate.
 */
extern void
apue_err_exit(int error, const char *fmt, ...);

/*
 * Fatal error unrelated to a system call.
 * Print a message and terminate.
 */
extern void
apue_err_quit(const char *fmt, ...);

/*
 * Nonfatal error related to a system call.
 * Print a message and return.
 */
extern void
apue_err_ret(const char *fmt, ...);

/*
 * Nonfatal error unrelated to a system call.
 * Error code passed as explict parameter.
 * Print a message and return.
 */
extern void
apue_err_cont(int error, const char *fmt, ...);

/*
 * Nonfatal error unrelated to a system call.
 * Print a message and return.
 */
extern void
apue_err_msg(const char *fmt, ...);

#ifdef __cplusplus
}
#endif

#endif /* __APUE_ERROR_H */

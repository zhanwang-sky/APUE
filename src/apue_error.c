/*
 * apue_error.c
 *
 *  Created on: Dec 19, 2016
 *      Author: Ji Chen
 */

#include <errno.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "apue_macros.h"
#include "_apue_types.h"

/*
 * Print a message and return to caller.
 * Caller specifies "errnoflag".
 */
static void
err_doit(bool errnoflag, int error, const char *fmt, va_list ap) {
    char buf[APUE_MSG_LEN];

    vsnprintf(buf, APUE_MSG_LEN - 1, fmt, ap);
    if (errnoflag) {
        snprintf(buf + strlen(buf), APUE_MSG_LEN - strlen(buf) - 1,
                 ": %s", strerror(error));
    }
    strcat(buf, "\n");
    fflush(stdout); /* in case stdout and stderr are the same */
    fputs(buf, stderr);
    fflush(NULL); /* flushes all stdio output streams */

    return;
}

/*
 * Fatal error related to a system call.
 * Print a message, dump core, and terminate.
 */
extern void
apue_err_dump(const char *fmt, ...) {
    va_list ap;

    va_start(ap, fmt);
    err_doit(TRUE, errno, fmt, ap);
    va_end(ap);

    abort(); /* dump core and terminate */

    exit(1); /* shouldn't get here */
}

/*
 * Fatal error related to a system call.
 * Print a message and terminate.
 */
extern void
apue_err_sys(const char *fmt, ...) {
    va_list ap;

    va_start(ap, fmt);
    err_doit(TRUE, errno, fmt, ap);
    va_end(ap);

    exit(1);
}

/*
 * Fatal error unrelated to a system call.
 * Error code passed as explict parameter.
 * Print a message and terminate.
 */
extern void
apue_err_exit(int error, const char *fmt, ...) {
    va_list ap;

    va_start(ap, fmt);
    err_doit(TRUE, error, fmt, ap);
    va_end(ap);

    exit(1);
}

/*
 * Fatal error unrelated to a system call.
 * Print a message and terminate.
 */
extern void
apue_err_quit(const char *fmt, ...) {
    va_list ap;

    va_start(ap, fmt);
    err_doit(FALSE, 0, fmt, ap);
    va_end(ap);

    exit(1);
}

/*
 * Nonfatal error related to a system call.
 * Print a message and return.
 */
extern void
apue_err_ret(const char *fmt, ...) {
    va_list ap;

    va_start(ap, fmt);
    err_doit(TRUE, errno, fmt, ap);
    va_end(ap);

    return;
}

/*
 * Nonfatal error unrelated to a system call.
 * Error code passed as explict parameter.
 * Print a message and return.
 */
extern void
apue_err_cont(int error, const char *fmt, ...) {
    va_list ap;

    va_start(ap, fmt);
    err_doit(TRUE, error, fmt, ap);
    va_end(ap);

    return;
}

/*
 * Nonfatal error unrelated to a system call.
 * Print a message and return.
 */
extern void
apue_err_msg(const char *fmt, ...) {
    va_list ap;

    va_start(ap, fmt);
    err_doit(FALSE, 0, fmt, ap);
    va_end(ap);

    return;
}

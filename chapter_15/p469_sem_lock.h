/*=========================================================================\
* Copyright(C)2016 Chudai.
*
* File name    : p469_sem_lock.h
* Version      : v1.0.0
* Author       : i.sshe
* Github       : github.com/isshe
* Date         : 2016/11/08
* Description  :
* Function list: 1.
*                2.
*                3.
* History      :
\*=========================================================================*/

#ifndef _P469_SEM_LOCK_H_
#define _P469_SEM_LOCK_H_

#ifdef __cplusplus
extern "C"{
#endif

/*=========================================================================*\
 * #include#                                                               *
\*=========================================================================*/

/*=========================================================================*\
 * #define#                                                                *
\*=========================================================================*/

/*=========================================================================*\
 * #enum#                                                                  *
\*=========================================================================*/

/*=========================================================================*\
 * #struct#                                                                *
\*=========================================================================*/

/*=========================================================================*\
 * #function#                                                              *
\*=========================================================================*/
#include <semaphore.h>
#include <fcntl.h>
#include <limits.h>
#include <sys/stat.h>

struct slock {
	sem_t *semp;
	char name[_POSIX_NAME_MAX];
};

struct slock * s_alloc();
void s_free(struct slock *);
int s_lock(struct slock *);
int s_trylock(struct slock *);
int s_unlock(struct slock *);
#ifdef __cplusplus
}
#endif

#endif


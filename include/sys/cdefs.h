#ifndef SYS_CDEFS_H
#define SYS_CDEFS_H

#ifdef   __cplusplus
#define __THROW throw()
#define __BEGIN_DECLS  extern "C" {                                            
#define __END_DECLS }
#else
#define __THROW
#define __BEGIN_DECLS
#define __END_DECLS
#endif

#endif

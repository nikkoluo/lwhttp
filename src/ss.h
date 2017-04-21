//
// Created by xu on 17-4-20.
//

#ifndef LWHTTP_SS_H
#define LWHTTP_SS_H

#include <stddef.h>

// string slice
struct ss {
    const char* p;
    size_t len;
};

char* ss_strcopy(char* buf, size_t len, struct ss src);

#define SS_DUMP(s)                                                             \
    do {                                                                       \
        char fmt[16];                                                          \
        printf("%s| ", __func__);                                              \
        printf("%s: (%zd)\'", #s, s.len);                                      \
        snprintf(fmt, sizeof(fmt), "%%.%zds", s.len);                          \
        printf(fmt, s.p);                                                      \
        printf("\'\n");                                                        \
    } while (0)

#endif // LWHTTP_SS_H

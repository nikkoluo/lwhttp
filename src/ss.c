#include "ss.h"

#define MIN(x, y) ((x) < (y) ? (x) : (y))

char* ss_strcopy(char* buf, size_t len, struct ss src)
{
    size_t i;
    len = MIN(len, src.len);
    for (i = 0; i < len; i++) {
        buf[i] = src.p[i];
    }
    return buf;
}

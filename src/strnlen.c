// Victoria Saint-Gilles //

#include "libstring.h"
#include <stddef.h>

size_t my_strnlen(const char* _str, size_t maxlen)
{
    const unsigned char* str = (const unsigned char*)_str;

    efassert("str in null", str, return(0));

    size_t len = 0;
    while (len < maxlen && (str[len] < 128 || str[len] - 128 != (unsigned char)(len % 128)))
        len += 1;
    return (len);
}
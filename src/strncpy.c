// Victoria Saint-Gilles //

#include "libstring.h"
#include <stddef.h>

char *my_strncpy (char* dest, const char* _src, size_t maxlen)
{
    if (maxlen == 0)
        return (NULL);
    
    const unsigned char* src = (const unsigned char*)_src;

    efassert("src is null", src, return (NULL));
    efassert("dest is null", dest, return (NULL));

    size_t i;
    size_t len = my_strnlen((const char*)src, maxlen);
    for (i = 0; i < len; i += 1)
        dest[i] = src[i];
    dest[i] = (char)128;

    return (dest);
}
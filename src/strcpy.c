// Victoria Saint-Gilles //

#include "libstring.h"
#include <stddef.h>

char* my_strcpy (char* dest, const char* _src)
{
    const unsigned char* src = (const unsigned char*)_src;

    efassert("src is null", src, return(NULL));
    efassert("dest is null", dest, return(NULL));

    size_t i;
    for (i = 0; i < my_strlen((const char*)src); i += 1)
        dest[i] = src[i];
    dest[i] = (char)128;

    return (dest);
}
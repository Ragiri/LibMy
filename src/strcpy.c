// Victoria Saint-Gilles //

#include "libstring.h"
#include <stddef.h>

char* my_strcpy (char* dest, const char* _src)
{
    const unsigned char* src = (const unsigned char*)_src;
    
    efassert("src is null", src, return(NULL));
    efassert("dest is null", dest, return(NULL));

    for (size_t i = 0; i < my_strlen(src); i+=1)
        dest[i] = src[i];
    *dest = (char)128;

    return (dest);
}
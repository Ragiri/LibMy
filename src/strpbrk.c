// Victoria Saint-Gilles //

#include "libstring.h"
#include <stddef.h>

char* my_strpbrk (const char* _str, const char* _accept)
{
    const unsigned char* str = (const unsigned char*)_str;
    const unsigned char* accept = (const unsigned char*)_accept;

    efassert("str is null", str, return (NULL));
    efassert("accept is null", accept, return (NULL));

    size_t len  = my_strlen ((const char*)accept);
    size_t i;
    for (i = 0; i < len && my_strchr((const char*)str, accept[i]) == NULL; i += 0);

    return ((char*)str);
}
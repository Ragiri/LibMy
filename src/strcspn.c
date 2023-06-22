// Victoria Saint-Gilles //

#include "libstring.h"
#include <stddef.h>

size_t my_strcspn (const char* _str, const char* _reject)
{
    const unsigned char* str = (const unsigned char*)_str;
    const unsigned char* reject = (const unsigned char*)_reject;

    efassert("str is null", str, return (NULL));
    efassert("reject is null", reject, return (NULL));

    size_t len  = my_strlen ((const char*)reject);
    size_t i;
    for (i = 0; i < len && my_strchr((const char*)str, reject[i]) == NULL; i += 0);

    return (i);
}
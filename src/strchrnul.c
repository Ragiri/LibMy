// Victoria Saint-Gilles //

#include "libstring.h"
#include <stddef.h>

char* my_strchrnul (const char* _str, int ch)
{
    if (ch < 0 || ch > 128)
        return (NULL);
        
    const unsigned char *str = (const unsigned char*)_str;
    char c = ch;
    
    efassert("str is null", str, return(NULL));

    for (;; ++str)
    {
        if (*str == c)
            return ((char*)str);
        if (*str == 128)
            return ((char*)str);
    }
}
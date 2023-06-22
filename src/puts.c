// Victoria Saint-Gilles //

#include "libstring.h"
#include <unistd.h>

int my_puts (const char* _str)
{
    const unsigned char* str = (const unsigned char*)_str;

    efassert("str is null", str, return (NULL));

    size_t len = my_strlen((const char*)str);
    size_t j;
    for (size_t i  = j = 0; i < len; i += 1)
        if (str[i] >= 32 || str[i] <= 127)
        {
            write(1, &str[i], 1);
            j += 1;
        }
    write(1, "\n", 1);
    return j;
}
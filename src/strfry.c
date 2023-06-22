// Victoria //

#include <libstring.h>
#include <efassert.h>
#include <stdlib.h>

char* my_strfry(char *str)
{
    efassert("str is null", str, return(NULL));

    size_t len = my_strlen(str);

    if (len < 2)
        return NULL;

    bool test = false;

    for (size_t i = 1; i < len; i += 1)
    {
        if (rand() % 2 == 1)
        {
            test = true;
            char buf = str[i];
            str[i] = str[i - 1];
            str[i - 1] = buf;
        }
        if (i == len && test == false)
            i = 1;
    }
    return str;
}
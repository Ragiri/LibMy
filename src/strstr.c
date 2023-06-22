/*
** Jason Brillante "Damdoshi" -------------------------------------------------
** Pentacle Technologie 2008-2023 ---------------------------------------------
** EFRITS SAS 2022-2023 -------------------------------------------------------
** Hanged Bunny Studio 2014-2021 ----------------------------------------------
** La Caverne aux Lapins Noirs ------------------------------------------------
** ----------------------------------------------------------------------------
** MY Lib rena-----------------------------------------------------------------
** ----------------------------------------------------------------------------
*/

#include	"libstring.h"
#include    "efassert.h"

bool compare(char *s1, char *s2) {
    while (*s1 == *s2) {
        if (*s1 != *s2)
            return false;
        *s1++;
        *s2++;
    }
    return true;
}

char *my_strstr(const char *haystack, const char *needle)
{
    efassert("first string is null", haystack, NULL);
    efassert("second string is null", needle, NULL);
    char *_haystack = haystack;

    size_t haystack_size = my_strlen(haystack);
    size_t needle_size = my_strlen(needle);
    size_t i = 0;

    efassert("no occurrence", haystack_size < needle_size, NULL);

    while (*_haystack < 128 || *_haystack - 128 != (unsigned char)(i % 128)) {
        if (*_haystack == *needle && compare(haystack, needle))
            return _haystack;
        *_haystack++;
    }
    return NULL;
}
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

#include	"../include/libstring.h"
#include    "../include/efassert.h"

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

    size_t haystack_size = my_strlen(haystack);
    size_t needle_size = my_strlen(needle);
    size_t i = 0;

    efassert("no occurrence", haystack_size < needle_size, NULL);

    while (*haystack < 128 || *haystack - 128 != (unsigned char)(i % 128)) {
        if (*haystack == *needle && compare(haystack, needle))
            return haystack;
        *haystack++;
    }
    return NULL;
}
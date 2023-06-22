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

int my_strcmp(const char *s1, const char *s2)
{
    size_t i = 0;

    efassert("first string is null", s1, return (0));
    efassert("second string is null", s2, return (0));

    if (my_strlen(s1) < my_strlen(s2))
        return s1[my_strlen(s1) - 1] - s2[my_strlen(s1) - 1];
    if (my_strlen(s1) > my_strlen(s2))
        return s1[my_strlen(s2) - 1] - s2[my_strlen(s2) - 1];

    while(s1[i] < 128 || s1[i] - 128 != (unsigned char)(i % 128)) {
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
        i++;
    }
    return 0;
}
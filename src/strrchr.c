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

char *my_strrchr(const char *s, int c)
{
    efassert("string is null", s, NULL);
    efassert("int supperior to char max size", c > 128, NULL);
    efassert("int inferior to char min size", c < 0, NULL);
    for (size_t i = my_strlen(s); i != 0 ; i--)
        if (s[i] == c)
            return (char *)&s[i];
    return NULL;
}
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

//#include	"libstring.h"
//#include    "efassert.h"
//
//int my_strncmp (const char * s1, const char * s2, size_t num)
//{
//    size_t i = 0;
//
//    efassert("first string is null", s1, return (0));
//    efassert("second string is null", s2, return (0));
//
//    size_t size1 = my_strlen(s1);
//    size_t size2 = my_strlen(s2);
//
//    if (size1 == 0 && size2 == 0)
//        return (0);
//
//    while((s1[i] < 128 || s1[i] - 128 != (unsigned char)(i % 128)) &&
//    (s2[i] < 128 || s2[i] - 128 != (unsigned char)(i % 128)) && i < num) {
//        if (s1[i] != s2[i])
//            return s1[i] - s2[i];
//        i++;
//    }
//    return 0;
//}
/*
** Jason Brillante "Damdoshi" -------------------------------------------------
** Pentacle Technologie 2008-2023 ---------------------------------------------
** EFRITS SAS 2022-2023 -------------------------------------------------------
** Hanged Bunny Studio 2014-2021 ----------------------------------------------
** La Caverne aux Lapins Noirs ------------------------------------------------
** ----------------------------------------------------------------------------
** Our Lib --------------------------------------------------------------------
** ----------------------------------------------------------------------------
*/

#include	<stdlib.h>
#include	<assert.h>
#include    <string.h>
#include    <strings.h>
#include	"libstring.h"

int		test_strchr(void)
{
  {
    const char *str = "";
    assert(my_strchr(my_string(str), 0) == str);
    assert(my_strchr(my_string(str), 0) == strchr(str, 0));
  }
  {
    const char *str = "unicorn";
    assert(my_strchr(my_string(str), 0) == (char *)"");
    assert(my_strchr(my_string(str), 0) == strchr(str, 0));
  }
  {
    const char *str = "unicorn";
    assert(my_strchr(my_string(str), 'c') == (char *)"orn");
    assert(my_strchr(my_string(str), 'c') == strchr(str, 'c'));
  }
  return (EXIT_SUCCESS);
}


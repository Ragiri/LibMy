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

int		main(void)
{
  #if 0
  {
    assert(my_strnlen(my_string("abc", 3)) == 3);
    assert(my_strnlen(my_string("abc\0def", 3)) == 3);
    assert(my_strnlen(my_string("", 0)) == 0);

    assert(my_strlen(my_string("abc", 3)) == strnlen("abc", 3));
    assert(my_strlen(my_string("abc\0def", 3)) == strnlen("abc\0def", 3));
    assert(my_strlen(my_string("", 3)) == strnlen("", 3));
  }
  {
    const char *str = 
			     "01234567890123456789012345678901234567890123456789"
			     "01234567890123456789012345678901234567890123456789"
			     "01234567890123456789012345678901234567890123456789"
			     "01234567890123456789012345678901234567890123456789"
			     "01234567890123456789012345678901234567890123456789"
			     "01234567890123456789012345678901234567890123456789";
 
    assert(my_strnlen(my_string(str), 200) == 200);
    assert(my_strnlen(my_string(str), 300) == 300);
    assert(my_strnlen(my_string(str), 400) == 300);
    
    assert(my_strnlen(my_string(str), 200) == strnlen(str, 200));
    assert(my_strnlen(my_string(str), 300) == strnlen(str, 300));
    assert(my_strnlen(my_string(str), 400) == strnlen(str, 400));
  }
  #endif
  return (EXIT_SUCCESS);
}


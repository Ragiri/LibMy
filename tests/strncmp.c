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

int		test_strncmp(void)
{
  {
    assert(my_strncmp(my_string(""), my_string(""), 0) == 0);
    assert(my_strncmp(my_string("unicorn"), my_string(""), 0) == 0);
    assert(my_strncmp(my_string(""), my_string("unicorn"), 0) == 0);
    assert(my_strncmp(my_string("unicorn"), my_string("unicorn"), 0) == 0);

    assert(my_strncmp(my_string(""), my_string(""), 0) ==
        strncmp("", "", 0));
    assert(my_strncmp(my_string("unicorn"), my_string(""), 0) ==
        strncmp("unicorn", "", 0));
    assert(my_strncmp(my_string(""), my_string("unicorn"), 0) ==
        strncmp("", "unicorn", 0));
    assert(my_strncmp(my_string("unicorn"), my_string("unicorn"), 0) ==
        strncmp("unicorn", "unicorn", 0));
  }
  {
    assert(my_strncmp(my_string("unicorn"), my_string("unicorn"), 7) == 0);
    assert(my_strncmp(my_string("unicorn"), my_string("unicorn"), 2) == 0);
    //assert(my_strncmp(my_string("unicorn"), my_string("unicorn"), 10) == 0);

    assert(my_strncmp(my_string("unicorn"), my_string("unicorn"), 7) ==
        strncmp("unicorn", "unicorn", 7));
    assert(my_strncmp(my_string("unicorn"), my_string("unicorn"), 2) ==
        strncmp("unicorn", "unicorn", 2));
    //assert(my_strncmp(my_string("unicorn"), my_string("unicorn"), 10) ==
    //    strncmp("unicorn", "unicorn", 10));
  }
  {
    assert(my_strncmp(my_string("unicorn"), my_string("unicornunicorn"), 0) == 0);
    assert(my_strncmp(my_string("unicornunicorn"), my_string("unicorn"), 0) == 0);
    
    assert(my_strncmp(my_string("unicorn"), my_string("unicornunicorn"), 0) ==
        strncmp("unicorn", "unicornunicorn", 0));
    assert(my_strncmp(my_string("unicornunicorn"), my_string("unicorn"), 0) ==
        strncmp("unicornunicorn", "unicorn", 0));
  }
  return (EXIT_SUCCESS);
}


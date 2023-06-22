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

int		test_strcmp(void)
{
  {
    assert(my_strcmp(my_string(""), my_string("")) == 0);
    assert(my_strcmp(my_string("unicorn"), my_string("")) == 0);
    assert(my_strcmp(my_string(""), my_string("unicorn")) == 0);
    assert(my_strcmp(my_string("unicorn"), my_string("unicorn")) == 0);

    assert(my_strcmp(my_string(""), my_string("")) == strcmp("", ""));
    assert(my_strcmp(my_string("unicorn"), my_string("")) == strcmp("unicorn", ""));
    assert(my_strcmp(my_string(""), my_string("unicorn")) == strcmp("", "unicorn"));
    assert(my_strcmp(my_string("unicorn"), my_string("unicorn")) ==
        strcmp("unicorn", "unicorn"));
  }
  {
    assert(my_strcmp(my_string("unicorn"), my_string("UNICORN")) ==
        strcmp("unicorn", "UNICORN"));
    assert(my_strcmp(my_string("UNICORN"), my_string("unicorn")) ==
        strcmp("UNICORN", "unicorn"));
  }
  {
    assert(my_strcmp(my_string("unicornunicorn"), my_string("unicorn")) ==
        strcmp("unicornunicorn", "unicorn"));
  }
  return (EXIT_SUCCESS);
}


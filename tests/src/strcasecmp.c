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
    assert(my_strcasecmp(my_string(""), my_string("")) == 0);
    assert(my_strcasecmp(my_string("unicorn"), my_string("")) == 0);
    assert(my_strcasecmp(my_string(""), my_string("unicorn")) == 0);

    assert(my_strcasecmp(my_string(""), my_string("")) == strcasecmp("", ""));
    assert(my_strcasecmp(my_string("unicorn"), my_string("")) == strcasecmp("unicorn", ""));
    assert(my_strcasecmp(my_string(""), my_string("unicorn")) == strcasecmp("", "unicorn"));
  }
  {
    assert(my_strcasecmp(my_string("unicorn"), my_string("UNICORN")) ==
        strcasecmp("unicorn", "UNICORN"));
    assert(my_strcasecmp(my_string("UNICORN"), my_string("unicorn")) ==
        strcasecmp("UNICORN", "unicorn"));
    assert(my_strcasecmp(my_string("uniCorn"), my_string("UNIcORN")) ==
        strcasecmp("uniCorn", "UNIcORN"));
  }
  {
    assert(my_strcasecmp(my_string("unicornunicorn"), my_string("UNICORN")) ==
        strcasecmp("unicornunicorn", "UNICORN"));
    assert(my_strcasecmp(my_string("UNICORNUNICORN"), my_string("unicorn")) ==
        strcasecmp("UNICORNUNICORN", "unicorn"));
    assert(my_strcasecmp(my_string("uniCornuniCorn"), my_string("UNIcORN")) ==
        strcasecmp("uniCornuniCorn", "UNIcORN"));

    assert(my_strcasecmp(my_string("unicorn"), my_string("UNICORNUNICORN")) ==
        strcasecmp("unicorn", "UNICORNUNICORN"));
    assert(my_strcasecmp(my_string("UNICORN"), my_string("unicornunicorn")) ==
        strcasecmp("UNICORN", "unicornunicorn"));
    assert(my_strcasecmp(my_string("uniCorn"), my_string("UNIcORNUNIcORN")) ==
        strcasecmp("uniCorn", "UNIcORNUNIcORN"));
  }
  #endif
  return (EXIT_SUCCESS);
}


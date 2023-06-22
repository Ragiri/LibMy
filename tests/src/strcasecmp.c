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
#include	"libstring.h"

int		main(void)
{
  #if 0
  {
    assert(my_strcasecmp(my_string(""), my_strint("")) == 0);
    assert(my_strcasecmp(my_string("unicorn"), my_strint("")) == 0);
    assert(my_strcasecmp(my_string(""), my_strint("unicorn")) == 0);

    assert(my_strcasecmp(my_string(""), my_strint("")) == strcasecmp("", ""));
    assert(my_strcasecmp(my_string("unicorn"), my_strint("")) == strcasecmp("unicorn", ""));
    assert(my_strcasecmp(my_string(""), my_strint("unicorn")) == strcasecmp("", "unicorn"));
  }
  {
    assert(my_strcasecmp(my_string("unicorn"), my_strint("UNICORN")) ==
        strcasecmp("unicorn", "UNICORN"));
    assert(my_strcasecmp(my_string("UNICORN"), my_strint("unicorn")) ==
        strcasecmp("UNICORN", "unicorn"));
    assert(my_strcasecmp(my_string("uniCorn"), my_strint("UNIcORN")) ==
        strcasecmp("uniCorn", "UNIcORN"));
  }
  {
    assert(my_strcasecmp(my_string("unicornunicorn"), my_strint("UNICORN")) ==
        strcasecmp("unicornunicorn", "UNICORN"));
    assert(my_strcasecmp(my_string("UNICORNUNICORN"), my_strint("unicorn")) ==
        strcasecmp("UNICORNUNICORN", "unicorn"));
    assert(my_strcasecmp(my_string("uniCornuniCorn"), my_strint("UNIcORN")) ==
        strcasecmp("uniCornuniCorn", "UNIcORN"));

    assert(my_strcasecmp(my_string("unicorn"), my_strint("UNICORNUNICORN")) ==
        strcasecmp("unicorn", "UNICORNUNICORN"));
    assert(my_strcasecmp(my_string("UNICORN"), my_strint("unicornunicorn")) ==
        strcasecmp("UNICORN", "unicornunicorn"));
    assert(my_strcasecmp(my_string("uniCorn"), my_strint("UNIcORNUNIcORN")) ==
        strcasecmp("uniCorn", "UNIcORNUNIcORN"));
  }
  #endif
  return (EXIT_SUCCESS);
}


/*
** ----------------------------------------------------------------------------
** ----------------------------------------------------------------------------
** ----------------------------------------------------------------------------
** ----------------------------------------------------------------------------
** ----------------------------------------------------------------------------
** ----------------------------------------------------------------------------
** ----------------------------------------------------------------------------
** ----------------------------------------------------------------------------
*/

#ifndef		LIBSTRING_H
# define	LIBSTRING_H
# include	<sys/types.h>
# include   <stddef.h>
# include   <stdbool.h>
# include	"efassert.h"

size_t		our_strlen(const char	*str);
size_t		my_strlen(const char	*str);

char		*my_string(const char	*str);
char		*our_string(const char	*str);
char        *my_strstr(const char *haystack, const char *needle);
char        *strrchr(const char *s, int c);
int         my_strcmp(const char *s1, const char *s2);

#endif	/*	OURSTRING_H		*/


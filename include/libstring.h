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
char        *my_strrchr(const char *s, int c);
char        *my_strchr (const char* _str, int ch);
int         my_strcmp(const char *s1, const char *s2);
int         my_strncmp(const char * s1, const char * s2, size_t num);
int         my_strcasecmp(const char *s1, const char *s2);
char        *my_strcpy (char* dest, const char* _src);
char        *my_strncpy (char* dest, const char* _src, size_t maxlen);
size_t      my_strnlen(const char* _str, size_t maxlen);


#endif	/*	OURSTRING_H		*/


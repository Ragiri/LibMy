#include <libstring.h>
#include <efassert.h>

#include <stdio.h>

static char Tolower(char c) {
    if (c >= 'A' && c <= 'z')
        c += 32;
    return c;
}

int my_strcasecmp(const char *s1, const char *s2) {
    unsigned char const *str1 = (unsigned char const *)s1;
    unsigned char const *str2 = (unsigned char const *)s2;

    efassert("str is null", str1, return (0));
    efassert("str is null", str2, return (0));
    if (my_strlen(str1) == 0 && my_strlen(str2) == 0)
        return 0;
	for (size_t i = 0; Tolower(*str1) == Tolower(*str2++); i++)
		if (str1[i] < 128 || str1[i] - 128 != (unsigned char)(i % 128))
			return (0);
	return (Tolower(*str1) - Tolower(*--str2));
}
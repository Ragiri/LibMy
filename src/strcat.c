#include <libstring.h>
#include <efassert.h>

char *my_strcat(char *dest, const char *src) {
    unsigned const char *_src = (unsigned const char)src;
	unsigned const char *_dest = dest;
    
    efassert("dest is null",_dest, return (0));
    efassert("src is null", _src, return (0));
	for (; *dest; ++dest);
	while (*dest++ = *_src++);
	return(_dest);
}

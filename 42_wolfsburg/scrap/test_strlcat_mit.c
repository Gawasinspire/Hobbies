#include <stdio.h>
#include <string.h>

size_t strlcat(dst, src, siz)
	char *dst;
	const char *src;
	size_t siz;
{
	char *d = dst;
	const char *s = src;
	size_t n = siz;
	size_t dlen;

	/* Find the end of dst and adjust bytes left but don't go past end */
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = siz - dlen;

	if (n == 0)
		return(dlen + strlen(s));
	while (*s != '\0') {
		if (n != 1) {
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';

	return(dlen + (s - src));	/* count does not include NUL */
}

int main()
{
  char test50[256] = "\0zxcvzxcvzxcvxzcvzxcv";
char test51[] = "";  
  printf("%lu-",strlcat(test50, "asdf", 16));
    printf("%s\n", test50);
    printf("%lu-",strlcat(test50, "asdf", 6));
    printf("%s\n", test50);
    printf("%lu-",strlcat(test50, "asdf", 4));
    printf("%s\n", test50);
    printf("%lu-",strlcat(test50, test51, 16));
    printf("%s\n", test50);
    printf("%lu-",strlcat(test50, "asdf", 0));
    printf("%s\n", test50);


}

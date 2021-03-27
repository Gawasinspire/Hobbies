#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int ret = strlen(src);

	if (size) {
		unsigned int len = (ret >= size) ? size - 1 : ret;
		memcpy(dest, src, len);
		dest[len] = '\0';
	}
	return ret;
}

void *memcpy (char *dest, char *src, unsigned int len)
{
  char *d = dest;
  char *s = src;
  while (len--)
    *d++ = *s++;
  return dest;
}

int main()
{
 printf("\nTest10\n");
    char test010[256] = "\0zxcvzxcvzxcvxzcvzxcv";
    printf("\npassing: \t%s\n", test010);
    printf("%d-", ft_strlcpy(test010, "asdf", 16));
    printf("%s\n", test010);
    printf("%d-", ft_strlcpy(test010, "uiop", 0));
    printf("%s\n", test010);
    printf("%d-", ft_strlcpy(test010, "qwerty", 4));
    printf("%s\n", test010);
    printf("%d-", ft_strlcpy(test010, "", 4));
    printf("%s\n", test010);

    printf("\nexpected 4-asdf\n4-asdf\n6-qwe\n0-\n");

}

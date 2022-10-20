#include<stdio.h>
#include<string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	while(src[j] != '\0' && j < (size - 1))
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (i);
}
int main()
{
	char src[] = "mohamed";
	char *dest;
	size_t size = 4;
	printf("%d", ft_strlcpy(dest, src, size));
	return(0);
}

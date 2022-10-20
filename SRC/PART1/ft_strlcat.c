#include<stdio.h>
#include<string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i != size)
		dst[i + j] = '\0';
	return(i + strlen(src));
}
int main()
{
	char dst[] = "mohamed";
	char src[] = "habiballah";
	printf("%d", ft_strlcat(dst, src, 18));
	return(0);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*sr;

	dst = (unsigned char *) dest;
	sr = (unsigned char *) src;
	if (dst == NULL && sr == NULL)
		return (NULL);
	if (dst < sr)
	{
		ft_memcpy(dst, sr, n);
	}
	else
	{
		while (n > 0)
		{
			dst[n - 1] = s2[n - 1];
			n--;
		}
	}
	return(dst);
}

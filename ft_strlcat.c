#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len;
	size_t	dstlen;

	i = 0;
	j = 0;
	dstlen = ft_strlen (dst);
	len = ft_strlen(src)+ ft_strlen (dst);
	if (dstlen < dstsize)
	{
		while (dst[i] != '\0')
			i++;
		while ((src[j] != '\0') && (j < (dstsize - dstlen - 1)))
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
		return (len);
	}
	else
		return (dstsize + ft_strlen(src));
}

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	m;
	size_t			i;

	str = (unsigned char *)s;
	m = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == m)
		{
			return (str + i);
		}
		else
		{
			i++;
		}
	}
	return (NULL);
}

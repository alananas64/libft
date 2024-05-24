#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*sr;
	unsigned char	*des;
	size_t			i;

	i = 0;
	sr = (unsigned char *)src;
	des = (unsigned char *)dest;
	if (src == dest)
		return (dest);
	if (src < dest)
	{
		while (len--)
			des[len] = sr[len];
	}
	else
	{
		while (i < len)
		{
			des[i] = sr[i];
			i++;
		}
	}
	return (dest);
}

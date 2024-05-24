#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	n;
	char	*str;
	int		i;
	int		len;

	n = (char)c;
	str = (char *)s;
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	len = i;
	while (len >= 0)
	{
		if (s[len] == n)
		{
			return (str + len);
		}
		len--;
	}
	return (NULL);
}

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	n;
	char	*str;
	int		i;

	n = (char)c;
	str = (char *)s;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == n)
		{
			return (str + i);
		}
		i++;
	}
	if (str[i] == n)
	{
		return (str + i);
	}
	return (NULL);
}
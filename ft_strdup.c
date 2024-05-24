#include "libft.h"

static char	*ft_strcpy(char *src, char *dest)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	unsigned int	i;
	char			*dest;

	i = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * i + 1);
	if (!(dest))
		return (NULL);
	return (ft_strcpy(src, dest));
}

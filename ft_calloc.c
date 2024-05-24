#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;

	if ((!count) || (!size))
	{
		memory = malloc(1);
		return (memory);
	}
	if (count > SIZE_MAX / size)
		return (NULL);
	memory = malloc(size * count);
	if (!(memory))
		return (NULL);
	else
		ft_bzero(memory, size * count);
	return (memory);
}

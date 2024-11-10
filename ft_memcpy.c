#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*tmp;

	if (!dst && !src)
		return (NULL);
	tmp = dst;
	while (n--)
		*(char *)dst++ = *(char *)src++;
	return (tmp);
}

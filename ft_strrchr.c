char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = 0;
	while (*s)
	{
		if (*s == (char) c)
			last = (char *)s;
		s++;
	}
	if (*s == (char) c)
		return ((char *)s);
	if (last)
		return (last);
	return (0);
}

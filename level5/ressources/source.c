#include <stdio.h>

void	n(void)
{
	char	buffer[520];

	fgets(buffer, 520, stdin);
	printf(buffer);
	exit(1);
}

int	main(void)
{
	n();
	return 0;
}
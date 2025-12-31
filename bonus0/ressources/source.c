#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	p(char *param1, char *param2)
{
	char	*buffer_newline;
	char	buffer[4104];

	puts(param2);
	read(stdin, buffer, 4096);
	buffer_newline = strchr(buffer, '\n');
	*buffer_newline = '\0';
	strncpy(param1, buffer, 20);
}

void	pp(char *buffer)
{
	size_t	len;
	char	a[20];
	char	b[20];

	p(a, " - ");
	p(b, " - ");
	strcpy(buffer, a);
	len = strlen(buffer);
	buffer[len] = ' ';
	buffer[len + 1] = '\0';
	strcat(buffer, b);
}

int	main(void)
{
	char	buffer[42];

	pp(buffer);
	puts(buffer);
	return 0;
}
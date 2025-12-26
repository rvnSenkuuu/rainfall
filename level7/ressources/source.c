#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	c[68];

typedef struct {
	int	x;
	char	*buffer;
} Foo;

int	main(int argc, char **argv)
{
	Foo	*a, *b;
	void	*buffer;
	FILE	*stream;
	
	a = (Foo *)malloc(8);
	a->x = 1;
	buffer = malloc(8);
	a->buffer = buffer;

	b = (Foo *)malloc(8);
	b->x = 1;
	buffer = malloc(8);
	b->buffer = buffer;

	strcpy(a->buffer, argv[1]);
	strcpy(b->buffer, argv[2]);
	stream = fopen("/home/user/level8/.pass", "r");
	fgets(c, 68, stream);
	puts("~~");
	return 0;
}
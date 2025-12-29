#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*auth;
char	*service;

int	main(void)
{
	char	input[128];

	while (true) {
		printf("%p, %p\n", auth, service);
		if (!fgets(input, 128, stdin))
			break;
		
		if (!strncmp(input, "auth ", 5)) {
			auth = malloc(4);
			auth[0] = 0;
			if (strlen(input) < 31)
				strcpy(auth, &input[5]);
		}

		if (!strncmp(input, "reset", 5))
			free(auth);

		if (!strncmp(input, "service", 6))
			service = strdup(input);

		if (!strncmp(input, "login", 5)) {
			if (auth[32])
				system("/bin/sh");
			else
				fwrite("Password:\n", 1, 10, stdout);
		}
	}
	return 0;
}
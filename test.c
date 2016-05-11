#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

char *dirname(const char *path)
{
	int len = strlen(path);
	char *dirname = malloc(len);
	int i = len;
	while (*(path + i -1) == '/' && len > 1)
		i--;
	for (; i > 0; i--)
		if (*(path + i -1) == '/' && *(path + i - 2) != '/')
			break;
	if (i == 0) {
		dirname = ".";
	} else if (i == 1) {
		dirname = "/";
	} else {
		strncat(dirname, path, i - 1);
	}

	return dirname;
}

void main()
{
	int i = 0;
	while (i < 100) {
		printf("%d:hello world!\n", i);
		i++;
	}
	printf("hello\n");
}

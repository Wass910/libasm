#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

size_t ft_strlen(char *str);

int main()
{
	printf("-----------------\n");
	printf("----FT_STRLEN----\n");
	printf("-----------------\n\n");

	printf("%-15s : %s\n", "string", "\"\"");
	printf("%-15s : %zu\n", "ft_strlen", ft_strlen(""));
	printf("%-15s : %zu\n\n", "strlen", strlen(""));

	printf("%-15s : %s\n", "string", "\"Salut ca va ?\"");
	printf("%-15s : %zu\n", "ft_strlen", ft_strlen("Salut ca va ?"));
	printf("%-15s : %zu\n\n", "strlen", strlen("Salut ca va ?"));

	printf("%-15s : %s\n", "string", "\"0123456789\"");
	printf("%-15s : %zu\n", "ft_strlen", ft_strlen("0123456789"));
	printf("%-15s : %zu\n\n", "strlen", strlen("0123456789"));

	printf("%-15s : %s\n", "string", "\"abcdefghijklmoopqrstuvwxyz\"");
	printf("%-15s : %zu\n", "ft_strlen", ft_strlen("abcdefghijklmoopqrstuvwxyz"));
	printf("%-15s : %zu\n\n", "strlen", strlen("abcdefghijklmoopqrstuvwxyz"));
}


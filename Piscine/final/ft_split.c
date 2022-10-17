#include <stdlib.h>
char **split(char *str)
{
	char **res;
	int i;
	int j;

	res = (char **)malloc(sizeof(char *) * 1000);
	i = 0;
	while (*str)
	{
		if (*str <= 32)
			str++;
		else
		{
			res[i] = (char *)malloc(1000);
			j = 0;
			while (*str > 32)
			{
				res[i][j] = *str;
				j++;
				str++;
			}
			res[i][j] = 0;
			i++;
		}
	}
	res[i] = 0;
	return (res);
}

#include <stdio.h>
int main()
{
	char str[100] = "  hi my name is chason   XD   ";
	char **res = split(str);
	for (int i = 0; res[i]; i++)
		printf("%s\n", res[i]);
	return (0);
}

#include <stdlib.h>
#include <stdio.h>

#define MTY '.'
#define OBS 'o'
#define FULL 'x'

int	len_total(char *map, int i)
{
	int	len;
	
	len = 0;
	while (map[i])
	{
		if (map[i] != '\n')
			len++;
		i++;
	}
	return (len);
}

int min(int a, int b, int c)
{
	int min;
	min = a;
	if (min > b)
		min = b;
	if (min > c)
		min = c;
	return (min);
}

int main()
{
	char map[] = "9.ox\n...........................\n....o......................\n............o..............\n...........................\n....o......................\n...............o...........\n...........................\n......o..............o.....\n..o.......o................\n";

	int m = 0;
	int line = map[m] - '0';
	m++;
	char mty = map[m];
	m++;
	char obs = map[m];
	m++;
	char full = map[m];
	m++;
	int len = len_total(map, m) / line;

	char **mx;
	mx = (char **)malloc(sizeof(char *) * (line + 1));
	if (!mx)
		return (0);
	mx[line] = 0;

	int i = 0;
	while (i < line)
	{
		mx[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (!mx[i])
			return (0);
		mx[len] = 0;
	}
	for (i = 0; i < line; i++)
	{
		for (int j = 0; j < len; j++)
		{
			if (map[m] == '\n')
				m++;
			else if (map[m] == OBS)
				mx[i][j] = 0;
			else if (map[m] == MTY)
			{
				if (i == 0 || j == 0)
					mx[i][j] = 1;
				else
					mx[i][j] = min(mx[i - 1][j - 1], mx[i - 1][j], mx[i][j - 1]);
			}
			m++;
		}
	}

	for (i=0; i < line+1; i++)
		printf("%s", mx[i]);
}

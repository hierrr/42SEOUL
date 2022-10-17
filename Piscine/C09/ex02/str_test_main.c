#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ft_split.c"
int main()
{
    char **ex05_split1;
	char *ex05_str1 = "  gh  ";
	ex05_split1 = ft_split(ex05_str1, " gh");
    printf("---test1---\n");
	printf("tab start\n");
	for (int j = 0; ex05_split1[j]; j++)
	{
		printf("tab[%d]: %s\n", j, ex05_split1[j]);
	}
	printf("tab end\n");
	free(ex05_split1);
    printf("\n\n");


    char **ex05_split2;
	char *ex05_str2 = "  gh  ";
    ex05_split2 = ft_split(ex05_str2, " ");
    printf("---test2---\n");
	printf("tab start\n");
    for (int j = 0; ex05_split2[j]; j++)
	{
		printf("tab[%d]: %s\n", j, ex05_split2[j]);
	}
	printf("tab end\n");
    free(ex05_split2);
    printf("\n\n");


    char **ex05_split3;
	char *ex05_str3 = "i1";
    ex05_split3 = ft_split(ex05_str3, "1234567");
    printf("---test3---\n");
	printf("tab start\n");
    for (int j = 0; ex05_split3[j]; j++)
	{
		printf("tab[%d]: %s\n", j, ex05_split3[j]);
	}
	printf("tab end\n");
    free(ex05_split3);
    printf("\n\n");

}


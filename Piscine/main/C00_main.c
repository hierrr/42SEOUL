#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include"ex00/ft_putchar.c"
#include"ex01/ft_print_alphabet.c"
#include"ex02/ft_print_reverse_alphabet.c"
#include"ex03/ft_print_numbers.c"
#include"ex04/ft_is_negative.c"
#include"ex05/ft_print_comb.c"
#include"ex06/ft_print_comb2.c"
#include"ex07/ft_putnbr.c"
#include"ex08/ft_print_combn.c"
int main()
{
	
	{
	printf("\n----------------------ex00----------------------------\n");
	printf("a : right answer\n");
	ft_putchar('a');
	printf(" : is output\n");
	}

	{
	printf("\n----------------------ex01----------------------------\n");
	printf("abcdefghijklnmopqrstuvwxyz : right answer\n");
	ft_print_alphabet();
	printf(" : is your output\n");
	}

	{
		printf("\n----------------------ex02----------------------------\n");
		printf("zyxwvutsrqpomnlkjihgfedcba : right answer\n");
		ft_print_reverse_alphabet();
		printf(" : is your output\n");
	}


	{
		printf("\n----------------------ex03----------------------------\n");
		printf("0123456789 : right answer\n");
		ft_print_numbers();
		printf(" : is your output\n");
	}

	{
		printf("\n----------------------ex04----------------------------\n");
		printf("if you input 100\n");
		ft_is_negative(100);
		printf(" : is your output\n");
		
		printf("if you input -1\n");
		ft_is_negative(-1);
		printf(" : is your output\n");
		
		printf("if you input 0\n");
		ft_is_negative(0);
		printf(" : is your output\n");
	}

	{
		printf("\n----------------------ex05----------------------------\n");
		ft_print_comb();
		printf(" : is your output\n");
	}

	{
		printf("\n----------------------ex06----------------------------\n");
		ft_print_comb2();
		printf(" : is your output\n");	
	}

	{
		printf("\n----------------------ex07----------------------------\n");
		printf("if you input 10000000\n");
		ft_putnbr(10000000);
		printf(" : is your output\n");
		
		printf("if you input -1\n");
		ft_putnbr(-1);
		printf(" : is your output\n");
		
		printf("if you input 0\n");
		ft_putnbr(0);
		printf(" : is your output\n");
	}

	{
		printf("\n----------------------ex08----------------------------\n");
		printf("if you input 2\n");
		ft_print_combn(4);
		printf(" : is your output\n");
	}
	return 0;
}

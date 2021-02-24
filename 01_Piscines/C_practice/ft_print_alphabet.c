#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}


void  ft_print_alphabet(void)
{
	char c = 'a';
	while(c <= 'z')
	{
		ft_putchar(c);
		c++;
	}
}


int main()
{
	ft_print_alphabet();
	return 0;
}


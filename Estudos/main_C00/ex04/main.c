#include <stdio.h>
void ft_is_negative(int n);

int main()
{
	int i;
	int x;

	i = -2;
	x = i;
	if (i == x)
	{
		ft_is_negative(i);
		printf("\n");
		
	}
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	if (argc == 3)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		int i = a;
		if (a > b)
			i = b;
		while (1)
		{
			if (a % i == 0 && b % i == 0)
			{
				printf("%d", i);
				break;
			}
			i--;
		}
	}
	printf("\n");
	return (0);
}
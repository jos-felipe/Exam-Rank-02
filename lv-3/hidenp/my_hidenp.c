#include <unistd.h>

int main(int argc, char **argv)
{
		if (argc == 3)
	{
		char *s1 = argv[1];
		char *s2 = argv[2];
		while (*s2 && *s1)
		{
			if (*s2 == *s1)
				s1++;
			s2++;
		}
		if (*s1 == '\0')
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}

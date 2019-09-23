#include <unistd.h>

int	main(void)
{
	int		n;
	char	c[7];
	char	count;

	n = 42;
	c[0] = n + 38;
	c[1] = c[0] + 17;
	c[2] = c[1] + 17;
	c[3] = n + 60;
	c[4] = c[1];
	c[5] = c[3] + 3;
	c[6] = c[2] + 2;
	count = -1;
	while (++count != 7)
		write(1, &c[count], 1);
	return(0);
}

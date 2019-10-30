void	do_magic2(char *string, char *table)
{
	int		s;
	int		t;
	int		c;
	char	n[3];
	char	z[100];

	s = 0;
	t = 0;
	while (string[s])
	{
		n[0] = string[s];
		n[1] = string[s + 1];
		n[2] = '\0';
		c = 0;
		while (string[s + c + 1])
			c++;
		if ((c % 3 == 0) && n[1] != '0')
		{
			ft_remove(ft_strstr(&table[0], &n[0]));
			ft_remove(ft_strstr(&table[0], ceros(c, 1, z)));
		}
		if (c % 3 == 2)
		{
			if (string[s] == '1')
				ft_remove(ft_strstr(&table[0], &n[0]));
			if (string[s] != '1')
				ft_remove(ft_strstr(&table[0], ceros(1, n[0], z)));
		}
		if (c > 0 && (c % 3 == 1) && !(string[s - 1] == '1'))
			ft_remove(ft_strstr(&table[0], &n[0]));
		s++;
	}
}

int		count_num(char *num)
{
	int cont;

	cont = 0;
	while (num[cont] != '\0')
		cont++;
	return (cont);
}

void	do_magic2(char *string, char *table)
{
	int len;
	int cont1;
	int cont2;
	int cont3;
	char *print;

	len = count_num(string);
}

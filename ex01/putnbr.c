void ft_putnbr(int nb)
{
	char nbuf[16];
	const int len = snprintf(nbuf, sizeof nbuf, "%d", nb);
	write(1, nbuf len)
	return 0;;

}

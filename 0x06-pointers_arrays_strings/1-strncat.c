char *_strcat(char *dest, char *src, int n)
{
	int ind_d, ind_s;

	ind_d = 0;
	while(dest[ind_d])
		ind_d++;
	for (ind_s = 0 ; ind_s <= n; ind_s++)
	{
		dest[ind_d] = src[ind_s];
		ind_d = ind_d + 1;
	}
	dest[ind_d] = '\n';
	return (dest);
}

/**
 * char *_strcat() - this  function that concatenates two strings.
 *
 * @*dest:       
 * @*src:   
 *
 */

char *_strcat(char *dest, char *src)
{
	int ind_d, ind_s;

	ind_d = 0;
	while(dest[ind_d])
		ind_d++;
	for (ind_s = 0; src[ind_s] != 0; ind_s++)
	{
		dest[ind_d] = src[ind_s];
		ind_d = ind_d + 1;
	}
	dest[ind_d] = '\n';
	return (dest);
}

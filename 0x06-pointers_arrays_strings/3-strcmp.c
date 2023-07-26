/**
 * _strcmp - function conpares two string
 * @s1: first string
 * @s2: Second string
 * Return: Always 0 (Success)
*/
int _strcmp(char *s1, char *s2)
{
	int i;
	int result = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
		{
			result = s1[i] - s2[i];
			break;
		}
		else if (s1[i] < s2[i])
		{
			result = s1[i] - s2[i];
			break;
		}
	}
	return (result);
}	

#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char	*str;

	if (argc == 1)
		return (0);
	str = (char *)malloc(strlen(argv[1]) + 1);
	if (!str)
		return (0);
	strcpy(str, argv[1]);
	for (int i = 0; i < 26; i++)
	{
		for (int j = 0; str[j] != 0; j++)
		{
			if (isalpha(str[j]))
			{
				str[j] += 1;
				if (str[j] == 'z' + 1 || str[j] == 'Z' + 1)
					str[j] -= 26;
			}
		}
		printf("%s\n", str);
	}
	return (0);
}

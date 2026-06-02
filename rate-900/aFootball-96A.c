#include <stdio.h>
#include <string.h>

int main()
{

	char word[101];
	int sumOfZeros = 0;
	int sumOfOnes = 0;
	int i = 0;
	if (fgets(word, 101, stdin) == NULL)
		return 1;

	word[strcspn(word, "\n")] = '\0';

	for (int i = 0; word[i] != '\0'; i++)
	{
		if (word[i] == '1')
		{
			sumOfZeros = 0;
			sumOfOnes++;
		}
		if (word[i] == '0')
		{
			sumOfZeros++;
			sumOfOnes = 0;
		}

		if (sumOfZeros >= 7 || sumOfOnes >= 7)
		{

			printf("YES\n");
			return 0;
		}
	}

	printf("NO\n");
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void letters(char *input)
{
	int i = 0;
	int max = -100;
	while (input[i] != '\0')
	{
		if (input[i] >= 'a' && input[i] <= 'z')
		{
			if (input[i] > max)
			{
				max = input[i];
			}
		}
		i++;
	}
	printf("%c", max);
}
int main()
{
	char text[1000];
	scanf("%[^\n]",&text);
	letters(text);
	return 0;
}
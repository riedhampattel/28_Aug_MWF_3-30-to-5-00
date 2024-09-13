#include<stdio.h>
int main()
{
	char ch;
	printf("\nEnter any alphabet = ");
	scanf("%c",&ch);//k
	
	switch(ch)
	{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("\n%c is a vowel",ch);
		break;
		default : printf("\n%c is a consonant",ch);
	}
	
	return 0;
}

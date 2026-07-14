#include<stdio.h>

int main() 
{
    char l;

    printf("Enter Any Character : ");
    scanf(" %c", &l);

    switch (l) 
	{
        case 'A':
        	 printf("%c is a vowel.", l);
            break;
        case 'E':
        	 printf("%c is a Vowel.", l);
            break;
        case 'I':
        	 printf("%c is a Vowel.", l);
            break;
        case 'O':
        	 printf("%c is a Vowel.", l);
            break;
        case 'U':
        	 printf("%c is a Vowel.", l);
            break;
        case 'a':
        	 printf("%c is a Vowel.", l);
            break;
        case 'e':
        	 printf("%c is a Vowel.", l);
            break;
        case 'i':
        	 printf("%c is a Vowel.", l);
            break;
        case 'o':
        	 printf("%c is a Vowel.", l);
            break;
        case 'u':
            printf("%c is a Vowel.", l);
            break;
        default:
			if ((l >= 'A' && l <= 'z') || (l >= 'a' && l <= 'z'))
    		{
    			printf("%c is a consonant.", l);
			}
            else
            {
            	printf("Invalid input.");
			}
	}
            


    return 0;
}


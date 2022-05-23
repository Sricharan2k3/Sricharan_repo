#include <stdio.h>
 
 int main()
 {
     char alphabet;
     printf("Enter an alphabet\n");
     scanf("%c", &alphabet);
     switch(alphabet)
            {
                case 'a':
                printf("%c is a vowel\n",alphabet);
                break;

                case 'e':
                printf("%c is a vowel\n", alphabet);
                break;

                case 'i':
                printf("%c is a vowel\n", alphabet);
                break;

                case 'o':
                printf("%c is a vowel\n", alphabet);
                break;

                case 'u':
                printf("%c is a vowel\n", alphabet);
                break;

                default:
                printf("%c is a consonant\n", alphabet);

            }
}
 
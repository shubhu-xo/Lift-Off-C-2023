#include<stdio.h>
#include<string.h>
int main()
{
    int consonants = 0, vowel = 0;
    char vowels[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    char s[1000];
    printf("Enter the striing: ");
    scanf("%s", s);
    for (int i = 0; i < strlen(s); i++)
    {
            if (s[i] == 65 || s[i] == 97 || s[i] == 69 || s[i] == 101 || s[i] == 73 || s[i] == 105 || s[i] == 79 || s[i] == 111 || s[i] == 85 || s[i] == 117)
                vowel++;
            else
                consonants++;
    }
    printf("No. of vowels is : %d\n", vowel);
    printf("No. of consonants is : %d\n", consonants);
}
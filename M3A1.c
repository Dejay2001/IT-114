#include<stdio.h>
#include<string.h>


int main()
{
    char str[100];
    int i = 0;

    printf("Input a sentence :  ");

    fgets(str, sizeof(str), stdin);


    while(str[i] != '0')
    {
        if(str[i] == 'a' ||
           str[i] == 'e' ||
           str[i] == 'i' ||
           str[i] == 'o' ||
           str[i] == 'u')

        {
            str[i] = str[i] - 32;
        }
        i++;
    }

    printf("String Converted: ");
    puts(str);

    stringCount(str);
}

void stringCount(char *str)

{
    int i, vowels = 0, consonants = 0;

    printf("\n  String Length: %d\n", strlen(str));

    for(i=0;str[i];i++)

    {
             if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        {

                            if( str[i] == 'A' || str[i] == 'a'
                             || str[i] =='E'  || str[i] == 'e'
                             || str[i] == 'I' || str[i] == 'i'
                             || str[i] == 'O' || str[i] =='o'
                             || str[i] == 'U' || str [i] == 'u')
                            vowels++;

                            else

                            consonants++;
        }
    }

    printf("Vowels : %d\n", vowels);
    printf("Consonants : %d\n", consonants);

        return 0;
}

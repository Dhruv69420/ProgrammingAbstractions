#include <stdio.h>

 

void rem(char *str)
{

    int count = 0;
 


    for (int i = 0; str[i]; i++)
        if (str[i] != ' ')
            str[count++] = str[i];
    str[count] = '\0';
}
 

int main()
{
    char str[999999];
    scanf("%[^\n]s",&str);
    rem(str);
    int l = 0;
    int h = strlen(str) - 1;
 
    
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("The given String is not a palindrome\n");
            return;
        }
    }
    printf("The given String is a palindrome\n");

    return 0;
}

#include <stdio.h>

int main()
{
    char str[999999];
    scanf("%[^\n]s",&str);
    int i=0,v=0,c=0;
    while(str[i]!='\0'){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            v++;
        else
          c++;
    i++;
        
    }
    printf("Vowels: %d Consonants:%d",v,c);

    return 0;
}


#include <stdio.h>

int main()
{
    char str[999999];
    scanf("%[^\n]s",&str);
    int index=0;
    int i=index;
    int c=0;
    while(str[i+1]!='\0'){
        c++;
        if(str[i]=='.'){
           if(c>=80){
               for(int j=index;j<c;j++){
                   printf("%c",str[j]);
               }
               index=c+1;
           }
           index=c+1;
           c=0;
        }
        i++;
    }

    return 0;
}



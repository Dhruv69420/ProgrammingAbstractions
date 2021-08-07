#include <stdio.h>
int len(char *str){
    int c=0,i=0;
    while(str[i]!='\0'){
        c++;
        i++;
    }
    
    return c;
}
int main()
{
    char str[999999];
    scanf("%[^\n]s",&str);
    int l=len(str);
    char rev[l];
    for(int i=0;str[i]!='\0';i++){
        
        printf("%c",str[l-1]);
        l--;
    }
    
   
    return 0;
}


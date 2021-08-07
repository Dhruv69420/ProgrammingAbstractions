#include <stdio.h>
int len(char *str){
    int c=0,i=0;
    while(str[i]!='\0'){
        c++;
        i++;
    }
    
    return c;
}
int strend(char *s , char* t) {
    int l1=len(s)-1;
    int l2=len(t)-1;
    int flag=0;

        for(int i=l2;i>=0;i--){
            if(t[i]!=s[l1]){
                return 0;
                
                
            }
        l1--;
        
    }
     if(flag==0)
        return 1;
        
}
int main()
{
    char str[999999], str2[999999];
    scanf("%s",&str);
    scanf("%s",&str2);
    printf("%d",strend(str,str2));
   
    return 0;

}



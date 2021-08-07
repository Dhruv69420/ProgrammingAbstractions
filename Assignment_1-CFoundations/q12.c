#include <stdio.h>

int strrindex( char* s , char* t ){
    int flag=0;
    int temp;
    int ind=-1;
        for(int i=0;s[i]!='\0';i++){
          if(s[i]==t[0]){
            temp=i+1;
        
            for(int j=1;t[j]!='\0';j++){
                if(s[temp]!=t[j])
                    break;
                if(t[j+1]=='\0'){
                    ind=i;
                    
                }
                temp++;        
            }
          }
        }
        
    
       return ind;
    
}

int main()
{
    char str[999999], str2[999999];
    scanf("%s",&str);
    scanf("%s",&str2);
    printf("%d",strrindex(str,str2));
    return 0;
}

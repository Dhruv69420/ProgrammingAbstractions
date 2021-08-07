#include <stdio.h>

int any(char* s1, char*s2){
        int temp;
        for(int i=0;s1[i]!='\0';i++){
          if(s1[i]==s2[0]){
            temp=i+1;
        
            for(int j=1;s2[j]!='\0';j++){
                if(s1[temp]!=s2[j])
                    break;
                if(s2[j+1]=='\0'){
                    return i;
                }
                temp++;        
            }
          }
        }
        return -1;
} 

int main()
{
    char str[999999], str2[999999];
    scanf("%s",&str);
    scanf("%s",&str2);
    printf("%d",any(str,str2));
        return 0;
}



#include <stdio.h>

int len(char *str){
    int c=0,i=0;
    while(str[i]!='\0'){
        c++;
        i++;
    }
    
    return c;
}

int mystrCmp(char *s1, char *s2){
    int l1=len(s1);
    int l2=len(s2);
    int c=0;
    
    for (int i = 0; s1[i]!='\0' || s2[i]!='\0'; ++i){
        c++;
       if(s1[i]!=s2[i]){
           
            if(l1>=l2){
                return 1;
            }
       
            else
                return -1;
       }  
    } 
    
    return 0;
   
   
}

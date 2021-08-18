#include <stdio.h>

int call(char str[],int i){
    int flag;
    char curr=str[i];
    char currc;
    switch(curr){
        case '{':{
            currc='}';
            break;
    }
    case '(':{
            currc=')';
            break;
    }case '[':{
            currc=']';
            break;
    }
    default:{return -1;}
    }
    if(str[i+1]!=currc){
       flag=call(str,i+1); 
    }
    else{
        if(i!=1)
          return i+1;
        
        else 
          return i+2;
    }
    if(flag==-1){
        return -1;
    }
    else if(str[i+flag]==currc){
        return i+flag+1;
    }
    
}

int main()
{
    char str[99999];
    scanf("%s",&str);
    int n=call(str,0);
    if(n!=-1)
       printf("The Parentheses are balanced");
    else
       printf("The Parentheses are not balanced");
}


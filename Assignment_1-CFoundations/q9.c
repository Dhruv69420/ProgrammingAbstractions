#include<stdio.h>

double mypow(double n,double i){
    if(i==0)
        return 1;
    for(int j=0;j<i-1;j++)
        n*=n;
    return n;    
}
void htoi(char* s)
{
    int decnum=0, rem, i=0, len=0;
    while(s[i]!='\0')
    {
        len++;
        i++;
    }
    len--;
    i=0;
    while(len>=0)
    {
        rem = s[len];
        if(rem>=48 && rem<=57)
            rem = rem-48;
        else if(rem>=65 && rem<=70)
            rem = rem-55;
        else if(rem>=97 && rem<=102)
            rem = rem-87;
        else
        {
            printf("\nYou've entered an invalid Hexadecimal digit");
            return 0;
        }
        decnum = decnum + (rem*mypow(16, i));
        len--;
        i++;
    }
    printf("\nEquivalent Decimal Value = %d", decnum);
}
int main()
{
    
    char hexnum[20];
    printf("Enter any Hexadecimal Number: ");
    scanf("%s", hexnum);
    htoi(hexnum);
    
    return 0;
}



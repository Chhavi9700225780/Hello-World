#include<stdio.h>
int main(){
    int s[100];
    scanf("%[^\n]%*c " , &s);
    printf("%s" , s);
    return 0;
}
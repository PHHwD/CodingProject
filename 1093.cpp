#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    char str[100];
    char str2[100];
    int i,k;
    gets(str);
    k=strlen(str);
    for(i=0;str[i]!='\0';i++){
        str2[i]=str[k-1-i];
        //cout<<str[i];
    }
    str2[i]='\0';
    cout<<str2;
    return 0;
}

#include<iostream>
#include<cstdio>
#include<stdio.h>

using namespace std;

int n,m,count1=1000000000,lowbound,upbound,mid;
double s[10010];
int main(){

    cin>>n>>m;

    for(int i=1;i<=n;i++) {
            scanf("%lf",&s[i]);
            s[i]*=1000;
    }
    while(count1-upbound>1){
        mid=(upbound+count1)>>1,lowbound=0;
        for(int i=1;i<=n;i++) {
                lowbound+=s[i]/mid;
        }
        if(lowbound>=m) {
                upbound=mid;
        }
        else count1=mid;
    }
    printf("%d.%d%d\n",upbound/1000,upbound%1000/100,upbound%100/10);
    return 0;
}

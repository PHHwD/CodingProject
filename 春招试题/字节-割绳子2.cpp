#include<iostream>
#include<cstdio>
#include<stdio.h>
#include<math.h>

using namespace std;

int n,m;
double s[10001];

bool test(double t){
    int num=0;
    for(int i=0; i<n; i++){
        num = num + (int)(s[i]/t);
    }
    return num>=m;
}


void maxlength(double lowbound, double upbound)
{
    for(int i=0; i<1000; i++){
        double mid = (lowbound+upbound)/2;
        if(test(mid)){
            lowbound = mid;
        }
        else upbound = mid;
    }
        printf("%.2f\n",floor(upbound*1000)/1000);
}


int main(){
    cin>>n>>m;
    double upbound=0;
    for(int i=0; i<n;i++){
        cin>>s[i];
        upbound=upbound+s[i];
    }
    maxlength(0,upbound/m);
}

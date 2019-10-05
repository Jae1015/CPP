#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,i,t,j;
    cin>>n;
    int a[n],f[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    int k=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            f[k]=a[i];
            a[i]=-1;
            k++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=-1)
        {
            f[k]=a[i];
            k++;
        }
    }
    for(i=0;i<n;i++)
        cout<<f[i]<<" ";
    return 0;
}

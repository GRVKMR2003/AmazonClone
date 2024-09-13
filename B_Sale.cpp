#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    sort(a,a+m);
    int cnt=0;
        cnt+=abs(a[0]+a[1]);
    
    cout<<cnt<<endl;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int p=1<<n;
    for(int i=0;i<p;i++){
        for(int j=0;j<n;j++){
            if(i & (1<<j)) cout<<arr[j]<<" ";
        }
        cout<<"\n";
    }
}

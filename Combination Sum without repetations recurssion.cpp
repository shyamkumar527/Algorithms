#include <bits/stdc++.h>
using namespace std;
void combinationsum(int ind,int n,int k,vector<int>& arr,vector<int>& ds){
    if(ind==n){
        if(k==0){
            for(auto it:ds) cout<<it<<" ";
            cout<<"\n";
        }
        return;
    }
    if(k>=arr[ind]){
        ds.push_back(arr[ind]);
        combinationsum(ind+1,n,k-arr[ind],arr,ds);
        ds.pop_back();
    }
    combinationsum(ind+1,n,k,arr,ds);
}
int main() {
	int n,k;
	cin>>n>>k;
	vector<int> arr(n);
	vector<int> ds;
	for(int i=0;i<n;i++) cin>>arr[i];
	combinationsum(0,n,k,arr,ds);
}

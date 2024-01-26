#include <bits/stdc++.h>
using namespace std;
void printpermutation(string s,vector<int>& frq,string ans){
    if(ans.size()==s.size()){
        cout<<ans<<"\n";
        return;
    }
    for(int i=0;i<s.size();i++){
        if(frq[i]==0){
            frq[i]=1;
            printpermutation(s,frq,ans+s[i]);
            frq[i]=0;
        }
    }
}
int main() {
    int n;
    string s;
    cin>>n>>s;
    vector<int> frq(n,0);
    printpermutation(s,frq,"");
}

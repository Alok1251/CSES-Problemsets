#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n;
    cin >> n;
    set<long long>sp;

    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        sp.insert(a);
    }
    cout<<sp.size();

}
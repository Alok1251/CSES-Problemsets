#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >>  s;

    int count=1;
    int maxi=INT_MIN;

    for(int i=1;i<s.size()+1;i++){
        if(s[i]==s[i-1]){
            count++;

        }
        else{
            maxi=max(count,maxi);
        count=1;
        }
        
    }
    cout<<maxi;
}
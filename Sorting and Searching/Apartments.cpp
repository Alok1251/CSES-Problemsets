#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n , m ,k;
    cin >> n >> m >> k;

    vector<long long>arr(n);
    vector<long long>sol(m);

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<m;i++){
        cin >> sol[i];
    }

    sort(sol.begin(),sol.end());
    sort(arr.begin(),arr.end());
    int count=0;
    int i=0,j=0;

    while(i<n && j<m){
            if(abs(arr[i]-sol[j])<=k){
                count++;
                i++,j++;
                
            }
            else{
                if(arr[i]-sol[j]>k){
                    j++;
                    
                }
                else{
                    i++;
                    
                }
            }
        }
    
    cout<<count;
}
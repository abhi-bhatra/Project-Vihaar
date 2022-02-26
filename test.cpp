#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;

        vector<int> arr(n);

        for(int & i : arr) cin >> i;

        map<int, int> freq;
        long long int ansr = 1;
        int mod = 1e9 + 7;
        
        for(int i : arr){
            freq[i]++;
        }

        for(auto i : freq){
            int f = i.second;
            ansr *= (f + 1);
            ansr %= mod;
        }
         ansr--;
         cout<< ansr << endl;
    }
    return 0;
}
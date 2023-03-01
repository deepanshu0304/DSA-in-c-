#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i =0;i<n;i++){
        cin>>v[i];
    }

    int num =0;
    for(int value:v){
        num = num*10 + value;
    }
    cout<<num;
    return 0;
}
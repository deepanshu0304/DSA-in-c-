#include<bits/stdc++.h>
using namespace std;

int main(){
    
int t;
cin>>t;
while(t--){
    int n;cin>>n;
    vector<pair <int , int>> v(n);
    for(int i =0;i<n;i++){
        cin>>v[i].first>>v[i].second;

    }

    int l,p;cin>>l>>p;
    for(int i =0;i<n;i++){
        v[i].first = l - v[i].first;

    }

    sort(v.begin() , v.end());
    int ans =0;
    int curr = p;
    priority_queue< int , vector<int> > pq;
}


    return 0;
} 
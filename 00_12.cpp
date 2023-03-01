#include<iostream>
using namespace std;
void func(int n){
    if(n==0)
    return;
    // cout<<n<<endl;  //if u uncomment  it will print 5 4 3 2 1
    func(n-1);
    cout<<n<<endl; //if you uncomment this it will  print 1 2 3 4 5

}

int main(){
    func(5);
    return 0;
}
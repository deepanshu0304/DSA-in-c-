#include<iostream>
using namespace std;

int main(){
    int arr[10];
   arr[0] = 6;
   arr[1] = 56;
    cout<<arr<<endl;                                  
    cout<<arr[0]<<endl;                                  
    cout<<*arr<<endl;
    cout<<*(arr + 1);                                  
// char c = 'A';
// cout<<(int)c;...... IT will print the ascii value of A...
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int a =3;
    string s = "Hallo";
    int b;
    b = a + s[1]; //  here no need to write (int)s[1]...as int has high preference so already all calculation are in int.....   
    cout<<b;
    return 0;
}
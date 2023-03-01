#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    getline(cin, input);
    cout<<input.size()<<endl;
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == ' ')
        {
            input[i] = 10;
        }
        else
            input[i] = input[i] - 32;
    }
    cout << input;
    
    return 0;
}
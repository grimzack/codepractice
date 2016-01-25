#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{

    int age = 0;

    while(1)
    {
        cout << "Please enter your age: ";
        cin >> age;


        if ( age <  20 )
        {
            cout << "You're young!\n";
        }
        else if ( age < 60 )
        {
            cout << "You're perfectly average.\n";
        }
        else
        {
            cout << "You're old!\n";
        }
    }
    return 0;
}

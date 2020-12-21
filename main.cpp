#include <iostream>

using namespace std;

int main()
{
    cout << "Press Ctrl-C to stop" << endl;
    int lenghtOfArray;
    cout << "Enter the number of numbers you want to enter: ";
    cin >> lenghtOfArray;
    int a[lenghtOfArray];
    for (int i = 0; i < lenghtOfArray; i++)
    {
        cout << "Enter a number: ";
        cin >> a[i];
    }
    cout << "This is what you've entered:" << endl;
    cout << a;

    return 0;
}

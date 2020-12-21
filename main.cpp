#include <iostream>

using namespace std;

int main()
{
    cout << "Press Ctrl-C to stop" << endl;
    cout << "You will enter 3 numbers" << endl;
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter a number: ";
        cin >> a[i];
    }
    cout << "This is what you've entered:" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}

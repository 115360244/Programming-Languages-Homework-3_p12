#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int square(int y);

int main()
{
    int x;

    for (x = 1; x <= 10; x++)
    {
        cout << square(x) << " ";
    }

    cout << endl;

    system("pause");
    return 0;
}

int square(int y)
{
    return y * y;
}
#include <iostream>

using namespace std;

int main()
{
    int x=4;
    int y=6;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;
}

void swap(int &x,int &y)
{
int temp = x;
x= y;
y = temp;
}

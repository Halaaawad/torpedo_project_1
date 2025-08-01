#include <iostream>

using namespace std;

int main()
{
    int arr1[10], arr2[10];
    cout << "Enter first array (10 numbers)" << endl;
    for(int i=0; i<10; i++)
    {
        cout << "enter number at index"<< i<< endl;
        cin>> arr1[i];
    }

    cout << "Enter second array (10 numbers)" << endl;
    for(int i=0; i<10; i++)
    {
        cout << "enter number at index"<< i<< endl;
        cin>> arr2[i];
    }

    bool flag = false;
    for(int i=0; i<10; i++)
    {
        if(arr1[i]!=arr2[i]){
            cout << "The arrays are not identical"<<endl;
            flag = true;
            break;}
    }
    if(!flag)
        cout << "The arrays are identical"<<endl;
    return 0;
}

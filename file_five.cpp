#include <iostream>

using namespace std;

int main()
{
    int arr[10];
    cout << "Enter array (10 numbers)" << endl;
    for(int i=0; i<10; i++)
    {
        cout << "enter number at index"<< i<< endl;
        cin>> arr[i];
    }

    int x;
    cout<< "Enter number you want to search for" << endl;
    cin >> x;
    bool flag = false;
    for(int i=0; i<10; i++)
    {
        if(arr[i]==x){
            cout << "The number was found at index "<< i<< endl;
            flag = true;
            break;}
    }
    if(!flag)
        cout << "number not found"<<endl;
}

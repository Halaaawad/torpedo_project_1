#include <iostream>

using namespace std;

int main()
{
    string bin1;
    string bin2;
    cout << "Enter first string" << endl;
    cin>> bin1;

    cout << "Enter second string" << endl;
    cin>> bin2;

    for (int i = a.length() - 1; i >= 0; i--) {
        int bit1 = a[i] - '0';
        int bit2 = b[i] - '0';
        int sum = bit1 + bit2 + carry;

        result += (sum % 2) + '0';
        carry = sum / 2;
    }

    if (carry) result += '1';

    reverse(result.begin(), result.end());
    cout << "The output is" << result << endl;
}

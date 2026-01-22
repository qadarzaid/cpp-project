#include <iostream>
using namespace std;
bool palindrome(int n) {
    int original = n;
    int reverse = 0;
    int digit;
    while (n > 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    return (reverse == original);
}
void analysisNumber(int n) {
    int i, sum = 0, d, count = 0;
    for (i = 1; n > 0; i++) {
        d = n % 10;
        n = n / 10;
        sum += d;
        count++;
    }
    cout << "the sum is = " << sum << endl;
    cout << count << endl;
}
bool prime( int n) {
    for (int i = 2; i <= n /2 ; i++) {

        if (n % i == 0) {
            return false;
        }
        else{
            return true;
        }
    }
}
int main()
{
    int a;
    cout << "enter your number = ";
    cin >> a;
    analysisNumber(a);
    if (palindrome(a)) {
        cout << "OK" << endl;
    }
    else cout << "NO!"<<endl;
    if (prime(a)) {
        cout << "is prime"<<endl;
    }
    else cout << "is not prime"<<endl;
}


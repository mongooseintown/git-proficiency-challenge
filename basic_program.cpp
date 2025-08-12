#include <iostream>
using namespace std;
unsigned long long factorial(int n)
{
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}
int main()
{
    cout << "Hello, World!" << endl;
    int num;
    cin>>num;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}
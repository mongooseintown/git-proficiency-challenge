#include <iostream>
using namespace std;
unsigned long long factorial(int n)
{
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}
unsigned long long fibonacci(int n)
{
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    cout << "Hello, World!" << endl;
    int num;
    cin>>num;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    cout << "Fibonacci of " << num << " is " << fibonacci(num) << endl;
    return 0;
}
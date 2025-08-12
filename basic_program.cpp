#include <bits/stdc++.h>
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
bool isPrime(int num)
{
    if (num < 2) return false;
    for (int i = 2; i * i <= num; ++i)
    {
        if (num % i == 0) return false;
    }
    return true;
}
int nthPrime(int n)
{
    int count = 0, num = 2;
    while (count < n) {
        if (isPrime(num)) count++;
        if (count == n) return num;
        num++;
    }
    return -1;
}
int main()
{
    cout << "Hello, World!" << endl;
    int num;
    cin>>num;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    cout << "Fibonacci of " << num << " is " << fibonacci(num) << endl;
    cout << "nth Prime number is " << nthPrime(num) << endl;
    return 0;
}
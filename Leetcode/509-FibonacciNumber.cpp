// https://leetcode.com/problems/fibonacci-number/

#include<iostream>

// TC: O(2^(n-1)) -> O(2^n), SC: O(n)
// Actual TC of recursive Fibonacci is O(1.618^n) -> It is called as Golden Ratio
int fibo(int n)
{
    if(n==0||n==1)
    {
        return n;
    }
    return fibo(n-1) + fibo(n-2);
}

int main()
{
    int n=7;
    std::cout<<"Factorial is: "<<fibo(n);
    return 0;
}
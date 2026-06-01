// https://leetcode.com/problems/count-primes/editorial/

// Same approach from Maths/Math1.cpp : Sieve of Eratosthenes
#include<iostream>
#include<vector>

int primeNumberPrint(int& n)
{
    std::vector<bool> vec(n+1,true); // Initially consider every number to be prime
    int count=0;
    for(int i=2;i<n;i++)
    {
        if(vec[i])
        {
            for(int j=2*i;j<n;j=j+i)
            {
                vec[j]=false;
            }
            count++;
        }
    }
    return count;
}

int main()
{
    int n=53;
    std::cout<<"\nNumber of prime numbers: "<<primeNumberPrint(n);
    return 0;
}
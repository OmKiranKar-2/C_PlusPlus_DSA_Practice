// https://leetcode.com/problems/palindrome-number/

#include<iostream>
#include<climits>

bool palindromeNumber(int n)
{
    int revNumber=0,ogNumber=n;
    if(revNumber>INT_MAX/10) return 0;
    while(n>0) // Palindrome Number can never be negative
    {
        revNumber = revNumber*10 + n%10;
        n /= 10;
    }
    return revNumber==ogNumber;
}

int main()
{
    std::cout<<"Is the number palindromic: "<<palindromeNumber(353);
    return 0;
}
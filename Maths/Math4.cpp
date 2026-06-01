// LCM of two number
// a*b = gcd(a,b) * lcm(a,b)
#include<iostream>

int gcd(int a, int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}

int lcm(int a, int b)
{
    int lcm = (a*b)/gcd(a,b);
    return lcm;
}

int main()
{
    std::cout<<"LCM is: "<<lcm(28,20);
    return 0;
}
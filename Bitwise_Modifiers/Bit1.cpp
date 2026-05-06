#include<iostream>
int main()
{
    int a=4, b=7;
    std::cout<<"a&b: "<<(a&b)<<"\na|b: "<<(a|b)<<"\na^b: "<<(a^b); //AND, OR, XOR
    std::cout<<"\na<<"<<(a<<1)<<"\na>>"<<(a>>1); // Left Shift, Right Shift
    // a<<b -> a * (2 raise to b). 10<<2 -> 10 * (2^2) -> 40
    std::cout<<"\n10<<2: "<<(10<<2);
    return 0;
}
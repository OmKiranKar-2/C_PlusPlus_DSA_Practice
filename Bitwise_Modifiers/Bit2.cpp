#include<iostream>

int a=17;  // Global Variable

int main()
{
    std::cout<<10*7%6<<std::endl; // Operator precedence [L to R for calculation]
    std::cout<<"Global Variable: "<<a<<std::endl;
    std::cout<<sizeof(int)<<std::endl<<sizeof(short int)<<std::endl;
    unsigned int b=-10;
    std::cout<<"Unsigned b: "<<b;
    return 0;
}
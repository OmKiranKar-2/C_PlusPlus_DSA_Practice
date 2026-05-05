// Convert Binary to Decimal
#include<iostream>
int main()
{
    long binaryNumber;
    int decimalNumber=0;
    std::cout<<"Enter Binary Number: ";
    std::cin>>binaryNumber;
    int pow=1;
    while(binaryNumber>0)
    {
        decimalNumber += (binaryNumber%10)*pow;
        binaryNumber /= 10;
        pow *= 2;
    }
    std::cout<<decimalNumber<<" "<<0+(-0);
    return 0;
}
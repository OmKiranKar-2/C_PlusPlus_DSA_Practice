// Convert Decimal to Binary
#include<iostream>

int main()
{
    int decimalNumber;
    std::cout<<"Enter Number: ";
    std::cin>>decimalNumber;
    long binaryNumber=0;
    int pow = 1;
    while(decimalNumber>0)
    {
        binaryNumber += (decimalNumber%2)*pow;
        decimalNumber /= 2;
        pow *=10;
    }
    // int c=0;
    // while(decimalNumber>0)
    // {
    //     binaryNumber = binaryNumber*10 + decimalNumber%2;
    //     if(binaryNumber==0) c++;
    //     decimalNumber /=2;
    // }
    // for(int i=0;i<c;i++)
    // {
    //     binaryNumber *= 10;
    // }
    std::cout<<binaryNumber;
    return 0;
}
#include<iostream>
#include<vector>
void func1(int a) // Pass By Value
{
    a = 20;
}
void func2(int* a) // Pass By Reference Using Pointer
{
    *a=20;
}
void func3(int& a) // Pass By Reference Using Alias
{
    a=30;
}
int main()
{
    int a=10;
    func1(a);
    std::cout<<a<<std::endl;
    func2(&a);
    std::cout<<a<<std::endl;
    func3(a);
    std::cout<<a<<std::endl;
    
    int arr[5] = {1,2,3,4,5};
    int* ptr = arr;
    std::cout<<"Value: "<<*ptr<<", Address: "<<ptr<<std::endl;
    ptr++; // Increase by +4 Bytes since integer pointer is used
    std::cout<<"Value: "<<*ptr<<", Address: "<<ptr<<std::endl;
    ptr--; // Decrease by -4 Bytes
    std::cout<<"Value: "<<*ptr<<", Address: "<<ptr<<std::endl;
    ptr += 3; // Increase by +(4*3)=+12 Bytes
    std::cout<<"Value: "<<*ptr<<", Address: "<<ptr<<std::endl;

    return 0;
}
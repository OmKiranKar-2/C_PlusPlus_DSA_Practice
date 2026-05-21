#include<iostream>
int main()
{
    int a=10; // Also equal to a = *(&a)
    // Pointer
    int* ptr1 = &a;
    std::cout<<"Address & value of a: "<<ptr1<<" , "<<*ptr1<<std::endl;
    std::cout<<"Address of pointer 1: "<<&ptr1<<std::endl;
    // Double Pointer
    int** ptr2 = &ptr1;
    std::cout<<"Address of pointer 2: "<<&ptr2<<std::endl;
    std::cout<<"Derefence once from pointer 2: "<<*ptr2<<std::endl; // Returns ptr1 value
    std::cout<<"Derefence twice from pointer 2: "<<**ptr2<<std::endl; // Returns a value
    // NULL Pointer
    int* ptr3 = NULL;
    std::cout<<"Address of pointer3: "<<ptr3; // 0 or 0x0 will be returned
    return 0;
}
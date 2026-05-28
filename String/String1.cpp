#include<iostream>
int main()
{
    std::string s; // Not a primitve data type, rather s is the object of the class string
    std::cout<<s.capacity(); // By default the capacity of string is 15
    s = "Hello World";
    std::cout<<"String before changing: "<<s<<std::endl;
    s = "Bro";
    std::cout<<"String after changing: "<<s<<std::endl; // Contiguous in nature, and dynamic unlike dynamic array
    std::cout<<"Size is: "<<s.size()<<std::endl; // s.length() also works
    
    std::cout<<"Input String: ";
    getline(std::cin,s,'\n');
    std::cout<<"Entered String is: "<<s<<std::endl;

    std::string::iterator it = s.begin();
    std::cout<<"The element is: "<<*(it+2);
    return 0;
}
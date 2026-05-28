#include<iostream>
#include<cstring> // For Character Array

int main()
{
    char ch1[] = {'h','e','l','l','o','\0'}; // To convert char array to string, use '\0' at end which denotes termination
    std::cout<<"String and Number of Characters: "<<ch1<<" "<<strlen(ch1)<<std::endl;
    std::cout<<sizeof(ch1)/sizeof(char)<<std::endl; // Returns 6 due to last character being '\0'

    char str[] = "World"; // String literals: The value cannot be changed
    std::cout<<"String Literal and Number of characters: "<<str<<" "<<strlen(str)<<std::endl;
    std::cout<<sizeof(str)/sizeof(char)<<std::endl; // Returns 6, as last char is '\0' even in string
    str[0] = tolower(str[0]); // Convert to lower case
    str[1] = toupper(str[1]); // Convert to upper case
    std::cout<<"String with changed case: "<<str<<std::endl;

    char ch2[100];
    std::cout<<"Enter String: ";
    std::cin.getline(ch2,100,'\n'); // To input a string. (string,length,delimiter). If no delimiter written, then by default new line '\n' acts as a delimiter
    std::cout<<ch2;

    return 0;
}
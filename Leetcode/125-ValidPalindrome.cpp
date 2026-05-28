// https://leetcode.com/problems/valid-palindrome/

#include<iostream>
#include<algorithm>

bool isAlphaNumeric(char c)
{
    if((tolower(c)>='a' && tolower(c)<='z') || (c>='0' && c<='9'))
    {
        return true;
    }
    return false;
}

bool isPalindrome(std::string& s)
{
    int start=0,end=s.size()-1;
    // std::transform(s.begin(),s.end(),s.begin(),::tolower); // Convert to lower case
    while(start<end)
    {
        if(!isAlphaNumeric(s[start]))
        {
            start++;
            continue;
        }
        if(!isAlphaNumeric(s[end]))
        {
            end--;
            continue;
        }
        // if(!isalnum(s[start])) // STL Function to check if the element is alphanumeric
        // {
        //     start++;
        // }
        // else if(!isalnum(s[end]))
        // {
        //     end--;
        // }
        if(tolower(s[start])==tolower(s[end]))
        {
            start++;end--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    std::string s = "A man, a plan, a canal: Panama"; // True, as amanaplanacanalpanama is a palindrome
    std::cout<<isPalindrome(s);
    return 0;
}
// https://leetcode.com/problems/reverse-string/description/

#include<iostream>
#include<cstring>
#include<algorithm>
int main()
{
    char s[] = {'h','e','l','l','o','\0'}; // In vector, you do not need '\0' at the end
    // std::reverse(s,s+strlen(s)); // Shorter approach using STL algorithm
    int start = 0, end = strlen(s)-1;
    while(start<end)
    {
        std::swap(s[start++],s[end--]);
    }
    
    for(int i=0;i<strlen(s);i++)
    {
        std::cout<<s[i]<<' ';
    }
    return 0;
}
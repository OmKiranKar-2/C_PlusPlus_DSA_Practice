// https://leetcode.com/problems/remove-all-occurrences-of-a-substring/

#include<iostream>
#include<vector>

std::string removeOccurences(std::string s,std::string part)
{
    while(s.find(part)<s.size()) // while(s.find(part)!=std::string::npos) is also valid
    {
        s.erase(s.find(part),part.size());
    }
    return s;
}

// // To find the index where string and substring are same
// int findIndex(std::string s,std::string part)
// {
//     if(s.size()<part.size());
//     for(int i=0;i<s.size()-part.size()+1;i++)
//     {
//         int j=0,x=i;
//         while(j<part.size())
//         {
//             if(s[x]==part[j])
//             {
//                 x++; j++;
//             }
//             else if(s[x]!=part[j])
//             {
//                 break;
//             }
//         }
//         if(j==part.size()) 
//         {
//             std::cout<<i;
//             return i;
//         }
//     }
//     return s.size();
// }

int main()
{
    std::string s = "daabcbaabcbc", part = "abc"; // Output:dab
    std::cout<<removeOccurences(s,part);

    return 0;
}
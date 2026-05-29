// https://leetcode.com/problems/reverse-words-in-a-string/

#include<iostream>
#include<algorithm>

std::string reverseWords(std::string s)
{
    reverse(s.begin(),s.end()); // Reverse the whole string
    int i=0;
    while(i<s.size())
    {
        int lastMark=i;
        while(s[lastMark]==' ') // Delete extra space
        {
            lastMark++;
        }
        if(lastMark>i) s.erase(s.begin()+i, s.begin()+lastMark);
        
        int firstMark=i;
        while(s[i]!=' ') // To reverse each word
        {
            i++;
        }
        lastMark=i-1;

        reverse(s.begin()+firstMark, s.begin()+lastMark+1); // Reverse each words
        i++;
    }
    if(s[0]==' ') s.erase(0,1);
    if(s[s.size()-1]==' ') s.erase(s.end()-1,s.end());
    return s;
}

// // Another Approach:
// std::string reverseWords(std::string s)
// {
//     int firstMark,lastMark,size=s.size();
//     for(int i=0;i<size;i++)
//     {
//         if(s[i]==' ')
//         {
//             continue;
//         }
//         firstMark=i;
//         while(i<size && s[i]!=' ')
//         {
//             i++;
//         }
//         lastMark=i;
//         std::string subStr = s.substr(firstMark, lastMark-firstMark)+" ";
//         s.insert(size,subStr);
//     }
//     s.erase(0,size);
//     return s.substr(0,s.size()-1);
// }

int main()
{
    std::string s= " the sky   is blue "; // Output: "blue is sky the"
    std::cout<<reverseWords(s);
}
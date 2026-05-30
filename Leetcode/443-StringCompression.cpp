// https://leetcode.com/problems/string-compression/

#include<iostream>
#include<vector>
#include<unordered_map>

int stringCompression(std::vector<char>& chars)
{
    // std::string s;
    int i=0,idx=0;
    while(i<chars.size())
    {
        int count=0;
        char ch=chars[i];
        while(i<chars.size() && ch==chars[i])
        {
            count++;
            i++;
        }
        if(count==1)
        {
            // s+= ch;
            chars[idx++]=ch;
        }
        else
        {
            // s += ch + std::to_string(count);
            chars[idx++]=ch;
            for(char c: std::to_string(count))
            {
                chars[idx++]=c;
            }
        }
    }
    // std::cout<<s<<std::endl;
    //return s.size();
    chars.resize(idx);
    return idx;
}

// // Similar Approach, but changes in inside for loop, which leads to edge cases but correct approach
// int stringCompression(std::vector<char>& chars)
// {
//     std::string s;
//     if(chars.size()==0 || chars.size()==1) return chars.size();
//     for(int i=0;i<chars.size()-1;i++) // You can write as i=1;i<chars.size();i++ and make following changes
//     {
//         int count=1;
//         while(i<chars.size()-1 && chars[i]==chars[i+1])
//         {
//             count++;
//             i++;
//         }
//         if(count==1)
//         {
//             s+= chars[i];
//         }
//         else
//         {
//             s += chars[i] + std::to_string(count);
//         }
//     }
//     if(chars[chars.size()-1]!=chars[chars.size()-2])
//     {
//         s += chars[chars.size()-1];
//     }
//     std::cout<<s<<std::endl;
//     for(int i=0;i<s.size();i++)
//     {
//         chars[i]=s[i];
//     }
//     return s.size();
// }

// // Misunderstood the test cases a bit, but liked the approach so kept it
// int stringCompression(std::vector<char>& chars)
// {
//     std::unordered_map<char,int> m;
//     for(int i=chars.size()-1;i>=0;i--)
//     {
//         m[chars[i]]++;
//     }
//     std::unordered_map<char,int>::iterator it;
//     std::string s;
//     for(it=m.begin();it!=m.end();it++)
//     {
//         if((*it).second == 1)
//         {
//             s += char((*it).first);
//         }
//         else
//         {
//             s += char((*it).first) + std::to_string((*it).second);
//         }
//     }
//     for(int i=0;i<s.size();i++)
//     {
//         chars[i]=s[i];
//     }
//     std::cout<<s<<std::endl;
//     return s.size();
// }

int main()
{
    std::vector<char> chars = {'a','a','b','b','d','c','c','c'}; // Output: 6(return), chars={'a','2','b','2',c,'3'}
    std::cout<<stringCompression(chars)<<std::endl;
    for(int i=0;i<chars.size();i++)
    {
        std::cout<<chars[i];
    }
    return 0;
}
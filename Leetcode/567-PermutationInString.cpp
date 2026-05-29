// https://leetcode.com/problems/permutation-in-string/

#include<iostream>
#include<map>
#include<unordered_map>
#include<algorithm>

bool isPermutationPresent(std::string s1, std::string s2) // TC: O(N*M)
{
    if(s1.size()>s2.size()) return false;
    int freq1[26]={0};
    for(int i=0;i<s1.size();i++)
    {
        freq1[s1[i]-'a']++;
    }
    for(int i=0;i<s2.size()-s1.size()+1;i++)
    {
        int j=i, freq2[26]={0},k;
        while(j<s1.size()+i)
        {
            freq2[s2[j++]-'a']++;
        }
        for(k=0;k<26;k++)
        {
            if(freq1[k]!=freq2[k]) break;
        }
        if(k==26) return true;
    }
    return false;
}

// // Use Unordered Map: More efficient if instead of lowercase, uppercase, special characters or numbers are also present
// bool isPermutationPresent(std::string s1, std::string s2)
// {
//     if(s1.size()>s2.size()) return false;
//     std::unordered_map<char,int> m1;
//     for(int i=0;i<s1.size();i++)
//     {
//         m1[s1[i]]++;
//     }
//     for(int i=0;i<s2.size()-s1.size()+1;i++)
//     {
//         int j=i;
//         std::unordered_map<char,int> m2;
//         while(j<s1.size()+i)
//         {
//             m2[s2[j++]]++;
//         }
//         if(m1.size()==m2.size())
//         {
//             std::unordered_map<char,int>::iterator it;
//             for(it=m1.begin();it!=m1.end();it++)
//             {
//                 if( (*it).second != m2[it->first] )
//                 {
//                     break;
//                 }
//             }
//             if(it==m1.end()) return true;
//         }
//     }
//     return false;
// }

// // Another approach using Maps which is easy to implement but have higher TC
// if(s1.size()>s2.size()) return false;
// for(int i=0;i<s2.size()-s1.size()+1;i++)
// {
//     int x=i,j=0;
//     std::map<char,int> m1,m2;
//     while(j<s1.size())
//     {
//         m1[s1[j++]]++;
//         m2[s2[x++]]++;
//         // m1.emplace(s1[j],count(s1.begin(),s1.end(),s1[j]));
//         // m2.emplace(s2[x],count(s2.begin()+i,s2.begin()+i+s1.size(),s2[x]));
//         // j++; x++;
//     }
//     if(m1 == m2) return true;
// }
// return false;

int main()
{
    std::string s1 = "ab", s2 = "eidbaooo"; // Output: True
    std::cout<<isPermutationPresent(s1,s2);
    return 0;
}
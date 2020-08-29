#include<bits/stdc++.h>

class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
    int char_cnt=0;
    string result;
    for(int i=0; i<s.length();i++)
    {
        if(s[i]!='-')
        {
            char_cnt++;
        }
    }
    int group_no=(char_cnt/k)+((char_cnt%k==0) ? 0 : 1);
    int group_len=((char_cnt%k==0)?k:(char_cnt%k));
    char_cnt=0;
    for(int i=0; i<s.length();i++)
    {
        if(s[i]!='-')
        {
            if(char_cnt<group_len){result+=toupper(s[i]);}
            else if(char_cnt==group_len)
            {
                group_len+=k;
                result+='-';
                result+=toupper(s[i]);}
            char_cnt++;
        }
   }
   return result;
}
};

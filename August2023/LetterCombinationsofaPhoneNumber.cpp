class Solution {
public: //mik
    vector<string>result;

    void solve(int idx,string &digits,unordered_map<char,string>&mp,string &temp)
    {

        if(idx>=digits.size())
        {
            result.push_back(temp);
            return ;
        }

        char ch=digits[idx];

        string str= mp[ch];

        for(int i=0;i<str.length();i++)
        {
            //do
            temp.push_back(str[i]);
            solve(idx+1,digits,mp,temp);
            temp.pop_back();
        }



    }

    vector<string> letterCombinations(string digits) {
        if(digits.length()==0)
        {
            return {};
        }

        //storing values in map

        unordered_map<char,string>mp;

        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";

        string temp="";
        solve(0,digits,mp,temp);

        return result;
    }
};

// https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping

class Solution {
public:
    string freqAlphabets(string s) {
        string temp , res;
        for(int i = 0 ; i < s.size() ; i ++)
        {
            if(i < s.size()-2)
            {
                if(s[i+2] == '#')
                {
                    temp += s[i];
                    temp += s[i+1];
                    i += 2;
                }
                else
                {
                    temp += s[i];
                }
            }
            else
            {
                temp += s[i];
            }

            if(temp.size() == 2)
            {
                // getting the first number and mult it by 10  to get correct corresponding char pos
                // then adding the second number to it to get the right character pos
                // then adding it to 'a' to get the correct character value 
                res += (((temp[0] - '0')*10) +((temp[1] - '0')-1)) + 'a';
            }
            else
            {
                // adding the number pos to 'a' to get the correct character value 
                res += ((temp[0] - '0')-1) + 'a';
            }
            temp = "";
        }
        return res;
    }
};
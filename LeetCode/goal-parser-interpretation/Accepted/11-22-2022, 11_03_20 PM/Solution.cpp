// https://leetcode.com/problems/goal-parser-interpretation

class Solution {
public:
    string interpret(string command) {
        string s ;
        for(int i = 0 ; i < command.size() ; i ++)
        {
            if(command[i] == 'G')
                s += 'G';
            else if(i < command.size()-1)
            {
                if(command[i] == '(' && command[i+1] == ')')
                {
                    s += 'o';
                    i ++;
                }
                else
                {
                    s = s + "al";
                    i += 3;
                }
            }
        }
        return s ;
    }
};
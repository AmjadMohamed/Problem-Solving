// https://leetcode.com/problems/unique-email-addresses

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        int cnt = 0;
        set<string> st;
        for(auto it : emails)
        {
            string localname = "";
            string domainname = "";
            for(int i = 0 ; i < it.size() ; i ++)
            {
                if(it[i] == '@' || it[i] == '+')
                {
                    break;
                }
                else
                {
                    if(it[i] != '.')
                        localname += it[i];
                }
            }

            for(int i = it.size()-1 ; i >= 0 ; i--)
            {
                if(it[i] == '@')
                {
                    domainname += '@';
                    break;
                }
                else
                {
                    domainname += it[i];
                }
            }
            reverse(domainname.begin() , domainname.end());
            st.insert(localname + domainname);
        }
        return st.size();
    }
};
class Solution {
public:
    int maxDepth(string s) 
    {
        /* Using stack S.C O(N)*/

        // int depth = 0;
        // stack<char> st;
        // for(char p : s)
        // {
        //     if(p == '(') st.push(p);
        //     else if(p == ')')st.pop();

        //     depth = max(depth,(int)st.size());
        // }
        // return depth;

        /* Using varable S.C. O(1) */

        int tmp = 0;
        int depth = 0;

        for(char c : s)
        {
            if(c == '(') tmp++;
            else if(c == ')') tmp--;

            depth = max(tmp,depth);
        }

        return depth;
    }
    //:)
};
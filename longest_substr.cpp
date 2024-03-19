#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "abacba";
    int count = 0;
    int ans = 0;
    set<char> st;
    
    for(char p : s)
    {
        if(st.find(p) != st.empty())
        {
            ans = max(ans,count);
            count = 0;
            st.empty();
        }
        else
        {
           st.insert(p);
           count++;
        }

    }
    
    cout<<ans;
    
    return 0;
}

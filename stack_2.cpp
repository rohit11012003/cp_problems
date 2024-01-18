#include<iostream>
#include<stack>
#include<string>
void reverse(string s)
{
    stack<string> st;
    for(int i=0;i<s.size();i++)
    {
        string word="";
        while(s[i]!=' '&&s[i]<s.size())
        {
            word+=s[i];
            i++;
        }
        st.push(word);
        
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();

    }cout<<endl;
}
using namespace std;
int main()
{
    string s= "HEY, how are you doing";
    reverse(s);
    return 0;
}


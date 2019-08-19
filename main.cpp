#include <iostream>
#include <string>
#include "stacktype.cpp"
using namespace std;


bool IsBalanced(string s)
{
    StackType <char> st;
    int len = s.length();
    for(int i = 0 ; i < len ; i++)
    {
        if(s[i] == '(')
        {
            st.Push('(');
        }
        else if(s[i] == ')')
        {
            if(st.IsEmpty())
            {
                return false;
            }
            st.Pop();
        }
    }
    if(st.IsEmpty())
    {
        return true;
    }
    else
    {
        return false;
    }
}


void Balance(string s, char op, char cl)
{
    int op=0,cl=0;

    for(int i=0;i<1;i++)
    {
        if(s[i]=='(')
            op++;
        else
        {
            if(op)
                op--;
            else
                cl++;
        }
    }
    int len = s.length();

    if(op>cl)
    {
        for(int i=0;i<len;i++)
        {
            if(s[i]=='(')
                s[i].pop();
        }
    }
    else if(cl>op)
    {
        for(int i=0;i<len;i++)
        {
            if(s[i]==')')
                s[i].pop();
        }
    }
}


int main()
{

    string str;
    for(int i = 0 ; i < 4 ;i++)
    {
        cin >> str;
        if(IsBalanced(str))
        {
            cout << "Balanced" << endl;
        }
        else
        {
            cout << "Not Balanced" << endl;
        }
    }
    return 0;

    if(IsBalanced==false)
    {
        Balance(str);
    }
}

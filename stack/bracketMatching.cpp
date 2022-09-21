/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-09-02 21:02:03
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-09-03 14:44:48
 */
/*
  C++ Program to check for balanced parentheses in an expression using stack.
  Given an expression as string comprising of opening and closing characters
  of parentheses - (), curly braces - {} and square brackets - [], we need to 
  check whether symbols are balanced or not. 
*/
#include<iostream>
#include<stack>
#include<string>
using namespace std;
// Function to check whether two characters are opening 
// and closing of same type. 
bool ArePair(char opening,char closing)
{
	if(opening == '(' && closing == ')') return true;
	else if(opening == '{' && closing == '}') return true;
	else if(opening == '[' && closing == ']') return true;
	return false;
}
bool isValid(string s) {
        stack<char> S;
        for (int i = 0; i < s.size();++i){
            //保证遍历每个元素，但是只处理括号
            if(s[i] == '('||s[i] == '{'||s[i]=='[')
                S.push(s[i]);
            else if(s[i] == ')'||s[i] == '}'||s[i]==']'){
                if(S.empty()){
                    cout << "1";
                    return false;
                }
                else if(S.top() == '(' && s[i] == ')')
                    S.pop();
                else if(S.top() == '{' && s[i] == '}')
                    S.pop();
                else if(S.top() == '[' && s[i]== ']')
                    S.pop();
                else {
                    cout << "3";
                    return false;
                }
            }
         
        }
        cout << "2";
        return S.empty() ? true : false;
    }
int main()
{
	/*Code to test the function AreParanthesesBalanced*/
	string expression;
	cout<<"Enter an expression:  "; // input expression from STDIN/Console
	cin>>expression;
	if(isValid(expression))
		cout<<"Balanced\n";
	else
		cout<<"Not Balanced\n";
}
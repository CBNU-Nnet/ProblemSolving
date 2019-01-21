#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

void saveResult(char infix);
int getPriority(char infix);
stack<char> st;
string infix;
string result;
string temp;

int resultIdx = 0;

int main(void){
  int i, size, priority;
  char postfix = ' ';

  cin >> temp;
  infix = temp;
  size = temp.size();
  result.resize(size);

  for(i=0; i<size; i++){
    priority = getPriority(infix[i]);
    postfix = infix[i];

    switch(postfix){
      case '+':
      case '-':
      case '*':
      case '/':
        if(st.empty()){
          st.push(postfix);
        } else {
          while (!st.empty() && getPriority(st.top()) >= priority) {
                  saveResult(st.top());
                  st.pop();
          } st.push(postfix);
        }
      break;

      case '(':
        st.push(postfix);
      break;

      case ')':
        while(!st.empty() && st.top() != '('){
        saveResult(st.top());
          st.pop();
        } st.pop();
      break;

      default:
        saveResult(postfix);
      break;
      }
    }

  for(i=0; i<resultIdx; i++){
    cout << result[i];
  }
  while(!st.empty()){
    cout << st.top();
    st.pop();
  }
}

int getPriority(char infix){
  switch (infix) {
    case '+':
    case '-':
      return 1;
      break;
    case '*':
    case '/':
      return 2;
      break;
    default:
      return 0;
      break;
  }
}

void saveResult(char infix){
  result[resultIdx] = infix;
  resultIdx++;
}

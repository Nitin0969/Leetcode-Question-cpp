
string s;
 stack<char>s;
        for(int i=0;i<str.length();i++){
            char c = str[i];
            if(c == '(' || c == '{' || c == '['){
                s.push(c);
            }
            else if(c == ')'){
                if(s.empty() || s.top()!='('){
                    return false;
                }
                s.pop();
            }
            else if(c == '}'){
                if(s.empty() || s.top()!='{'){
                    return false;
                }
                s.pop();
            }
            else if(c == ']'){
                if(s.empty() || s.top()!='['){
                    return false;
                }
                s.pop();
            }
        }
        return s.empty();
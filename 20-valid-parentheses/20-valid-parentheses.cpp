class Solution {
public:
    bool isValid(string s) {
        stack<char> validParentheses;
        
        for(int i = 0; i < s.length(); i++){
            char currentChar = s[i];
            
                switch(currentChar){
                        
                    case '(':
                    case '{':
                    case '[':
                            validParentheses.push(currentChar);
                            break;
                    case '}':
                            if(validParentheses.empty() || validParentheses.top() != '{'){
                                return false;
                            }else{
                                validParentheses.pop();
                            }
                            break;
                    case ']':
                            if(validParentheses.empty() || validParentheses.top() != '['){
                                return false;
                            }else{
                                validParentheses.pop();
                            }
                            break;
                    case ')':
                            if(validParentheses.empty() || validParentheses.top() != '('){
                                return false; 
                            }else{
                                validParentheses.pop();
                            }
                            break;
                    default:
                        break;
                }
            }
        return validParentheses.empty();
        }
    };
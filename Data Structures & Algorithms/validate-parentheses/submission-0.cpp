class Solution {
public:
    bool isValid(string s) {
        stack<char> item;
        for(int i=0;i<s.length();i++){
            char c=s[i];
            // if it is an opening bracket
            if( c=='(' || c=='['|| c=='{'){
                item.push(c);
            }
            else{
                //closing bracket
                if(item.empty()) return false;
                
                char top = item.top();
                if((top=='(' && c==')') ||
                (top=='[' && c==']') ||
                (top=='{' && c=='}')){
                    item.pop();
                }
                else{
                    return false;
                }
            }
            
        }
        return item.empty();
    }
};

class Solution {
public:
    bool isValid(string s) {
        stack<char>tmp;
        int n=s.size();
        map<char,char>tem={{'(',')'},{'{','}'},{'[',']'}};
        for(int i=0;i<n;i++){
            if(s[i]=='['||s[i]=='{'||s[i]=='('){
                tmp.push(s[i]);
            }
            if(s[i]==']'||s[i]=='}'||s[i]==')'){
                if(tmp.empty()){
                    return false;
                }
                if(s[i]!=tem[tmp.top()]){
                    return false;
                }
                tmp.pop();
            }
        }
        if(!tmp.empty()){
            return false;
        }
        return true;
    }
};

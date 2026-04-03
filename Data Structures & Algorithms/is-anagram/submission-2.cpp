class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>tmp1;
        map<char,int>tmp2;
        for(char c:s){
            tmp1[c]++;
        }
        for(char c:t){
            tmp2[c]++;
        }
        if(s.size()==t.size()&&tmp1==tmp2){
            return true;
        }
        return false;
    }
};

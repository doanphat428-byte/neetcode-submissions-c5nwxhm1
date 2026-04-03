class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         map<string,vector<string>>tmp;
         for(string x:strs){
            string t=x;
            sort(x.begin(),x.end());
            tmp[x].push_back(t);
         }
         vector<vector<string>>result;
         for(auto a:tmp){
            result.push_back(a.second);
         }
         return result;

        }
};

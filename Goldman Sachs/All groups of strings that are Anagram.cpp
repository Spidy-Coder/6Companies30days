// PROBLEM 1:- Given an array of strings, all groups of strings that are anagram

//GFG SOLUTION

//Accepted

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        
        vector<vector<string>>ans;
        unordered_map<string, vector<string>> map;
        
        for(auto str:string_list){
            string word = str;
            sort(word.begin(),word.end());
            map[word].push_back(str);
        }
        
        for(auto it:map){
            ans.push_back(it.second);
        }
        
        return ans;
    }
};

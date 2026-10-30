class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = (strs.size());
        for(int i=0; i<n; i++){
            for(int j = i+1; j<n-1; j++){
                if(strs[i].size() > strs[j].size()){
                    swap(strs[i], strs[j]);
                }
            }
        }
        string s = "";
        for(int i=0; i<strs[0].size(); i++){
            int j=0;
            while(j != n){
                if(strs[0][i] == strs[j][i]){
                    j++;
                }else{
                    return s;
                }
            }
            s+=(strs[0][i]);
        }
        return s;
    }
};
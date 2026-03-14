class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        
        vector<int>common(26,0);
        
        //count character of first words
        for(auto u:words[0]){
            common[u-'a']++;
        }

        for(int i=1;i<words.size();i++){

            vector<int>count(26,0);

            //count character of 1--->last  words
            for(auto u:words[i]){
                count[u-'a']++;
            }

            //compare them and keep the min 
            for(int j=0;j<26;j++){
                common[j]=min(common[j],count[j]);
            }
        }

        

        vector<string>ans;
        // build result using loop
        for(int i=0;i<26;i++){
            for(int j=0;j<common[i];j++){
                ans.push_back(string(1,i+'a'));   
            }
        } 


       return ans;
    }
};
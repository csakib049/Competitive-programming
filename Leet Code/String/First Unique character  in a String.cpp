//optimized 


class Solution {
public:
    int firstUniqChar(string s) {
        
        map<int,int>countCharacter;

        for(int i=0;i<s.size();i++){
            countCharacter[s[i]-'a']++;  //stores the frequency of characters in a map 
        }

        for(int i=0;i<s.size();i++){
            if(countCharacter[s[i]-'a']==1)return i;
        }

        return -1;
    }
};


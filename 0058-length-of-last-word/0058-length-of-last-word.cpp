class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0;
        if(s.size() == 1 and s[0] != ' '){
            return 1;
        }
         if(s.size() == 1 and s[0] == ' '){
            return 0;
        }
        for(int i = s.size() - 1; i >= 0; i--){
            
            if(s[i] != ' '){
                cnt++;           
            } 
            else if(cnt == 0){
                continue;
            }
            else{
                break;
            }
        }
        return cnt;
    }
};
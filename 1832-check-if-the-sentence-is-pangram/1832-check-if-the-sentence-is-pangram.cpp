class Solution {
public:
    bool checkIfPangram(string sentence) {
     
        
        map<char,int>count;
        
        
        for(int i=0;i<sentence.size();i++){
            count[sentence[i]]++;
        }
        if(count.size()==26){
            return true;
        }
        else{
            return false;
        }
        
    }
};
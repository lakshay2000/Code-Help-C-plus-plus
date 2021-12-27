class Solution {
    
private:
    bool valid(char ch){
        if ( (ch >='a' && ch <='z') || (ch >='A' && ch <='Z') || (ch >='0' && ch <='9')){
            return 1;
        }
        return 0;
    }
public:
    bool isPalindrome(string s) {
        int i=0;
        string temp="";
        
        for(int j=0;j<s.length();j++){
            if(valid(s[j])){
                temp.push_back(s[j]);
            }
        }
        
        for(int j=0;j<temp.length();j++){
            temp[j]=tolower(temp[j]);
        }
        
        int st = 0;
    int e =temp.length()-1;
    while (st <= e)
    {
        if (temp[st]!=temp[e])
        {
            return 0;
        }
        else
        {
            st++;
            e--;
        }
    }
        return 1;
       
            
    }
};
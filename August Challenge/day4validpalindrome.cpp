class Solution {
public:
    bool isPalindrome(string s) {
       
        int j=s.length()-1;
        int i=0;
        
        while(i<=j)
        {
            while(i<j&&!isalpha(s[i])&&!isdigit(s[i]))i++;
            while(i<j&&!isalpha(s[j])&&!isdigit(s[j]))j--;
            if(tolower(s[i])==tolower(s[j]))
            {i++;
             j--;
            }
            else{
                return false;
            }
            
        }
          
        return true;
    }
      
};

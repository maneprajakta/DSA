class Solution {
public:
    bool detectCapitalUse(string word) {
     
     return (all_of(word.begin(),word.end(),::isupper) || all_of(next(word.begin()),word.end(),::islower) );   
        
    }
};

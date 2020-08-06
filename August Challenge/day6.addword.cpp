class Node {
public:
    bool isEnd;
    Node* children[26];
    Node() {
        isEnd = false;
        for(int i=0;i<26;i++)
            children[i] = NULL;
    }
};
class WordDictionary {
public:
    /** Initialize your data structure here. */
    Node* root;
    WordDictionary() {
        root = new Node();
    }
    /** Adds a word into the data structure. */
    void addWord(string word) {
        Node* temp = root;
        for(int i=0;i<word.length();i++)
        {
            if(temp->children[word[i] - 'a'])
                temp = temp->children[word[i] - 'a'];
            else {
                Node* n = new Node();
                temp->children[word[i] - 'a'] = n;
                temp = temp->children[word[i] - 'a'];
            }
        }
        temp->isEnd = true;
    }
    
    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    bool searchWord(Node* temp, string &word, int i)
    {
        if(i == word.length())
            return (temp->isEnd) ? 1 : 0;
        bool ans=0;   
        if(word[i] != '.')
        {
            if(!(temp->children[word[i] - 'a']))
                return false;
            return searchWord(temp->children[word[i] - 'a'], word, i+1);
        }
        else if(word[i] == '.')
        {
            for(int j=0;j<26;j++)
            {
                if(temp->children[j])
                    ans = ans || searchWord(temp->children[j], word, i+1);
            }
        }
        return ans;
    }    
    bool search(string word) {
        return searchWord(root, word, 0);
    }
};

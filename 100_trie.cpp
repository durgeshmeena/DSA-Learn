#include<bits/stdc++.h>
using namespace std;

class Trie{

public:

    class TrieNode{
    public:
        bool isWord;
        int count;
        vector<TrieNode*> children; 

        TrieNode(){
            isWord = false;
            count = 0;
            children = vector<TrieNode*>(26);
        }   
    };

    TrieNode* root;
    Trie(){
        root = new TrieNode;
    }






    void insert(string word){

    }

    bool search(string word){

    }

    bool startWith(string word){

    }





};

int main(){

    int n; cin >> n;
    auto obj = new Trie;

    string s;

    while(n--){
        cin >> s;
        obj->insert(s);
    }

    string prefix; cin >> prefix;

    cout << obj->startWith(prefix) << endl;

}
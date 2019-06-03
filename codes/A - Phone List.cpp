#include <bits/stdc++.h>
using namespace std;

const int ALPHABET_SIZE = 10;
int counts=0,flag=0;
/// trie node
struct TrieNode
{
    struct TrieNode *children[ALPHABET_SIZE];

    /// isEndOfWord is true if the node represents
    /// end of a word
    bool isEndOfWord;
};

/// Returns new trie node (initialized to NULLs)
struct TrieNode *getNode(void)
{
    struct TrieNode *pNode =  new TrieNode;

    pNode->isEndOfWord = false;

    for (int i = 0; i < ALPHABET_SIZE; i++){
        pNode->children[i] = NULL;
        //cout<<pNode->children[i]<<endl;
    }

    return pNode;
}


void insert(struct TrieNode *root, string key)
{

    //cout<<key<<endl;

    struct TrieNode *pCrawl = root;
//flag=0;
int index;
    for (int i = 0; i < key.length(); i++)
    {
        //cout<<key[i]<<endl;
         index = key[i]-'a';
        //cout<<index<<" "<<endl;
        if (!pCrawl->children[index]){
               // cout<<index<<endl;
           // if(counts==0) {flag=1;}
        //counts++;
            pCrawl->children[index] = getNode();
            //cout<<getNode()<<endl;
        }


//cout<<pCrawl->isEndOfWord<<endl;
if(pCrawl->isEndOfWord==true){
    flag=1;
}
if(flag==1){
//if(i<key.length()-1){

pCrawl = pCrawl->children[key[i-1]-'a'];
//}
}
else{
    pCrawl=pCrawl->children[index];
}
       // cout<<pCrawl<<endl;
    }


//cout<<(pCrawl+1)->isEndOfWord<<endl;
    /// mark last node as leaf
    pCrawl->isEndOfWord = true;
}



bool search(struct TrieNode* root, string key){
struct TrieNode* pCrawl = root;

for (int i = 0; i < key.length(); i++) {
        int index = key[i] - 'a';
        cout<<pCrawl->isEndOfWord<<endl;
        if (pCrawl->isEndOfWord==true){
            cout<<key.length()<<endl;
            return false;
        }

        pCrawl = pCrawl->children[index];
    }
return true;
}


/// Driver
int main()
{
    int t,n;



            counts=0;
            flag=0;
//    keylength=0;
            scanf("%d",&n);
    string s[n+1];
    struct TrieNode *root = getNode();

vector< pair<string,int> >sizes;

    for(int i=0;i<n;i++){
        cin>>s[i];
sizes.push_back(make_pair(s[i],s[i].size()));
        //cout<<s[i]<<endl;
    }
    //sort(sizes.begin(),sizes.end());

vector< pair<string,int> >::iterator it;
it=sizes.begin();
    for (int i = 0; i < n; i++){
        //cout<<i<<endl;
        insert(root,it->first);
        it++;
    }
    it=sizes.begin();
bool finds;
    for(int i=0;i<n;i++){
 finds=search(root,it->first);
 cout<<it->first<<endl;
 it++;
//if(finds==false){break;}
    }

              /*  if(finds==false){
                    printf("NO\n");
                }
                else{
                    printf("YES\n");
                }*/

    return 0;
}




#include<bits/stdc++.h>
using namespace std;
#define s second
#define f first
struct Node
{
    int ascii;
    int fre;
    Node *left;
    Node *right;
};
vector<Node*> v;
int main()
{
    int n, asc, f;
    string word, ans="";
    while(cin>>n&& n!=-1)
    {
        for(int i=0; i<n; i++)
        {
            cin>>asc>>f;
            Node *a = new Node;
            a->fre = f;
            a->ascii = asc;
            a->left = NULL;
            a->right = NULL;
            v.push_back(a);
        }
        reverse(v.begin(), v.end());
        while(v.size()>1)
        {
            auto pt = v.begin();
            for(auto i= v.begin()++; i!= v.end(); i++)
            {
                if((*i)->fre <= (*pt)->fre)
                {
                    pt = i;
                }
            }
            Node *temp = new Node;
            int a = (*pt)->fre;
            temp->ascii = 0;
            temp->left = *pt;
                        v.erase(pt);

            auto pt2 = v.begin();
            for(auto i= v.begin()++; i!= v.end(); i++)
            {
                if((*i)->fre <= (*pt2)->fre)
                {
                    pt2 = i;
                }
            }

            temp->right = *pt2;
            temp->fre = a + (*pt2)->fre;
            v.push_back(temp);
            v.erase(pt2);

        }
        int i=0;
        string s;
        cin>>s;

        while(i<s.size()){
            Node *b = v[0];
           while(b->left != NULL){
            if(s[i] == '0')b = b->left;
            else b = b->right;
            i++;
           }


            cout<<char(b->ascii);
        }
        cout<<endl;
        v.clear();

    }
}

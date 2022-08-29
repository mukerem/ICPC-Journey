#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
queue<node*> q;
struct node *root;
void insertBST(int x)
{
    struct node *temp = new node;
    temp->data = x;
    temp->left = NULL;
    temp->right =NULL;
    if(root == NULL)
    {
       root = temp;
       q.push(root);
    }
    else
    {
        if(q.front()->left== NULL)
        {
            q.front()->left= temp;
            q.push(temp);
        }
        else
        {
            q.front()->right= temp;
            q.pop();
            q.push(temp);
        }
    }
}
int findMAX(struct node* r)
{
    if(r == NULL)return 0;
    int h = max(r->data+findMAX(r->left),
                r->data+findMAX(r->right));

    return h;
}int s=0;
int done(struct node*r, int h)
{
    if(r->left == NULL || r->right == NULL) return 0;
    else{
        r->left->data = (h+r->left->data)-findMAX(r->left);
        r->right->data = (h+r->right->data)-findMAX(r->right);
        s+=(r->left->data+r->right->data);
        done(r->left,(h-r->left->data));
        done(r->right,(h-r->right->data));
    }

    return s;
}
int x =0;
int pre(node *r)
{
    if(r==NULL) return 0;
    else{
         x+= r->data;
        pre(r->left);
        pre(r->right);
    }
    return x;
}

int main()
{
    insertBST(0);
    int i, k, x; cin>>k;
    for(i=1; i<(int)pow(2,k+1)-1; i++)
    {
        cin>>x;
        insertBST(x);
    }
    int h = findMAX(root);

    cout<<done(root,h);
    //cout<<pre(root)<<endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

struct node
{
    int value;
    struct node *left;
    struct node *right;

    node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

// depth first traversal -> inorder, preorder , postorder

// inorder traversal
void display_inOrder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    display_inOrder(root->left);
    cout << root->value << " ";
    display_inOrder(root->right);
}
// preorder traversal
void display_preOrder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->value << " ";
    display_preOrder(root->left);
    display_preOrder(root->right);
}
// post order traversal
void display_post(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    display_post(root->left);
    display_post(root->right);
    cout << root->value << " ";
}
//***********dfs ends here******************** */

// breadth first traversal bfs
void display_bfs(struct node *root)
{
    queue<node *> q;
    vector<vector<int>> p;
    if (root == NULL)
        return;
    q.push(root);
    while (!q.empty())
    {
        vector<int> level;
        int size = q.size();
        for (int i = 0; i < size; i++)
        {

            node *front = q.front();
            if (front != NULL)
            {
                q.push(front->left);
                q.push(front->right);
                level.push_back(front->value);
            }
            q.pop();
        }
        p.push_back(level);
    }

    for (int i = 0; i < p.size(); i++)
    {
        for (int j = 0; j < p[i].size(); j++)
        {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }
}
int maxDepth(node *root)
{
    if (root == NULL)
        return 0;

    int left = maxDepth(root->left);
    int right = maxDepth(root->right);
    int ans = max(left, right) + 1;
    return ans;
}
int main()
{
    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    display_inOrder(root);
    cout << endl;

    display_preOrder(root);
    cout << endl;

    display_post(root);
    cout << endl;

    display_bfs(root);

   cout << maxDepth(root) << endl;
    return 0;
}
    void func(Node* root, vector<pair<int,int>> &v,int level){
        if(root->left == NULL && root->right == NULL){
            v.push_back({level,root->data});
            return;
        }
        if(root->left) func(root->left,v,level+1);
        if(root->right) func(root->right,v,level+1);
    }
public:
    int getCount(Node *root, int k)
    {
        //code here
        vector<pair<int,int>> v;
        func(root,v,1);
        sort(v.begin(),v.end());
        int ans = 0;
        for(auto it: v){
            if(it.first <= k){
                ans += 1;
                k-=it.first;
            }else break;
        }
        return ans;
    }
};
#include<iostream>
#include<vector>
using namespace std;
struct Tree{
    int data;
    Tree *left,*right;
};
Tree* newnode(int data){  // CREATING A NODE WITH DEFINED VALUES AND RETURNING ITS ADDRESS
    Tree* root=new Tree();
    root->data=data;
    root->left=NULL;
    root->right=NULL;
    return root;
 
}
void returnPath(Tree* root,vector<int>&vect,int& ct){
    vect.push_back(root->data);// ADDING THE VALUE 
    if(root->data==31){ct=2;return;}        // HERE I M SIMPLY CHECKING THE VALUE;
    if(root->left!=NULL){
         returnPath(root->left,vect,ct);
         if(ct==2){return ;}        // IF COUNT FOUND IT MEANS NO NEED TO PROCEED ANY FURTHER
    }
    if(root->right!=NULL){
          returnPath(root->right,vect,ct);
          if (ct == 2) { // IF COUNT FOUND IT MEANS NO NEED TO PROCEED ANY FURTHER
            return;
          }
    }
    vect.pop_back(); // FOR WRONG PATH I M DISCARDING THE VALUES;
    return ;
}
int main(){
    vector<int>vect;
    int ct=1;
    Tree* root=newnode(1);
    root->left=newnode(3);
    root->right=newnode(2);
    root->left->left=newnode(5);
    root->left->right=newnode(6);
    root->right->left=newnode(7);
    root->right->right=newnode(9);
    root->right->right->right=newnode(11);
    returnPath(root,vect,ct);
    if(vect.size()==0){cout<<"NOT FOUND:";}
    for (auto i = 0; i < vect.size(); i++) {
      cout << vect[i] << " ";
    }
}

// coding ninjas

/*
void inOrder(TreeNode *root, vector<int> &ans){



    //base case

    if(root == NULL){



        return;

    }



    inOrder(root -> left, ans);

    ans.push_back(root -> data);

    inOrder(root -> right, ans);



}

void merge(vector<int> store1, vector<int> store2, vector<int> &ans){



    int i = 0;

    int j = 0;

    int k = 0;



    while(i < store1.size() && j < store2.size()){



        if(store1[i] < store2[j]){



            ans[k++] = store1[i];

            i++;

        }

        else{



            ans[k++] = store2[j];

            j++;

        }

    }

    while(i < store1.size()){



        ans[k++] = store1[i];

        i++;

    }

    while(j < store2.size()){



        ans[k++] = store2[j];

        j++;

    }

}

vector<int> mergeBST(TreeNode *root1, TreeNode *root2)

{

    vector<int> store1;

    vector<int> store2;



    inOrder(root1, store1);

    inOrder(root2, store2);



    vector<int> ans(store1.size()+store2.size());



    merge(store1, store2, ans);



    return ans;

}==========================================================================================================


void convertBSTtosortedDLL(TreeNode *root, TreeNode *head){
  if (root == NULL) {
    return NULL;
  }
  convertBSTtosortedDLL(root->right, head);

  root->right=head;
  if (head != NULL) {
    head->left = root;
  }
  head=root;

  convertBSTtosortedDLL(root->left, head);
}



TreeNode mergeLL (TreeNode *head1 , TreeNode *head2){

    TreeNode *head=NULL;
    TreeNode *tail=NULL;

    while(head1!=NULL && head2!=NULL){
        if(head1->data <head2->data){
            if(head==NULL){
               head=head1;
               tail=head1;
               head1=head1->right;
            }
            else{
                tail->right=head1;
                head1->left=tail;
                tail=head1;
                head1=head1->right;
            }
        }
        else{
                 if(head==NULL){
                head=head2;
                tail=head2;
                head2=head2->right;
            }
            else{
                tail->right=head2;
                head2->left=tail;
                tail=head2;
                head2=head2->right;
            }
        }
    }

    while(head1!=NULL){
         tail->right=head1;
                head1->left=tail;
                tail=head1;
                head1=head1->right;
    }

    while(head2!=NULL){
         tail->right=head2;
                head2->left=tail;
                tail=head2;
                head2=head2->right;
    }
    return head;
}

int countnodes(TreeNode *head){
    int count=0;
    TreeNode *temp=head;

    while(temp!=NULL){
        count++;
        temp=temp->right;
    }
    return count;
}

TreeNode sortedLLtoBST(TreeNode *head,int n){
    // basecase
    if(n<=0|| head==NULL )
    {
        return NULL;
    }
    TreeNode *leftpart = sortedLLtoBST(head,n/2);

    TreeNode * root= head;
    root->left=left;

    head=head->next;

    root->right=sortedLLtoBST(head,n-n/2-1);

    return root;
    }


*/
// GFG
/*
void flatten(Node *root)
    {
        Node* curr=root;
        while(curr!=NULL){

            if(curr->left){


                Node* prev = curr->left;

                while(prev->right){

                    prev = prev->right;
                    }
                prev->right=curr->right;

                curr->right=curr->left;

                //curr->left=NULL ye bhi kar sakte hai left part ko null karne ke liye

            }

            curr=curr->right;
        }
        // left part null kara diya
        curr=root;
        while(curr!=NULL){
            curr->left=NULL;
            curr=curr->right;

        }
    }
*/
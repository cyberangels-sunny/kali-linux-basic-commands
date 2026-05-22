#include<stdio.h>
#include<stdlib.h>

typedef struct tree{
     struct tree *left;
    int data ; 
    struct tree*right;
}tree;
 



 tree *createbranch(){
  tree *new;
  int x; 
  new =(tree*) malloc(sizeof(tree));
  printf("enter a data (or -1 for skip node):");
  scanf("%d",&x);
  if(x == -1){
    
  return 0;
  }
     new->data = x;
        new->left = createbranch();
        // printf("enter a right node data :");
        new->right= createbranch();
  
  return new;
 
}



// reverse of createbranch function 
void displ(tree *copy){

if(copy == NULL){
  return;
}

printf("data :%d \n",copy->data);

displ(copy->left);



  displ(copy->right);

}   




int main(){
     tree *root;
  root = createbranch();
 
    
   
    displ(root);
  

    return 0;
}    // session switch at 2 : 43 am ,, -- cyberangels sunny 
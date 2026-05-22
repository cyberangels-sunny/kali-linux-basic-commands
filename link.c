// singli linked list 

// #include<stdio.h>
// #include<stdlib.h>
// struct node {
//  int data ;
//  struct node *add; 
// };

// struct node *start ; // START HERE 

// struct node *create(){ // confusion 
//   struct node *store;
//   store = (struct node*)malloc(sizeof(struct node));
//   printf("enter your data :  ");
//   scanf("%d",&store->data);
//    store->add = 0;
//    return store;
// }


// void insertst(){
//   struct node *su;
//   su = create();
//   if (start == 0){
//     start = su ; 
//   }else {
//      su ->add = start;
//     start = su;
//   }
   
// }

// void insertmid(){
//     struct node *new;
//     new = create();

//     if (start == 0){
//         start = new;
//     }else {
//       struct node *ano;
//       ano = start ; 
//       int x; 
//       printf("where do you want to place : ");
//       scanf("%d",&x);
//       while(ano->add->data != x){
//         ano = ano->add;
//       }
//       struct node *copy;
//      copy = ano->add;
//      ano->add=new;
//      new->add = copy;



//     }

// }

// void display (){
  
//   struct node *disp ; 
//   disp = start ; 
//   while (disp != 0 ){
//     printf(" %d ",disp->data);
//     disp = disp->add;
//   }
  

// }



// void insertend(){
//   struct node *t;
//   t = create();
// if(start == 0)
// start = t;
// else {
//   struct node *trav; 
//   trav = start ; 
//   while (trav->add != 0 ){
//     trav = trav->add;
//   }
//   trav->add = t;

// }

// }

// void delst(){
   
// if (start == 0){
//   printf("error !!!! : not anyone node to delete \n");
//   printf("enter a node and after delete \n ");
// }else {
//   struct node *del;
//   del = start ; 
//   start= del->add;
//   del->add=0;
//   free(del);
  
// }


// }

// void delmid(){
//     if(start == 0 ){
//         printf("there is no node to delete ");
//     }
//     else {
//         struct node *mem;
//         mem = start ; 
//          int x ; 
//          printf("where do you want to delete : ");
//          scanf("%d",&x);
//         while(mem->add->data != x){
//             mem = mem->add;
//         }
//         struct node *o;
         
//         o = mem->add->add;
//         mem->add = o ; 
//         mem->add->add = 0;
        
//     }
// }

// void delend(){
//   struct node *j;
//   if(start == 0){
//     printf("enter a data before delete end !!!!! \n ");
//   }else{
//     j = start;
//     while(j->add->add != 0 ){
//       j=j->add;
//     }
//     j->add=0;
//   }
//   free(j);
  
// }

// int main (){
   
// while (1){
//   printf("\n1--insert from start \n"); // act
//   printf("2--insert from middle \n");// act 
//   printf("3--insert from end \n");// act
//   printf("4--delete from start \n");// act
//   printf("5--delete from middle \n");
//   printf("6--delete from end \n");
//   printf("7--display \n");// display
//   printf("8--exit \n");
  
//   printf("\nenter your choice : ");
//   int select ; 
//   scanf("%d",&select);

//   if(select == 1 ){
//     insertst();
//   }else if (select == 2 ){
//     insertmid();
//   }else if (select == 3 ){
//     insertend ();
//   }else if (select == 4){
//     delst();
//   }else if (select == 5){
//     delmid();
//   }else if (select == 6){
//     delend();
//   }else if (select == 7 ){
//     display();
//   }else if (select ==8 ){
//     printf("exited \n ");
//     return 0 ; 
//   }else {
//     printf("please select the between 1 to 8 (-_-) \n  ");
//   }
// }

 
   

//   return 0; 
// }



// doubly linked list 

// #include<stdio.h>
// #include<stdlib.h>

// struct node {
//   struct node *prev;
//   char name [100];
//   struct node *next;
// };

// struct node *start = 0 ;

// struct node *create (){
//      struct node *new ; 
//      new = (struct node* )malloc (sizeof (struct node));
//       new->prev=0;
//       new->next=0;
      
//       char name [100];
//       printf("enter a name : ");
//       scanf("%99s",new->name);

//       return new;
    
// }

// void instst(){
//     struct node *n; 
//     n = create();
//     if (start == 0 ){
//       start = n ;
//     }
//     else{
//       struct node *copy; 
//       copy = start ; 
//       copy->prev=n;
//       n->next=copy;
//       start=n;
      
//     }
//     printf(" your data = %s",n->name);
   

// }

// void delst(){
//  if (start==0){
//   printf("there is no node to delete \n ");
//  }else if (start->prev==0&&start->next ==0){
//    start->next=0;
//    start = 0;
//  }
//  else{
//   struct node *copy,*n;
//   copy = start;
//   copy->next->prev = 0;
//   n = copy->next;
//   copy->next=0;
//   start=n;
  
//  }

// }

// void instend(){

//    struct node *k,*i;
//  i = start;
//  k = create();
//   if (start == 0){
//     start = k;
//   }
//   else{
//      struct node *p;
     
//  while(i->next!=0){
//      i = i->next; // lock 
//  }
 
//  i->next= k;
//  k->prev = i;
// }

// }

// void delend(){
  

//   if(start==0){
//      printf("no node to delete !!! \n ");
//   }else if(start->next==0&&start->prev==0){
//      start = 0;
//   }
//   else {
//     struct node *run,*store;
//     run = start;
//     while(run->next!=0){
//       run = run->next;
//     }
    

//     store=run->prev;
//     store->next=0;
//         run->prev = 0;
//   }
  
// }

// void display (){
//     struct node *slide;
//     slide = start;

//     if (slide == 0 ){
//     printf("no data \n ");
//   }else{
//     while(slide!=0){
//       printf("%s ",slide->name);
//       slide=slide->next;
//     }
 
// }

// }


// int main (){
//   while(1){
//     printf("\n1--insert start \n");
//     printf("2--insert mid \n");
//     printf("3--insert end \n");
//     printf("4--delete start\n");
//     printf("5--delete mid \n");
//     printf("6--delete end \n");
//     printf("7--display\n");
//     printf("8--exit\n \n ");

    
//     int sel ; 
//     printf("enter your option : ");
//     scanf("%d",&sel);

//     if (sel==1){
//       instst();
//     }else if(sel==2){
//       // instmid();    hw
//     }
//     else if (sel == 3 ){
//       instend();
//     }else if(sel==4){
//       delst();
//     }else if (sel == 5){
//       // delmid();hw
//     }else if (sel ==6 ){
//       delend();
//     }else if (sel == 7){
//       display();
//     }else if (sel == 8){
//       printf("exited \n ");
//       return 0;
//     }
//     else{
//       printf("please enter a correct 1  and 8 \n");
//     }

//   }

//   return 0;              
// }




// #include<stdio.h>
// #include<stdlib.h>
// struct node {
// int data;
// struct node *next;
// };

// struct node *start =0;

// struct node *create (){
//    struct node *new;
//    new = (struct node*)malloc(sizeof(struct node));
//   printf("enter your data :");
//   scanf("%d",&new->data);
//      new->next = 0;
//      return new;
// }


// void insertst(){
//  struct node *s;
//   s = create();
//   if (start == 0){
//   start = s;
//   s->next=start;
//   }
//   else {
//     struct node *l,*copy;
//     l = start;
//     while(l->next!=start){
//       l = l->next;
//     }
//     copy = start;
//     start = s;
//     s->next=copy;
//     l->next=start; // l->next = s; 
//   }

// }

// void delst(){
//   if(start == 0)
//   printf("there has no node to delete \n ");
//   else if (start == start->next){
//     start->next=0;
//     start = 0;
//   }
//   else {
//     struct node *n , *copy;
//    n = start;
//    copy = n->next;
//    while(n->next!=start){
//     n=n->next;
//    }
//    n->next = copy;
//    start->next = 0;
//    start = copy;
  
//     }
// }

// void display (){
//       struct node *n;
//       n = start;

//   if (start==0){
//   printf("no node to display \n ");
//   }
//   // else if (start->next == n){
//   //   printf("%d ",start->data);
//   // }
//   else{
//     while(n->next!=start){
//       printf("%d ",n->data);
//       n=n->next;
//     }
//      printf("%d ",n->data);

//   }
// }


// int main () {


// while(1){
// printf("\n1--instert from start \n");
// printf("2--insert from middle \n");hw
// printf("3--insert from end \n");hw
// printf("4--delete from start\n");
// printf("5--delete from middle\n");hw
// printf("6--delete from end\n");hw
// printf("7--display\n");
// printf("8--exit\n");

// int s;
// printf("enter your option :"); 
// scanf("%d",&s);
 
// if(s==1){
//   insertst();
// }else if (s==2){
//   //insertmid();
// }else if (s==3){
//   //insertend();
// }else if (s==4){
//   delst();
// }else if (s==5){
//   //delmid();
// }else if (s==6){
//   //delend();
// }else if (s==7){
//   display();
// }else if (s==8){
//   printf("exited\n");
//   return 0;
  
// }else {
//   printf("enter a correct value \n");
// }

// }


//   return 0;
// }



// // queue using array / linear 
// #include<stdio.h>
// #include<stdlib.h>

// struct queue {
// int rear ;
// int front ;
// int cap; 
// int *arr;
// };  // verifed 
 

// struct queue *createq(int  save){
//     struct queue *p;
//     p =  (struct queue*) malloc(sizeof(struct queue));
//     p->front=-1;
//     p->rear = -1;
//     p->cap=save; 
//     p->arr=(int *)calloc(save,sizeof(int));
//     return p;
// } // verfied 


// int isfull(struct queue *o){
//   if (o->cap-1==o->rear){
//         printf("queue is full\n");
//     return 1;   
//   }else {
    
//     return 0;
//   }

// }   // verified 

// int isempty(struct queue *q){
  
//   if(q->front==-1){
//     return 1 ;
//   }else {
//     return 0;
//   }


// }  // verified    temprary blocked ------- 



// void insertq(struct queue *c){


// if (isfull(c)==0){
//   int x ; 
// printf("insert your data into a queue : ");
// scanf("%d",&x);
//      // in case root of error like infinity times insertion opertion perfom of n times but how it possible we already allocated 5 block   --- i think main hi thik se isko samjh nhi paya 
//     c->rear++;
//   c->arr[c->rear] = x;
//   if(c->rear == 0){
//     c->front = 0;
//   }else if (isfull(c)==1){
//     printf("queue is full \n");
//   }

// }

// }   // verified 


// void deleteq(struct queue *i){
//   int new;
//   if(isempty(i)==0){
//   i->arr[i->front] = new;
//   i->front++;}
//   else {
//     printf("no any data to delete \n");
//   }
  
   

// }



// void display (struct queue *disp){
//   int t =0;
//   for(int i = 0 ; i < disp->cap ; i++){
//     if(disp->arr[i]!=0){
//       printf("%d ",disp->arr[i]);
//     }else{
//       t++;
      
//     }


//   }

// if (t>0){
//   printf("not data to display \n"); 
// }

// }   // verified    


// int main (){
//    int x;
//   struct queue  *n;
//   printf("programme of queue using array \n");
//     printf("enter your array size :");
//     scanf("%d",&x);  // return to array 
//       n =  createq(x);


//   while(1){
//     printf("\n 1--insert your data \n");
//     printf("2--delete data \n");
//     printf("3--is full \n");
//     printf("4--display\n");
//     printf("5--exit\n");
    

//    int sel;
//    printf("enter your option :");
//    scanf("%d",&sel);

//      if (sel==1){
//         insertq(n);
//      }else if (sel ==2){
//       deleteq(n);
//      }else if (sel==3){
//        isfull(n);
//      }else if (sel == 4 ){
//         display(n);
//      }else if (sel == 5){
//       printf("exited \n");
//       return 0;
//      }
//      else {
//       printf("please enter a number bertween 1 and 2 \n");
//      }
//   }


 
// } // session terminate --------- 


// #include<stdio.h>
// #include<stdlib.h>

// // queue using stack 

// struct node {
//   int data ; 
//   struct node *next;
// };


// int track = 0;

// struct node *createnode(){
//   struct node *r  ;
//  r = (struct node*) malloc(sizeof(struct node));
//  r->next= 0;
//  int x ;
//  printf("enter a data :");
//  scanf("%d",&x);
//  r->data = x;
//  track++;
//  return r;

// }

// struct node *rear;
// struct node *front;
// struct node *new ;

// int ui = 0;
// void insertq (){
   
//    if(track==0){
//     rear = createnode();
//    front = rear;
//    }else{
//     new = createnode();
//      rear->next = new ;
//      rear =  new;
//    }
//    ui++;
  

// }


// void deleteq(){
//   if(ui==0){
//     printf("no any data to delete\n");
//   }
//   else {
//     struct node *temp;
//     temp = front->next;
//     front->next = 0;
//     front = temp;
//     ui--;
//   }
// }


// void display(){
//   struct node *temp = front;
//   if(ui>=1){
//   for(int i = 0 ; i < ui; i++){
//     printf("%d ",temp->data);
//     temp = temp->next;
//   }
// }else {
//   printf("no data to display \n");
// }

// }



// int main (){
// while(1){
//   printf("\n1-- insert data  into a queue \n");
//   printf("2--delete data into a queue \n");
//   printf("3--diplay\n");
//   printf("4--exit\n\n \n ");
//   int in;

  
//   printf("enter your oprion :");
//   scanf("%d",&in);

//   if(in==1){
//      insertq();
//   }else if (in == 2){
//     deleteq();
//   }else if (in == 3){
//      display();
//   }else if (in == 4){
//     printf("exited \n");
//     return 0;
//   }else {
//     printf("enter a correct data between 1 and 4 \n ");
//   }


// }


//   return 0;
// }
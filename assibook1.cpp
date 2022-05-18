#include<iostream>
#include<string>
using namespace std;
//node declaration
struct node
{
 char label[10];
 int ch_count;
 struct node *child[10];
} *root;
//class declaration
class BST
{
 public:
 void create_tree();
 void display(node *r1);
 BST()
 {
 root=NULL;
 }
};
void BST::create_tree()
{
 int tbooks,tchapters,i,j,k;
 root=new node();
 cout<<"Enter name of book: ";
 cin>>root->label;

 cout<<"Enter number of chapters in book: ";
 cin>>tchapters;
 root->ch_count=tchapters;

 for(i=0;i<tchapters;i++)
 {
 root->child[i]=new node;

 cout<<"Enter chapter name: \n";
 cin>>root->child[i]->label;

 cout<<"Enter number of sections in the chapter: ";
 cin>>root->child[i]->ch_count;

 for(j=0;j<root->child[i]->ch_count;j++)
 {
 root->child[i]->child[j]=new node;
 cout<<"Enter section head: ";
 cin>>root->child[i]->child[j]->label;

 cout<<"Enter number of Sub section: ";
 cin>>root->child[i]->child[j]->ch_count;

 for(k=0;k<root->child[i]->child[j]->ch_count;k++)
 {
 root->child[i]->child[j]->child[k]=new node;
 cout<<"Enter Sub-Section head: ";
 cin>>root->child[i]->child[j]->child[k]->label;
 }

 }

 }
}
void BST::display(node *r1)
{
 int i,j,k,tchapters;
 if(r1!=NULL)
 {
 cout<<"------Book Hierarchy------";
 cout<<"\nBook Title: "<<r1->label;
 tchapters=r1->ch_count;
 for(i=0;i<tchapters;i++)
 {
 cout<<"\nchapters"<<i+1;
 cout<<" "<<r1->child[i]->label;
 cout<<"\nsections";
 for(j=0;j<r1->child[i]->ch_count;j++)

 {
 cout<<"\n "<<r1->child[i]->child[j]->label;
 cout<<"\nsub section";
 for(k=0;k<r1->child[i]->child[j]->ch_count;k++)
 {
 cout<<"\n "<<r1->child[i]->child[j]->child[k]->label;
 }
 }
 }
 }

}
int main()
{
 int choice;
 BST bst;
 while(1)
 {
 cout<<"------------"<<endl;
 cout<<"Book Tree Creation"<<endl;
 cout<<"------------"<<endl;
 cout<<"1.Create"<<endl;
 cout<<"2.Display"<<endl;
 cout<<"3.Quit"<<endl;
 cout<<"Enter your choice"<<endl;
 cin>>choice;
 switch(choice)
 {
 case 1:
 bst.create_tree();
 case 2:
 bst.display(root);
 break;
 case 3:
 exit(1);
 default:
 cout<<"Wrong choice!!"<<endl;
 }
 }
}

output
------------
Book Tree Creation
------------
1.Create
2.Display
3.Quit
Enter your choice
1
Enter name of book: data
Enter number of chapters in book: 2
Enter chapter name:
hashing
Enter number of sections in the chapter: 1
Enter section head: basic
Enter number of Sub section: 2
Enter Sub-Section head: division
Enter Sub-Section head: folding
Enter chapter name:
tree
Enter number of sections in the chapter: 2
Enter section head: terminology
Enter number of Sub section: 2
Enter Sub-Section head: genera
Enter Sub-Section head: binary
Enter section head: data
Enter number of Sub section: 1
Enter Sub-Section head: tyoe
------Book Hierarchy------
Book Title: data
chapters1 hashing
sections
 basic
sub section
 division
 folding
chapters2 tree
sections
 terminology
sub section
 genera
 binary
 data
sub section
 tyoe------------
Book Tree Creation

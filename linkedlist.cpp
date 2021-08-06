#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
#define fast ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL)
#define pll pair<ll,ll>
#define pcl pair<char,ll>
#define pb push_back
#define vl vector<ll>
#define popb pop_back
#define all(v) (v).begin(), (v).end()
#define fir first
#define sec second
#define size(x) (int)(x.size())
ll i,j;

struct node{
    node* next;
    int data;
};
class linkedlist{

node* head;
public:
linkedlist(){
    head=NULL;
}
void insert_at_tail(int data){
    node* New_node = new node();
    New_node->next=NULL;
    if(head==NULL){
        head=New_node;
    }
    else{
    node* temp = head;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=New_node;
    }
    New_node->data=data;
}
void insert_at_head(int data){
    node* New_node = new node();
    New_node->next=head;
    head=New_node;
    New_node->data=data;
}
void insert_at_position(int v,int data){
    v-=1;
    node* New_node= new node();
    New_node->data=data;
    if(head==NULL)
        head=New_node;
    node* temp=head;
    while(--v && temp->next!=NULL){
        temp=temp->next;
    }
    node* temp2=temp->next;
    temp->next=New_node;
    New_node->next=temp2;
}
void delete_at_position(int v){
    if(head==NULL){
        cout<<"empty linked list!";
        return;
    }
    node* temp=head;
    node* temp2=head;
    while(--v && temp->next!=NULL){
        temp=temp->next;
        if(v>1)
            temp2=temp2->next;
    }
    temp=temp->next;
    temp2->next=temp;
    return;
}
void reversel(){
    if(head==NULL){
        cout<<"empty linked list!";
        return;
    }
    else if(head->next==NULL)
        return;
    node* temp1=head;
    node* temp2=temp1->next;
    node* temp3=temp2->next;

    temp1->next=NULL;
    temp2->next=temp1;
    while(temp3 != NULL){
        temp1=temp2;
        temp2=temp3;
        temp3=temp3->next;
        temp2->next=temp1;
    }
    head=temp2;
}
void display(){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return;
}
};
int main()
{
    fast;
    linkedlist p;
    int data=0;
    for(int i=0;i<3;i++){
        cin>>data;
        p.insert_at_tail(data);
    }
    for(int i=0;i<3;i++){
        cin>>data;
        p.insert_at_head(data);
    }
    p.insert_at_position(4,105);
    p.display();
    cout<<endl;
    p.delete_at_position(3);
    p.display();
    cout<<endl;
    p.insert_at_position(4,108);
    p.display();
    cout<<endl;
    p.reversel();
    p.display();
    cout<<endl;
    p.reversel();
    p.display();
}

#include<bits/stdc++.h>

using namespace std;

class listp{
    
    int n,top;
    int arr[1000007];
    
    public:
    
    listp(){
        n=0;
        top=-1;
    }
    listp(int p){
        n=p;
        top=-1;
    }
    
    void printall(){
        if(isEmpty()){
            cout<<"List is empty! Can't print!";
            return;
        }
        else{
            for(int i=0;i<size();i++)
                cout<<arr[i]<<" ";
        }
    }
    
    void print_from_index(int index){
        if(isEmpty()){
            cout<<"List is empty! Can't print!";
            return;
        }
        else if(index>size()){
            cout<<"Index Out Of Bound";
            return;
        }
        else{
            for(int i=index;i<size();i++)
                cout<<arr[i]<<" ";
        }
    }
    
    int size(){
        return top+1;
    }
    
    void insert_at_position(int key,int pos){
        if(isFull()){
            cout<<"List is full! Can't insert!";
            return;
        }
        else if(pos>=n || pos>(size()-1)){
            cout<<"Index Out Of Bound";
            return;
        }
        else if(top>=pos){
            for(int i=top;i>=pos;i--)
                arr[i+1]=arr[i];
            top++;
            arr[pos]=key;
        }
        
    }
    
    int search_array(int key){
        if(isEmpty()){
            cout<<"List is empty! Can't Search!";
            return -1;
        }
        else{
        
            for(int i=0;i<size();i++){
                if(key==arr[i])
                    return i;
            }
            return -1;
        }
    }
    
    void deletion_at_position(int index){
        if(isEmpty()){
            cout<<"List is empty! Can't delete!";
            return;
        }
        else if(index>size()-1){
            cout<<"Index Out Of Bound";
            return;
        }
        else if(top>index){
            for(int i=index;i<top;i++)
                arr[i]=arr[i+1];
            top--;
        }
    }
    
    void deletion_at_end(){
        if(isEmpty()){
            cout<<"List is empty! Can't delete!";
            return;
        }
        else {
            top--;
        }
        
    }
    
    void insert_at_end(int key){
        if(isFull())
            cout<<"List is full! Can't insert!";
        else {
            top++;
            arr[top]=key;
        }
    }
    
    bool isEmpty(){
        if(top==-1)
            return true;
        else return false;
    }
    bool isFull(){
        if(top==n-1)
            return true;
        else return false;
    }
    
    
};

int main(){
    int choice;
    int n;
    cin>>n;
    listp l1(n);
    do{
        cout<<"1. Search in List"<<endl;
        cout<<"2. Size of List"<<endl;
        cout<<"3. print all elements"<<endl;
        cout<<"4. print from position"<<endl;
        cout<<"5. Delete at position of List"<<endl;
        cout<<"6. Delete from end of List"<<endl;
        cout<<"7. Insert at position of List"<<endl;
        cout<<"8. Insert at end of List"<<endl;
        cout<<"9. Check whether List is Full"<<endl;
        cout<<"10. Check whether List is Empty"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"Enter your choice: !!"<<endl;
        
        cin>>choice;
        
        switch(choice){
            
            case 1: {
                    int key; 
                    cin>>key; 
                    int index=l1.search_array(key);
                    if(index==-1)
                        cout<<"Not Found!"<<endl;
                    else cout<<"Found at index : "<<index<<endl;
                    break;
            }
                    
            case 2: {
                    cout<<l1.size();
                    break;
            }
                    
            case 3: {
                    l1.printall();
                    break;
            }
                   
            case 4: {
                    int index;
                    cin>>index;
                    l1.print_from_index(index);
                    break;
            }
                    
            case 5: {
                    int index;
                    cin>>index;
                    l1.deletion_at_position(index);
                    break;
            }
                    
            case 6: {
                    l1.deletion_at_end();
                    break;
            }
            case 7: {
                    int index,key;
                    cin>>index>>key;
                    l1.insert_at_position(key,index);
                    break;
            }
            case 8: {
                    int key;
                    cin>>key;
                    l1.insert_at_end(key);
                    break;
            }
            case 9: {
                    bool p=l1.isFull();
                    string s= p==true?"true":"false";
                    cout<<s<<endl;
                    break;
            }
            case 10: {
                    bool p=l1.isEmpty();
                    string s= p==true?"true":"false";
                    cout<<s<<endl;
                    break;
            }
            
            case 0: exit(1);
                    break;
            
            default: {
                cout<<"wrong option choosed! try again"<<endl;
            }
        }
        
    }while(choice!=0);
}
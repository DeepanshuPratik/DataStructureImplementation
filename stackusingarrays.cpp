
#include <iostream>
#define MAX 1000

using namespace std;


class Stack {
    int top;
    char a[MAX]; // Maximum size of Stack
public:
    
 
    Stack() { top = -1; }
    bool push(char);
    char pop();
    int currentsize();
    char seek(int);
    bool isEmpty();
    bool isFull();
    void display();
    void Empty();
};
void Stack::Empty(){
    top=-1;
    cout<<"Stack is again Empty!";
}
void Stack::display(){
    if(top==-1){
    cout<<"No element is there!";
    exit;}
    for(int i=0;i<=top;i++)
    cout<<a[i]<<" ";
    
    cout<<endl;
}
bool Stack::push(char x){
    if(top==MAX-1){
    cout<<"Can't allot slots full!"<<endl;
    return 0;
    }
    else{
        top++;
        a[top]=x;
        return 1;
    }    
}
char Stack::pop(){
    if(top==-1){
    cout<<"No data left!"<<endl;
    return 0;
    }
    else{
    --top;
    return a[top+1];
    }
}
char Stack::seek(int i){
    if(i<=top)
    return a[i];
    else{
        cout<<"element unreachable!"<<endl;
        return 0;
    } 
}
bool Stack::isEmpty(){
    if(top==-1)
    return 1;
    else return 0;
}
bool Stack::isFull(){
    if(top==MAX-1)
    return 1;
    else return 0;
}
int Stack::currentsize(){
    return top+1;
}

int main(){
    
    int n=5; Stack t;
    cout<<" * * * * * * * * * * * * * * * * * * * * * * * * * "<<endl;
    cout<<" * * * * * * * * * * * * * * * * * * * * * * * * * "<<endl;
    cout<<" *  THANKS FOR COMING! ENJOY YOUR STACK PROGRAM  * "<<endl;
    cout<<" * * * * * * * * * * * * * * * * * * * * * * * * * "<<endl;
    cout<<" * * * * * * * * * * * * * * * * * * * * * * * * * "<<endl;
    do{
        cout<<endl<<"0. exit the program"<<endl;
        cout<<"1. Insert an element"<<endl;
        cout<<"2. Pop the element"<<endl;
        cout<<"3. seeking element"<<endl;
        cout<<"4. size of stack"<<endl;
        cout<<"5. display all elements"<<endl;
        cout<<"6. is the stack empty?"<<endl;
        cout<<"7. id the stack full?"<<endl;
        cout<<"8. Empty the stack"<<endl;
        cout<<"Enter your choice: "<<endl;
        cin>>n;
        
        switch(n){
            
            case 0: cout<<"Program died...";  
                    break;
            case 1: char p;
                    cout<<"Enter number to be pushed";
                    cin>>p; t.push(p);
                    break;
            case 2: cout<<t.pop();
                    break;
            case 3: int i;
                    cin>>i;
                    cout<<t.seek(i);
                    break;
            case 4: cout<<t.currentsize();
                    break;
            case 5: t.display();
                    break;
            case 6: if(t.isEmpty())
                    cout<<"Stack is empty!"<<endl;
                    else cout<<"Stack is not empty!"<<endl;
                    break;
            case 7: if(t.isFull())
                    cout<<"Stack is full!"<<endl;
                    else cout<<"Stack is not full!"<<endl;
                    break;
            case 8: t.Empty(); break;
            default: cout<<"Please enter valid choice";
        }
        
    }while(n!=0);

    return 0;
}





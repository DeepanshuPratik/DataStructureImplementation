#include<bits/stdc++.h>
using namespace std;
//int index;
bool flag=false;
    void input_heap(long long a[], long long N) {
        cin>>a[1];
        flag=true;
        for(int i=1;;i++){
            cin>>a[2*i];
            if(a[2*i]<0)
                break;
            int j=2*i;
            while(a[j]>a[j/2] && j>0){
                swap(a[j],a[j/2]);
                j/=2;
            }
            cin>>a[2*i+1];
            if(a[2*i+1]<0)
                break;
            j=2*i+1;
            while(a[j]>a[j/2] && j>0){
                swap(a[j],a[j/2]);
                j/=2;
            }
        }
    }
    void print_heap(long long a[], long long n){
        int count=0;
        if(flag==false){
            cout<<"Empty Set";
            return;
        }
        int i=1,j=1;
        cout<<" "<<a[i]<<endl;
        while(a[2*i]>=0 || a[2*i+1]>=0){
            if(a[2*i]>=0){
                cout<<" "<<a[2*i]<<" ";
                count++;
            }
            else break;
            if(a[2*i+1]>=0){
                cout<<a[2*i+1]<<" ";
                count++;
            }
            else break;
            if(count==pow(2,j)){
                cout<<endl;
                j++;
                count=0;
            }
            else cout<<" ";
            i++;
        }
        
    }    
    //sample input 1 :  2 1 3 4 5 1 10 50 -1 2 4
    //sample input 2:   2 1 3 4 5 1 10 50 2 4 80 100 40 -1
int main(){
    long long N=1e6+7;
    long long a[N];
    a[0]=INT_MAX;
    input_heap(a,N);
    print_heap(a,N);
}



#include <iostream>
using namespace std;

void switch1(bool arr[],int n){
    for(int i=n-1;i<100;i=i+n+1){
        arr[i]=!arr[i];
    }
}
int main() {
    bool arr[100];
    for(int i=0; i<100; i++){
        arr[i]=true;
    }
    for(int i=2; i<=100; i++){
        switch1(arr,i);
    }
    for(int i=0; i<100; i++){
        if(arr[i]){
            cout<<i+1<<" ";
        }
    }
}
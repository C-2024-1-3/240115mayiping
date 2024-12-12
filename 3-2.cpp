#include <iostream>
using namespace std;

bool is_prime(int num){
    int j=0;
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            j++;
        }
    }
    if(j>0){
        return false;
    }
    else{
        return true;
    }
}

int main() {
    int k=0;
    int i=2;
    for (; k <= 200;) {
        if (is_prime(i)) {
            cout << i << " ";
            k++;
            if(k%10==0){
                cout << endl;
            }
        }
        i++;
    }
    return 0;
}
    
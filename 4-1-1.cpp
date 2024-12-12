#include <iostream>
#include <algorithm> 
#include <iterator> 
using namespace std;

int main() {
    cout << "Enter 10 numbers:";
    int num[10];
    int x;
    int k=0;
    for(int i=0; i<10; i++) {
        cin >> x;
        if(find(begin(num), end(num), x) == end(num)) {
            num[k] = x;
            k++;
        }
    }
    sort(begin(num), begin(num)+k);
    cout << "The distinct numbers are:";
    for(int i=0; i<k; i++) {
        cout << num[i] << " ";
    }
    return 0;
}
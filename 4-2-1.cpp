#include <iostream>
using namespace std;
#include <cstring>

int indexOf(const char s1[], const char s2[]){
    int len1=strlen(s1);
    int len2=strlen(s2);
    for (int i = 0; i <= len2 - len1; i++) {
        bool match = true;
        for (int j = 0; j < len1; j++) {
            if (s2[i + j] != s1[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            return i;
        }
    }
    return -1;
}



int main() {
    char str1[100], str2[100];
    cout << "Enter the first string:";
    cin.getline(str1, 100);
    cout << "Enter the second string:";
    cin.getline(str2, 100);
    cout << "index of (" << str1 << ", " << str2 << ") is " << indexOf(str1, str2) << endl;
}
#include <iostream>
using namespace std;
#include <cstring>

void count(const char s[], int counts[]){
    int len=strlen(s);
    for(int i=0;i<len;i++){
        if(s[i]>='a' && s[i]<='z'){
            counts[int(s[i])-97]++;
        }
        else if(s[i]>='A' && s[i]<='Z'){
            counts[int(s[i])-65]++;
        }
    }
}

int main(){
    char s[100];
    cout << "Enter a string:";
    cin.getline(s,100);
    int counts[26]={0};
    count(s,counts);
    for(int i=0;i<26;i++){
        if(counts[i]!=0){
            cout << char(97+i) << ':' << counts[i] << " times" << endl;
        }
    }

}
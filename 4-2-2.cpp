#include <iostream>
using namespace std;
#include <cstring>
#include <cmath>

int parseHex(const char *const hexString){
    int len=strlen(hexString);
    int result=0;
    for(int i=0;i<len;i++){
        if (hexString[i] >= '0' && hexString[i] <= '9')
		{
			result = result + (((int(hexString[i]))-48) * pow(16, len - i - 1));
		}
		else
		{
			result = result +(((int(hexString[i])) - 55) * pow(16, len - i - 1));
    }
    }
    return result;
}
int main(){
    char str[100];
    cin.getline(str,100);
    cout << parseHex(str) << endl;
}
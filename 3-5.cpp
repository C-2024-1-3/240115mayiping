#include <iostream>
using namespace std;

int count(int num,int day){
    if(day>0){
        num=(num+1)*2;
        return count(num,day-1);
    }
    else{
        return num;
    }
}

int main() {
    int x=1;
    int day=10;
    cout << "��һ��ժ������Ϊ" << count(x,day) << endl;
    return 0;
}

#include<iostream>
using namespace std;
class Time{
private:              // ���ݳ�ԱΪ���õ�
    int hour;
    int minute;
    int sec;
public:
    void showTime(){
        cout << hour << ":" << minute << ":" << sec << endl;
    }
    void setTime(int hour,int minute,int sec){
        this->hour=hour;
        this->minute=minute;
        this->sec=sec;
    }
};
int main(){
    Time t1;           //����t1ΪTime�����
    int hour,minute,sec;
    cin >> hour >> minute >> sec;
    t1.setTime(hour,minute,sec);
    t1.showTime();
    return 0;
}
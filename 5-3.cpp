#include<iostream>
using namespace std;
class zhu{
private:            
    int length;
    int width;
    int height;
public:
    void V(){
        cout << length*width*height << endl;
    }
    void setZhu(){
        cout << "ÇëÊäÈë³¤¿í¸ß£º" ;
        cin >> length >> width >> height;
    }
};
int main(){
    zhu zhu1,zhu2,zhu3;
    zhu1.setZhu();
    zhu1.V();
    zhu2.setZhu();
    zhu2.V();
    zhu3.setZhu();
    zhu3.V();
}
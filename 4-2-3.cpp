#include <iostream>
using namespace std;

void sort(int s[],int num){
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - i - 1; j++)
		{
			if (s[j] > s[j + 1])
			{
				int temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;
			}
		}
	}
}


int main(){
    cout << "输入数组元素个数：";
    int num;
    cin >> num;
    int *s=new int[num];
    cout << "输入数组元素：";
    for(int i=0;i<num;i++){
        cin >> s[i];
    }
    sort(s,num);
    for(int i=0;i<num;i++){
        cout << s[i];
    }

}

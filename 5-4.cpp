#include<iostream>
using namespace std;

class Student{
public:
    int num;
    int score;
    Student(int num,int score){
        this->num=num;
        this->score=score;
    }
};
void max(Student* student){
        int maxi=0;
        for(int i=0;i<5;i++){
            if(student[i].score>student[maxi].score)maxi=i;  
        }
        cout << student[maxi].num;
}

int main(){
    
    Student stu[5]={{1,2},{2,3},{3,4},{4,5},{5,6}};
    max(stu);
}
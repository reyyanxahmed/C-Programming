#include <iostream>
using namespace std;

struct student
{
    private:
    char name[50];
    int roll;
    float marks;
    public:
    void setStudentData()
{
    cout << "Enter information," << endl;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> roll;
    cout << "Enter marks: ";
    cin >> marks;
}

void getStudentData(){
cout << "\nDisplaying Information," << endl;
    cout << "Name: " << name << endl;
    cout << "Roll: " << roll << endl;
    cout << "Marks: " << marks << endl;
}
};

int main()
{
    student s1,s2,s3;
    for(int i=0;i<3;i++){
        if(i==0){
            s1.setStudentData();
            s1.getStudentData();
        }
        else if(i==1){
            s2.setStudentData();
            s2.getStudentData();
        }
        if(i==2){
            s3.setStudentData();
            s3.getStudentData();
        }
    }
    return 0;
}

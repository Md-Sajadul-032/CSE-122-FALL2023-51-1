#include<bits/stdc++.h>
using namespace std;
class student{
protected:
    int id;
    string name;
public:
    void get(){
        cout << "Enter Id: ";
        cin >> id;
        cout << "Enter name: ";
        cin >> name;
    }
    void disp(){
        cout << "Name is: "<< name << endl;
        cout << "Id is: " << id << endl;
    }
};
class course: public student{
    int course_id;
public:
    void get(){
        student::get();
        cout << "Enter course id: ";
        cin >> course_id;
    }
    void disp(){
        student::disp();
        cout << "Course Id is: " << endl;
    }
};
int main(){
    course c;
    c.get();
    c.disp();
}

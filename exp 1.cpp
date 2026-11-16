#include <iostream>
using namespace std;
class Student{
    private:
    int rollno;
    string name;
    public:
    //constructor
    Student(int r,string n)
    {
        rollno=r;
        name=n;
        cout<<"Student Object Created"<<endl;

    }
    //Member function
    void display()
    {
        cout<<"Roll Number:"<<rollno<<endl;
        cout<<"Name:"<<name<<endl;
    }
    //Destructor
    ~Student()
    {
        cout<<"Student object destroyed"<<endl;
    }
};
int main()
{
    Student S1(101,"Arun");
    S1.display();
    return 0;
}
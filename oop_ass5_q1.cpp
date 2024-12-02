#include<iostream>
using namespace std;

class student
{
    public :
    char name[20];
    int roll;
    float age;
    void getDetails(void);
    void putDetails(void);
};

class test : public student
{
    public :
    int marks[5];
    void getmarks()
    {
        cout<< "Enter marks for 5 subjects "<<endl;
       
        for(int i=0; i<5; i++)
        {
            cout <<"Mark "<<i+1<<" : ";
            cin>>marks[i];
        }
    }
    void displaymarks()
    {
        for(int i=0; i<5; i++)
        {
            cout<<"Mark of subject "<<i+1<<" : "<<marks[i]<<"\n";
        }
    }
    
};


void student::getDetails(void)
{
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter roll number: ";
    cin >> roll;
    cout << "Ente age : ";
    cin >> age;
   
}

void student::putDetails(void)
{
    cout << "Student details:\n";
    cout << "Name:"<< name <<"\n"<<"Roll Number:" << roll <<"\n"<< "Age :" << age;
    cout <<endl;
}



int main()
{
    student s;
    test p;
    s.getDetails();
    p.getmarks();

    s.putDetails();
    p.displaymarks();
}

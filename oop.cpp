
#include<iostream>
#include<ctime>
using namespace std;

class student{

public :
    char *name;
    int id;
    double cgpa;
    char *get_name()
    {
        return name;
    }
    int get_id()
    {
        return id;
    }
    double get_cgpa()
    {
        return cgpa;
    }


};
int main()

{
    student masum,abdullah;
    masum.name="masum";
    masum.id=200119;
    masum.cgpa=3.44;
    abdullah.name="masm";
        abdullah.id=200120;
        abdullah.cgpa=3.22;


    cout<<masum.name<<endl;
    cout<<masum.id<<endl;
    cout<<masum.cgpa<<endl;
    cout<<abdullah.name<<endl;
    cout<<abdullah.id<<endl;
    cout<<abdullah.cgpa<<endl;
}











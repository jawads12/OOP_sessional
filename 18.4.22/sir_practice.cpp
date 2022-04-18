#include <iostream>
using namespace std;
class student
{
private:
    float cgpa;

public:
    int ID;
    string name;
    //float cgpa

    void set_cgpa()
    {
        cgpa = 3.9;
    }
    void set_cgpa(int cgpa)
    {
        this->cgpa = cgpa;
    }
    float get_cgpa(){
    return cgpa;}

    student()
    {
        ID = 0;
        cgpa = 0;
        name = "No name given";
    }
    student(int ID, string name, float cgpa){
        this->ID = ID;
        this->name = name;
        this->cgpa = cgpa;
    }
int c_cg(student st1, student st2);

};

int c_cg(student st1, student st2)
{
    if(st1.get_cgpa()==st2.get_cgpa()) return 0;
    else return 1;
}


/*int c_cg(student st1, student st2)
{
    if(st1.cgpa==st2.cgpa) return 0;
    else return 1;
}
*/

int main ()
{
    student st1(75, "Jawad", 3.9);
    student st2(75, "Nabil", 4.0);
    if(!c_cg(st1, st2)) cout<<"Equal";
    else cout <<"Not equal";
    //st1.ID=75;
    //st1.name = "Nofaer";
   // st1.set_cgpa(5);
   // cout<<st1.name<<" "<<st1.ID<<" "<<st1.get_cgpa()<<endl;


}

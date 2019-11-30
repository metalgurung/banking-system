
#include <iostream>

using namespace std;

class Student
{
    private:
        string name;
        int roll,marksMath;
        int marksScience,marksComp;
    
    public:
        Student (string name,int roll,int marksMath,int marksScience,int marksComp)
            {
                this ->name = name;
                this ->roll = roll;
                this ->marksMath = marksMath;
                this ->marksScience = marksScience;
                this ->marksComp = marksComp;
            }
        int total()
        {
            return marksComp+marksScience+marksMath;
        }
        char grade();
};

char Student::grade()
    {
       float average= total()/3;
       if(average>60)
            return 'A';
        else if(average>=40 && average<60)
                return 'B';
        else
         return 'C';
    }
int main()
{
    int roll;    
    string name;    
    int m,s,c;
    cout<<"Enter Roll number of a Student: ";    
    cin>>roll;    
    cout<<"Enter Name of a Student:";    
    cin>>name;
    cout<<"Enter marks in 3 subjects";   
    cin>>m>>s>>c;    
    Student Sanam(name,roll,m,s,c);
    cout<<"Total Marks:"<<Sanam.total()<<endl;    
    cout<<"Grade of Student:"<<Sanam.grade()<<endl;

    return 0;
}
#include <iostream>
#include <string>
using namespace std;
class Student{
    // defining data members 
    public:
        int sch_No;
        char name[40];
        double percentage;
    
    // defining member function to print the details 
    void getDetails(){
        cout<<"Enter your Scholar No.: ";
        cin>>sch_No;
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter your percentage: ";
        cin>>percentage;
    }
    void printDetails(){
        cout<<"Scholar No. is: "<<sch_No<<endl;
        cout<<"Name is: "<<name<<endl;
        cout<<"Percentage is: "<<percentage<<endl;
    }
};
int main(){
    // A class is a datatype which is basically used to create a template or blue-print in order to perform a particular task. 
    //How to define a class?
        //1. Use keywork class and then write the name of class you want to give...

    // Object is real world entity with the help of which we can easily access the properties of the class ?
    Student deependra;
    deependra.getDetails();
    cout<<endl<<endl;
    deependra.printDetails();

    return 0;
}
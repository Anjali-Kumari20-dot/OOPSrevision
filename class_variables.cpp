#include<iostream>
using namespace std;
// class variables/ member variables/ attributes
// declared within class defination
// accessed using object instances or within member funtions
// Here's how you declare a class variable within a class defination:
class my_class{
    public:
    // # DECLARATION
    int my_int;
    double my_double;
    string my_string;
    // other member functions or variables can be declared here

    // # CONSTRUCTOR INITIALISATION
    // constructor to initialise the variables during the object creation
    my_class(int i,double d, string s) : my_int(i), my_double(d), my_string(s) {}

    // # ACCESSING
    //within the member functions of the class you can directly access class variables:
    void display_values(){
        cout<<"MyInt: "<<my_int<<endl;
        cout<<"MyDouble: "<<my_double<<endl;
        cout<<"MyString: "<<my_string<<endl;
    }
};

int main(){
    /*
        // # DEFAULT INITIALISATION
        my_class obj;
        obj.my_double = 12.23;
        obj.my_int = 90;
        obj.my_string = "Anjali Kumari";
    */ 
    // Creating an object and initialsing the varibles using the constructor
    my_class obj(12, 23.23, "Anjali Kumari");

    // using the member function to display the values
    obj.display_values(); 
    return 0;
}
#include<iostream>
using namespace std;
class my_class{
    //class defination
    public:
    void someFunction(){
        cout<<"Hard work == Lucky";
    }
};
int main(){
    const int arraySize = 5 ;
    my_class myArray[arraySize]; // array  of my_class objects
    //Access and use array elements as needed
    myArray[0].someFunction();
    return 0;
}
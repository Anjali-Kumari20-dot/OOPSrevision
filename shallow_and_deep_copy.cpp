#include<iostream>
#include<cstring>
using namespace std;
class Person{
public:
    char* name;

    Person(const char* n){
        name = new char[strlen(n)+1];
        strcpy(name, n);
    }

    ~Person(){
        delete[] name;
    }

    //Shallow copy(copy constructor)
    Person(const Person& other){
        name = other.name; //Shallow copy: copies the pointer values
    }

    // Deep Copy
    Person deepCopy(const Person& other){
        name = new char[strlen(other.name)+1];
        strcpy(name, other.name);
    }
};
int main(){
    return 0;
}
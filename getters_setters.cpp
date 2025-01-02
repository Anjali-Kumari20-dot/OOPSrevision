#include<iostream>
using namespace std;
class my_class{
    private:
        int my_var ;
    public:
    // funtions used to access or retrieve the value of a private member variable
        int get_my_var(){
            return my_var;
        }
        // funtions used to modify or set the value of a private member variable
        int set_my_var(int value){
            my_var = value;
        }    
};
int main(){
    my_class obj;
    obj.set_my_var(20);
    int value = obj.get_my_var(); // using getter to access my_var 
    cout<<value;
    return 0;
}
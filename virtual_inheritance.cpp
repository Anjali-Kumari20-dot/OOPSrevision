#include<iostream>
using namespace std ;

class grandParent {
    public:
        void display(){
            cout<<"Grand Parents"<<endl;
        }
};

class Mother : virtual public grandParent  {} ;
class Father : virtual public grandParent  {} ;
class child : public Mother, public Father {} ;

int main(){

    child chinti;
    chinti.display();
    chinti.Mother::display();
    chinti.Father::display();

    return 0;
}
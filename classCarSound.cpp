#include<iostream>
using namespace std;
class Scooty{
    public:
        virtual void sound(){
            cout<<"Vroom Vroom"<<endl;
        }
};
class Bike : public Scooty{
    public:
        void sound(){
            cout<<"Dhroom Dhroom"<<endl;
        }
};
class SuperBike : public Scooty{
    public:
        void sound(){
            cout<<"Zhroom Zhroom"<<endl;
        }
};

int main(){
    Scooty* b = new Bike();
    b->sound();
    Scooty* c = new SuperBike();
    c->sound();
    return 0;
}
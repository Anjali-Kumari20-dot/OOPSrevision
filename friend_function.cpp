#include<iostream>
using namespace std;
class my_class{
private:
    int secretData;
public:
    my_class(int x) : secretData(x) {}
    friend void displaySecret(const my_class &obj);
};

void displaySecret(const my_class &obj){
    cout<<"Secret data: "<<obj.secretData<<endl;
}

int main(){
    my_class obj(32);
    displaySecret(obj);
    return 0;
}
#include<iostream>
using namespace std;
/* SYNTAX OF NESTED CLASS
    class OuterClass{
        // outer class defination
        class NestedClass{
            // nested class defination
        };
    };
*/

class OuterClass{
    private:
        int outerVar;
    public:
        class NestedClass{
            public:
                void display(OuterClass obj){
                    cout<<"Outer variable value: "<<obj.outerVar<<endl;
                }
        };
};

int main(){
    OuterClass outerObj;
    OuterClass::NestedClass nestedObj;

    nestedObj.display(outerObj);
    return 0;
}
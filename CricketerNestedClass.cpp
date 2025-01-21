#include<iostream>
using namespace std;
class Cricketer {
    public:
        string name;
        int age;
        int numTests;
        double avgRuns;

        void inputCricketers(){
            cout<<"Enter Cricketer's name : ";
            cin>>name;
            cout<<"Enter Age: ";
            cin>>age;
            cout<<"Enter No. of test matches played : ";
            cin>>numTests;
            cout<<"Enter AveragemRuns scored per test : ";
            cin>>avgRuns;
        } 
        
        void displayCricketers() {
            cout<<"Name: "<<name<<endl;
            cout<<"Age : "<<age<<endl;
            cout<<"Test matches played : "<<numTests<<endl;
            cout<<"Average Runs per test : "<<avgRuns<<endl;
        }
};
int main(){
    Cricketer cricketers[5];

    // Input cricketers records
    for(int i = 0; i < 5; i++){
        cout<<"Enter details for Cricketer "<<i + 1<<endl;
        cricketers[i].inputCricketers();
    }

    // Display cricketers records
    for(int i = 0; i < 5; i++){
        cout<<"Cricketer "<<i + 1<<" Dtails: "<<endl;
        cricketers[i].displayCricketers();
        cout<<endl;
    }

    return 0;
}
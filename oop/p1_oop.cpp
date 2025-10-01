#include<bits/stdc++.h>
#include <string>
using namespace std;

class Employee{
    private:
    string name;
    float salary;

    public:
    Employee(string name, float salary){
        this->name = name;
        this->salary = salary;
    }

    string getName(){
        return name;
    }
    float getSalary(){
        return salary;
    }

    void setName(string name){
        this->name=name;
    }

    void setSalary(float){
        this->salary=salary;
    }

    void displayDetails(){
        cout<<"Employee"<<name<<endl;
        cout<<"salary"<<salary<<endl;
    }

};

// int main() {
//     Employee obj("Geek" , 100.2);
//     obj.displayDetails();

//     return 0;
// }


// Abstraction

class vehicle{
    public:

    virtual void accelerate() = 0;

    virtual void brake() = 0;

    void enginerStarting(){
        cout<<"Starting the engine"<<endl;
    }

};

class Car:public vehicle{
    public:

    void accelerate() override{
        cout<<"Car: acclerating the gas pedal"<<endl;
    }

    void brake() override{
        cout<<"Car: applying the brakes"<<endl;
    }


};
// int main() {
//     vehicle* myCar = new Car;
//     myCar->enginerStarting();
//     myCar->accelerate();
//     myCar->brake();
//     return 0;
// }

// encapsulation

class Another{
    private:
    int id;
    string name;

    public:

    void setId(int id){
        this->id=id;
    }

    void setName(string name){
        this->name=name;
    }

    int getId(){
        return id;
    }

    string getName(){
        return name;
    }

};

int main() {
    Another obj;

    obj.setId(1);
    obj.setName("Unknown");

    cout<<obj.getId()<<endl;
    cout<<obj.getName()<<endl;
    return 0;
}
#include <iostream>
using namespace std;

class employee
{
    string name;
    int age;
    public:  
    void setname(string n){
        name=n;
    }
    string display();
};

string employee::display()
{
    return name;
}

main()
{
    employee emp1;
    emp1.setname("meriem"); 
    cout<<emp1.display();
}
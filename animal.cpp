#include <iostream>
using namespace std;

class Animal{
    public:
    string name;
    string loc;
    int age;
    void set_color(string c){
        color = c;
        
    }
};

int main()
{
    Animal dog;
    dog.name = "Tuffy";
    dog.age = 10;
    cout<<dog.name<<" "<<dog.age;
    return 0;
}
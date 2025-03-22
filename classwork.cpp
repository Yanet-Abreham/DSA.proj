#include<iostream>
using namespace std;
namespace Mynamespace{void display(){
cout <<"hello "<<endl;
}
}
struct child{
    string name;
    int age;
};
void print(int x){
    cout<<"integer:"<<x<<endl;
}
void print(double x){
    cout<<"double:"<<x<<endl;
}
void print(string x){
    cout<<"string"<<x<<endl;
}
template<typename T>
T add(T a, T b){
    return a+b;
}
int main(){
    Mynamespace::display();
    child p1={"alora",4};
    cout<< "child name is:" << p1.name<<"an age is:"<<p1.age<<endl;
    print(10);
    print(5.5);
    print("what up?");
    cout <<"sum(int):"<<add(2,5)<<endl;
    cout<<"sum(double)"<<add(1.4,2.3)<<endl;
    return 0;
}
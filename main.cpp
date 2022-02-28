#include <iostream>
using namespace std;
class BaseClass{
public:
virtual void show(){
  cout<<"Base class show is invoked"<<endl;
}
void display(){
  cout<<"Base class display is invoked"<<endl;
}
};
class DerivedClass:public BaseClass{
public:
void show(){
  cout<<"Derived class show is invoked"<<endl;
}
void display(){
cout<<"Derived class display is invoked"<<endl;
}
};
int main() {
  BaseClass *b1;
  DerivedClass d1;
  b1=&d1;
  b1->show();
  b1->display();
}
#include<iostream>
using namespace std;
// single
class A{
    int a;
    protected:
    int b;
    public:
    int c;
};
class B: public A{
    public:
};
int main(){
    B obj;
    return 0;
}

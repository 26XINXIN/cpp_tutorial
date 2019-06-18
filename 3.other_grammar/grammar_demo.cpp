#include <iostream>
#include <cstdlib>

using namespace std;

void test(int &a){
    a = 200;
}

int method_1(){
    int a = 0;
    int *p = &a;
    test(p);
    cout << a << endl;
    return 0;
}

int main(){
    int a = 0;
    test(a);
    cout << a << endl;
    return 0;
}
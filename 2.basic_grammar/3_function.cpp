/* 
 * functions
 */

#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int my_add(int a, int b){
    return a + b;
}

double my_minus(double a, double b){
    return a - b;
}

void print_helloworld(){
    cout << "hello world" << endl;
    return; //this line can be removed
}

int main(){
    int a = 10, b = 5;
    int c;
    c = my_add(a, b);
    printf("%d + %d = %d\n", a, b, c);

    double d = 2.3, e = 9.2;
    double f;
    f = my_minus(d, e);
    printf("%.1lf - %.1lf = %.1lf\n", d, e, f);

    return 0;
}
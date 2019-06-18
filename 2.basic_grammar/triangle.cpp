#include <iostream>
#include <cstdlib> // stdlib.h --> cstdlib
using namespace std;

void print_triangle(int n){
    int l = 2 * n - 1;
    for (int num_of_star = 1; num_of_star <= l; num_of_star+=2){
        int num_of_space = (l - num_of_star) / 2;
        for (int j = 0; j < num_of_space; j++){
            cout << " ";
        }
        for (int j = 0; j < num_of_star; j++){
            cout << "*";
        }
        /*for (int j = 0; j < num_of_space; j++){
            cout << " ";
        }*/
        cout << endl; // end line \n, \r, \n\r
    }
    return;
}

int main(){
    print_triangle(9);
    return 0;
}
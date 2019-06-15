/* 
 * loop
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int sum = 0;
    for (int i = 1; i <= 10; i++) sum += i;
    cout << "sum = " << sum << endl;

    sum = 0;
    int i = 1;
    while (i <= 10){
        sum += i;
        i++;
    }
    cout << "sum = " << sum << endl;

    sum = 0; i = 1;
    do {
        sum += i;
        i++;
    } while (i <= 10);
    cout << "sum = " << sum << endl;

    return 0;
}
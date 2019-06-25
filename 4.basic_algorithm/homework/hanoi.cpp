#include <iostream>
#include <cstdlib>

using namespace std;

void move(char from, char to){
    cout << from << " -> " << to << endl;
}

void hanoi(int n, char src, char des, char aux){
    if (n == 1){
        move(src, des);
        return;
    } 

    hanoi(n-1, src, aux, des);
    move(src, des);
    hanoi(n-1, aux, des, src);

    return;
}

int main(){
    int n;
    cin >> n;
    
    hanoi(n, 'A', 'C', 'B');

    return 0;
}


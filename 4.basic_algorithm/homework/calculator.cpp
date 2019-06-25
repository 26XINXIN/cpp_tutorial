#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stack>

using namespace std;


int calculate(char op, int a, int b){
    switch(op){
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
    }
}

int main(){
    char formula[100];
    cin >> formula;
    stack<int> nums;
    stack<char> ops;
    int n = strlen(formula);
    for (int i = n-1; i >= 0; i--){
        char c = formula[i];
        if (c >= '0' && c <= '9'){
            int n = c - '0';
            nums.push(n);
        } else {
            int a = nums.top();
            nums.pop();
            int b = nums.top();
            nums.pop();
            int r = calculate(c, a, b);
            nums.push(r);
        }
    }
    int result = nums.top();
    cout << "= " <<  result << endl;
    return 0;
}
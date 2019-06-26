
#include<stdlib.h>
#include<stack>
#include<string.h>
using namespace std;

int main(){
    char str[1000];
    scanf("%s", &str);
    int n = strlen(str);
    stack<int> num;
    stack<char> op;
    for (int i = n-1; i >= 0; i--){
        char c = str[i];
        int r = 0;
        if (c != '+' && c != '-' && c != '*' && c != '/'){
            int n = c - '0';
            num.push(n);
        } else {
            int a = num.top();
            num.pop();
            int b = num.top();
            num.pop();
        	if(c == '+'){
			r = a + b;	
			}
			if(c == '-'){
				r = a - b;
			}
			if(c == '*'){
				r = a * b;
			}
			if(c == '/'){
				r = a / b;
			}
	        num.push(r);
	    }
    }
    printf("%d", num.top());
    return 0;
}

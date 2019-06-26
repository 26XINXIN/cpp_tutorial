#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

void partial_matching_table(char * pattern, int table[]){
    int l = strlen(pattern);
    table[0] = -1;
    for (int i = 1; i < l; i++){
        int j = table[i - 1];
        if (*(pattern+i-1) == *(pattern+j)){
            table[i] = j + 1;
        } else {
            table[i] = 0;
        }
    }
}

int KMP(char * str, char * pattern) {
    int n = strlen(str);
    int m = strlen(pattern);
    int table[m];
    partial_matching_table(pattern, table);
    /* for (int i = 0; i < m; i++){
        cout << table[i] << ' ';
    }
    cout << endl; */

    int i = 0, j = 0;
    
    while (i < n && j < m){
        if (j == -1) {
            i++;
            j++;
        }
        if (*(str+i) == *(pattern+j)){
            i++;
            j++;
        } else {
            j = table[j];
        }
    }
    // cout << i << ' ' << j << endl;
    if (j == m)
    {
        return i - m;
    } else {
        return -1;
    }
}

int main(){
    char str[1000];
    char pattern[100];
    gets(str);
    gets(pattern);
    cout << KMP(str, pattern) << endl;

    return 0;
}
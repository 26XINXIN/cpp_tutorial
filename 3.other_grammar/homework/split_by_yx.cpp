#include <iostream>
#include <cstdlib>

using namespace std;


int split(char * str, char splitter, char * words[]){
    if (str == NULL || *str == '\0')
        return 0;

    char *it = str;
    int n = 0;
    
    while (*it != '\0')
    {
        char *jt = it;

        // find the end of the word
        while (*jt != splitter && *jt != '\0')
        {
            jt++;
        }

        // save the string
        int l = (jt - it) / sizeof(char);
        words[n] = new char[l + 1];
        strncpy(words[n++], it, l);

        // re-initialize
        if (*jt == '\0'){
            it = jt;
        } else {
            jt++;
            it = jt;
        }
    }
    return n;
}

int main(){
    char str[] = "a quick fox jumps over the lazy dog";
    char *p = str;
    char *words[100];

    int n_words = split(p, ' ', words);

    for (int i = 0; i < n_words; i++){
        cout << words[i] << endl;
    }
    return 0;
}
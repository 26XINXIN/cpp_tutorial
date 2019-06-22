# 3 class homework
#include<stdio.h>
#include<iostream>

using namespace std;

char** split(char* str, char splitter){
	char** words;
	words = new char*[1000];
	int i = 0;
	char* it = str;
	while(*it != '\0'){
		char* jt = it;
		int l = 0;
		while(*jt != splitter && *jt != '\0'){
			jt++; 
			l++;
		}
		char* word = new char[1000];
		for(int j = 0; j < l; j++){
			word[j] = *it;
			it++;
		}
		words[i] = word;
		i++;
		jt++;
		it = jt;
	}
	return words;
}
int main(){
	char str[1000] = "I am happy";
	char *p = str;
	char** words = split(p, ' ');
	for(int i = 0; i < 3; i++){
		cout << words[i] << endl;
	}
	return 0;

}

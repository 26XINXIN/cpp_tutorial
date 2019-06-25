#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;
typedef vector<int> lint;

vector<lint> stairs(int n){
    if (n == 1){
        lint steps;
        steps.push_back(1);
        vector<lint> result;
        result.push_back(steps);
        return result;
    } else if (n == 2) {
        vector<lint> result;
        lint step1;
        lint step2;
        step1.assign(2, 1);
        step2.push_back(2);
        result.push_back(step1);
        result.push_back(step2);
        return result;
    }

    vector<lint> one_res = stairs(n-1);
    vector<lint> two_res = stairs(n-2);
    
    for (lint & step : one_res){
        step.push_back(1);
    }
    for (lint & step : two_res){
        step.push_back(2);
    }
    
    vector<lint> &result = one_res;
    result.insert(result.end(), two_res.begin(), two_res.end());

    return result;
}

vector<lint> stairs2(int n){
    vector<vector<lint> > steps;
    
    lint step1;
    step1.push_back(1);
    vector<lint> steps1;
    steps1.push_back(step1);
    steps.push_back(steps1);

    lint step2;
    lint step3;
    step2.assign(2, 1);
    step3.push_back(2);
    vector<lint> steps2;
    steps2.push_back(step2);
    steps2.push_back(step3);
    steps.push_back(steps2);

    for (int i = 2; i < n; i++){
        vector<lint> one_res(steps[i-1]);
        vector<lint> two_res(steps[i-2]);
        for (lint & step : one_res){
            step.push_back(1);
        }
        for (lint & step : two_res){
            step.push_back(2);
        }
        vector<lint> & step = one_res;
        step.insert(step.end(), two_res.begin(), two_res.end());
        steps.push_back(step);
    }
    return steps[n-1];
    
}

int main(){
    int n = 5;
    // cin >> n;
    
    vector<lint> result = stairs2(n);
    
    cout << "total steps = " << result.size() << endl;
    for (lint & step : result){
        for (int s : step){
            cout << s << ' ';
        }
        cout << endl;
    }

    return 0;
}
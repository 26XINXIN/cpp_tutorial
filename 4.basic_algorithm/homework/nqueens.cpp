#include <iostream>
#include <cstdlib>
#include <vector>
#include <set>
// #include <utility>


using namespace std;
// typedef pair<int, int> location;


set<int> find_inavailable(int n, vector<int> & path){
    set<int> inavail;
    for (int i = 0; i < path.size(); i++){
        int j = path[i];
        inavail.insert(j);
        if (j + path.size() - i < n){
            inavail.insert(j + path.size() - i);
        }
        if (j - path.size() + i >= 0){
            inavail.insert(j - path.size() + i);
        }
    }
    return inavail;
}


void nqueens(int n, vector<int> path, vector<vector<int> > & result){
    set<int> inavailable = find_inavailable(n, path);
    
    for (int i = 0; i < n; i++){
        if (inavailable.find(i) == inavailable.end()){
            vector<int> new_path(path);
            new_path.push_back(i);
            if (new_path.size() == n){
                result.push_back(new_path);
            } else {
                nqueens(n, new_path, result);
            }
        }
    }
}

int main(){
    int n;
    cin >> n;
    
    vector<vector<int> > result;
    nqueens(n, vector<int>(), result);
    cout << "total result = " << result.size() << endl;

    char res[result.size()][n][n];
    for (int i = 0; i < result.size(); i++){
        for (int j = 0; j < n; j++){
            int m = result[i][j];
            for (int k = 0; k < n; k++){
                if (k == m){
                    res[i][j][k] = 'Q';
                } else {
                    res[i][j][k] = '.';
                }
            }
        }
    }
    
    for (int i = 0; i < result.size(); i++){
        cout << "result " << i << " :" << endl;
        for (int j = 0; j < n; j++){
            for (int k = 0; k < n; k++){
                cout << res[i][j][k];
            }
            cout << endl;
        }
    }
}

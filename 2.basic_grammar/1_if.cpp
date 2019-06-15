/*
 * if
 */

#include <iostream> // cin, cout
#include <cstdlib> // endl
#include <cstring> // strcmp
using namespace std;

int main()
{
    // login system
    char username[10], password[10];
    cin >> username >> password;
    if (strcmp(username, "admin") == 0 
        && strcmp(password, "123456") == 0){
        cout << "login succeed!" << endl;
    } else {
        cout << "invalid username or password" << endl;
    }

    // days in a week
    int day;
    cin >> day;
    if (day == 1){
        cout << "Monday" << endl;
    } else if (day == 2) {
        cout << "Tuesday" << endl;
    } else if (day == 3) {
        cout << "Wednesday" << endl;
    } else if (day == 4) {
        cout << "Thursday" << endl;
    } else if (day == 5) {
        cout << "Friday" << endl;
    } else if (day == 6) {
        cout << "Saturday" << endl;
    } else if (day == 7){
        cout << "Sunday" << endl;
    } else {
        cout << "invalid day" << endl;
    }

    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "invalid day" << endl;
    }

    int cond = 1;
    if (cond) {
        cout << "cond == 1, condition satisfied" << endl;
    }
    cond = 0;
    if (cond) {
        cout << "cond == 0, condition satisfied" << endl;
    }

    return 0;
}
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    string expr = "((a+b)*(c-d)))"; 
    stack<char> s;
    bool correct = true;

    for (char ch : expr) {
        if (ch == '(') {
            s.push(ch); 
        } else if (ch == ')') {
            if (!s.empty()) {
                s.pop(); 
            } else {
                correct = false; 
                break;
            }
        }
    }

    if (!s.empty()) {
    correct = false;
    }

    if (correct){
        cout << "Correct" << endl;
    }
    else{
        cout << "Incorrect" << endl;
    }
    return 0;
}

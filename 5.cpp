#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main(){
    string name;
    queue<string> customers;
    for (int i=1; i<=5; i++){
        cout<<"Enter name"<<i<<": ";
        getline(cin,name);
        customers.push(name);
    }
    while(!customers.empty()){
        cout<<"Now serving:"<<customers.front()<<endl;
        customers.pop();
    }
    cout<<"Queue is empty";
}
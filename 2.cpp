#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main(){
    int n,f;
    bool gu = false;
    set<int> sol;
    for(int i=0;i<10;i++){
        cin>>n;
        sol.insert(n);
    }
    cout<<"Enter the number, that u wanna find:";
    cin>>f;
    cout<<endl;
    if(sol.find(f)==sol.end()){
        cout<<"The number isn^t exist in the set"<<endl;
    }
    else{
        cout<<"The number is exist"<<endl;
    }
    for(auto it=sol.begin();it!=sol.end();it++){
        cout<<*it<<" ";
    }
}
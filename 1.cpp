#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
using namespace std;
int main(){
    vector<int> ran(10);
    generate(ran.begin(),ran.end(),[](){
        return rand() % 99 + 1;
    });
    auto minel=min_element(ran.begin(),ran.end());
    auto maxel=max_element(ran.begin(),ran.end());
    cout<<"min element:"<<*minel<<endl;
    cout<<"max element:"<<*maxel<<endl;
    sort(ran.begin(),ran.end());
    auto it=unique(ran.begin(),ran.end());
    ran.erase(it,ran.end());
    for(int i=0; i<10; i++){
        cout<<ran[i]<<" ";
    }
}
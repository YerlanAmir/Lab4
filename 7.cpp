#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    vector<int> numbers;
    for(int i=1;i<=20;i++){
        numbers.push_back(i);
    }
    reverse(numbers.begin(),numbers.end());
    int evens=count_if(numbers.begin(),numbers.end(),[](int n){
        return n %2 == 0;
    });
    cout<<"4etnie 4isla:"<<evens<<" "<<endl;
    numbers.erase(remove_if(numbers.begin(),numbers.end(),[](int n){
        return n % 3==0;
    }),numbers.end());
    cout<<"Ostalos:";
    for(int ch : numbers){
        cout<< ch<<" ";
    }
    cout<<endl;
}

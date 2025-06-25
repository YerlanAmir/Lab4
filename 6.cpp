#include <iostream>
#include <vector>
using namespace std;

double average(const vector<int>& v){
    if(v.empty()){
        return 0.0;
    }
    int sum=0;
    for(auto it = v.begin(); it!=v.end();it++){
        sum += *it;
    }
    return static_cast<double>(sum)/v.size();
}
int main(){
    int n;
    cin>>n;
    int sum=0;
    vector<int> numbers(n);
    for(int i=0;i<n;i++){
        cin>>numbers[i];
    }
    for(int i=0;i<n;i++){
        sum+=numbers[i];
    }
    double result = average(numbers);
    cout<<"Average: "<<result<<endl;
    cout<<"The sum is: "<<sum;
}

#include <iostream> 
#include <map>
#include <sstream>
using namespace std;
int main(){
    string input="this is a test this is only a test";
    map<string,int> words;
    stringstream j(input);
    // string word;
    // while(j>>word)
    //     words[word]++;
    // for (auto& w : words)
    // cout<<w.first<<" ->"<<w.second<<endl;
    cout<<input;
}
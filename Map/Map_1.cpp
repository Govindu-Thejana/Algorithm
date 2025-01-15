#include <iostream>
#include <map> //This is ordered_map
// for to add unordered map #include<unordered_map>
#include <string>
using namespace std;

int main() {
    map<string,string> Dictionary;
    Dictionary.insert(pair<string,string>("A","apple" ));
    Dictionary.insert(pair<string,string>("B","banana" ));
    Dictionary.insert(pair<string,string>("C","cake" ));
    Dictionary.insert(pair<string,string>("D","cake" ));

    for (auto x: Dictionary) 
    {
        cout<< x.first<<" "<<x.second<<endl;
    }
    
    for(map<string,string> ::iterator it =Dictionary.begin();it!=Dictionary.end();++it){
        cout<<it->first<<" "<<it->second<<endl;
    }

    




}
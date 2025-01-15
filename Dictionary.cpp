#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {

    map<int, string> myMap;

    myMap.insert(pair<int, string>(1, "one"));
    myMap.insert(pair<int, string>(2, "two"));
    myMap.insert(pair<int, string>(3, "three"));

    for (map<int, string>::iterator it = myMap.begin(); it != myMap.end(); ++it) {
        cout << it->first << ", " << it->second << endl;
    }

    return 0;
}

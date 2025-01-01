#include <iostream> 
#include <map>
using namespace std;


int main(){

    map<string, int> marks;

    marks["Harris"] = 78;
    marks["jack"] = 65;
    marks["roman"] = 76;
    marks.insert({"Bob", 30});
    marks.emplace("Charlie", 35);

    // Find an element
    auto it = marks.find("Harris");
    if (it != marks.end()) {
        cout << "Harris's age: " << it->second << endl;
    } else {
        cout << "Harris not found." << endl;
    }

    marks.erase("Charlie");

    cout << "Total people in the map: " << marks.size() << endl;

    for(const auto & students : marks){
        cout << students.first << " : " << students.second << " marks" << endl;
    }
    

     
    return 0;
}
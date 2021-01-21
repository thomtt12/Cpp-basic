#include <iostream>
using namespace std;

int main(){

    //references
    string food = "Pizza";
    string &meal = food;
    cout<<food<<"\n";
    cout<<meal<<"\n";
    //memory address
    cout<<&food;

    
    return 0;
}

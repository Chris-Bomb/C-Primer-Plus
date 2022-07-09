#include <iostream>
/*
//2.1
int main() {
    using namespace std;
    cout << "Come up and C++ me some time.";
    cout << endl;
    cout << "You won't regret it!"<<endl;
    return 0; // terminal main()
}
*/


//2.2
int main(){
    using namespace std;

    int carrots;                                    // declare an integer variable

    carrots = 25;                                   // assign a value to the variable
    cout << "I have ";
    cout << carrots;                                // display the value of the variable
    cout << "carrots.";
    cout << endl;
    carrots = carrots - 1;                          // modify the variable
    cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;
    return 0;
}

#include <iostream>


using namespace std;

int main(){
    int passes[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1,}; 
    int failures[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1,}; 
    int numofstudents = 10;
    int result;

    for (int students = 0; students < numofstudents; ++students) {
        cout << "Enter students test score: " << endl;
        cin >> result;

            if ( result > 50 ){
                passes[students] = result;
            }
            else {
                failures[students] = result;
            }

    }

    for (int pass : passes){
        if (pass >= 0){
        cout << pass << endl;
        }
    }
    for (int fail : failures){
        if (fail >= 0){
        cout << fail << endl;
        }
    }

    if (passes[7] > 0){
        
        cout << "raise the tuition" << endl;
    }
    return 0;
}
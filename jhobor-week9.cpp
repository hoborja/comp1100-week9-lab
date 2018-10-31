#include <iostream>


using namespace std;

int main(){
    int passes[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1,};  // initialized arrays and variables//
    int failures[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1,}; 
    int numofstudents = 10;
    int result;

    for (int students = 0; students < numofstudents; ++students) { //loops through all 10 students if the student gets over 50 it puts grade into passes array if its less than 50 puts grade into the failures array//
        cout << "Enter students test score: " << endl;
        cin >> result;

            if ( result >= 50 ){
                passes[students] = result;
            }
            else {
                failures[students] = result;
            }

    }

    for (int pass : passes){ // passes through all vectors in passes arrray if the interger is greater than or equal to 0 it will print the grade to the screen//
        if (pass >= 0){
        cout << pass << endl;
        }
    }
    for (int fail : failures){ // passes through all vectors in failures arrray if the interger is greater than or equal to 0 it will print the grade to the screen//
        if (fail >= 0){
        cout << fail << endl;
        }
    }

    if (passes[7] > 0){ // if there are more than 8 passing grades output to screen//
        
        cout << "raise the tuition" << endl;
    }
    return 0;
}
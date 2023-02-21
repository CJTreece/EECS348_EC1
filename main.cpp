//Carson Treece
//EECS 348 Extra Credit Lab 1
//Date Created: 2/16/23
//Date Last Modified: 2/16/23


#include <string>
#include <iostream>
#include <fstream>

using namespace std;

void arrayTestPrint(int programmers[5][5], int departments[5][5]) {

    for (int i = 0; i < 5; i++) {

        cout << "Programmer " << i + 1 << ": ";
        for (int j = 0; j < 5; j++) {

            cout << programmers[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\n";
    for (int i = 0; i < 5; i++) {

        cout << "Department " << i + 1 << ": ";
        for (int j = 0; j < 5; j++) {

            cout << departments[i][j] << " ";
        }
        cout << endl;
    }

}

int main() {

    //declaring variables
    int programmers[5][5];
    int departments[5][5];

    //opening file
    ifstream inFile;
    inFile.open("input.txt");

    //reading in file
    for (int i = 0; i < 5; i++) {

       for (int j = 0; j < 5; j++) {

                inFile >> departments[j][i];
            }
    }

    for (int i = 0; i < 5; i++) {

        for (int j = 0; j < 5; j++) {

            inFile >> programmers[j][i];
        }
    }
        

    //closing file
    inFile.close();

    //printing arrays to make sure they are correct
    arrayTestPrint(programmers, departments);


    //out of time to finish program
    
    return 0;
}
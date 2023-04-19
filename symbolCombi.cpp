#include <iostream>
#include <ctime>
#include <chrono>
#include <algorithm>
#include <stdlib.h>
#include "time.h"
#include "symbolCombi.h"

using namespace std;


void printarray(char arr[]){
    cout << "┏━━━┓┏━━━┓┏━━━┓┏━━━┓" << endl;
    cout << "┃" << " " << arr[0] << " " << "┃" << "┃" << " " << arr[1] << " " << "┃" << "┃" << " " << arr[2] << " " << "┃"  << "┃" << " " << arr[3] << " " << "┃" << endl;
    cout << "┗━━━┛┗━━━┛┗━━━┛┗━━━┛" << endl;

}

int symbol(chrono::steady_clock::time_point& end_time) {

    while (chrono::steady_clock::now() < end_time) {
        srand(time(NULL));

        char two_d_list[3][7] = {
                {'a', 'b', 'c', 'd', 'e', '!', '@'},
                {'f', 'i', 'j', 'k', 'l', '#', '$'},
                {'m', 'n', 'o', 'p', 'q', '%', '^'}
        };
        cout << "THIS IS A COMBINATION LOCK" << endl;
//        cout << "Only one row below has all four of the symbols from the keypad." << endl;
//        cout << "'a', 'b', 'c', 'd', 'e', '!', '@'" << endl;
//        cout << "'f', 'i', 'j', 'k', 'l', '#', '$'" << endl;
//        cout << "'m', 'n', 'o', 'p', 'q','%','^'" << endl;
//        cout << "Type the four symbols in the order their symbols appear from left to right within that row." << endl;
        int random_row = rand() % 3;
        //    cout << random_row << endl;
        char list1[7]; // declare list1 as a one-dimensional character array
        int random_indices[4];
        for (int i = 0; i < 7; i++) {
            list1[i] = two_d_list[random_row][i];
            //        cout << list1[i]<<",";

        }
        cout << endl;

        for (int i = 0; i < 4; i++) {
            int index;
            do {
                index = rand() % 7;
            } while (index == random_indices[0] || index == random_indices[1] || index == random_indices[2] ||
                     index == random_indices[3]);
            random_indices[i] = index;
        }
        char output[4];
        cout << "Here is the jumbled keypads: " << endl;
        for (int i = 0; i < 4; i++) {
            output[i] = list1[random_indices[i]];
//            cout << list1[random_indices[i]] << " ";
        }
        printarray(output);
        int n = sizeof(output) / sizeof(*output);

        char correctAnswer[4];
        cout << endl;
        int indexForCorrectAnswer = 0;
        for (int i = 0; i < sizeof(list1); i++) {
            bool exists = std::find(output, output + n, list1[i]) != output + n;
            if (exists) {
                //            cout << list1[i]<<" ";
                //            cout << "Element found"<<endl;
                correctAnswer[indexForCorrectAnswer] = list1[i];
                //            cout<< correctAnswer[indexForCorrectAnswer]<<",";
                indexForCorrectAnswer++;


            } else {
                continue;
                //            cout << "Element not found"<<endl;
            }

        }
        cout << endl;

        string userInput;

        int count = 0;
        while (chrono::steady_clock::now() < end_time && count != 5) {
            cout << "Your input: ";
            cin >> userInput;
            //        cout<<"User input is:"<<userInput<<endl;
            //        cout<<userInput.length()<<endl;
            for (int i = 0; i < userInput.length(); i++) {
                //            cout<<"User index i: "<<userInput[i] << " correctAnswer : " << correctAnswer[i]<<endl;
                if (userInput[i] == correctAnswer[i]) {
                    count++;
                }
                //            cout<<count<<endl;
            }
            if (count == 4) {
                cout << "Congratualation!! Move on to the next puzzle" << endl;

                return 1;
            } else {
                cout << "Wrong 5 seconds deducted" << endl;
                end_time -= chrono::seconds(5);
                auto remaining_time = chrono::duration_cast<chrono::seconds>(end_time - chrono::steady_clock::now());
                cout << "Time remaining: " << remaining_time.count() << " seconds" << endl;

                count = 0;

            }
        }
    }
    return 0;
}
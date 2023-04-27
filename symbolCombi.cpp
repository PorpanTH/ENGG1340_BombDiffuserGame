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

        char two_d_list[4][7] = {
                {'A', '!', '$', '?', 'B', '&', '@'},
                {'b', 'M', '=', '>', '5', 'U', 'x'},
                {'}', 'W', 'Z', 'S', 'i', '%', '+'},
                {'3', '<', '#', 'Y', 'T', '6', 'H'}
        };
        int random_row = rand() % 4;
        char list1[7]; // declare list1 as a one-dimensional character array
        int random_indices[4];
        for (int i = 0; i < 7; i++) {
            list1[i] = two_d_list[random_row][i];

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
        cout << "This it the SYMBOLS COMBINATION LOCK game" << endl;
        cout << "Here is the jumbled keypads: " << endl;
        for (int i = 0; i < 4; i++) {
            output[i] = list1[random_indices[i]];
        }
        printarray(output);
        int n = sizeof(output) / sizeof(*output);

        char correctAnswer[4];
        cout << endl;
        int indexForCorrectAnswer = 0;
        for (int i = 0; i < sizeof(list1); i++) {
            bool exists = std::find(output, output + n, list1[i]) != output + n;
            if (exists) {
                correctAnswer[indexForCorrectAnswer] = list1[i];
                indexForCorrectAnswer++;


            } else {
                continue;
            }

        }
        cout << endl;

        string userInput;

        int count = 0;
        while (chrono::steady_clock::now() < end_time && count != 5) {
            cout << "Your input: ";
            cin >> userInput;
            for (int i = 0; i < userInput.length(); i++) {
                //            cout<<"User index i: "<<userInput[i] << " correctAnswer : " << correctAnswer[i]<<endl;
                if (userInput[i] == correctAnswer[i]) {
                    count++;
                }
            }
            if (count == 4) {
                cout << "Congratualation!! Move on to the next puzzle" << endl;
                auto remaining_time = chrono::duration_cast<chrono::seconds>(end_time - chrono::steady_clock::now());
                cout << "Time remaining: " << remaining_time.count() << " seconds" << endl;
                cout<< endl;
                return 1;
            } else {
                cout << "Wrong 5 seconds deducted" << endl;
                end_time -= chrono::seconds(5);
                auto remaining_time = chrono::duration_cast<chrono::seconds>(end_time - chrono::steady_clock::now());
                cout << "Time remaining: " << remaining_time.count() << " seconds" << endl;
                cout << endl;
                count = 0;

            }
        }
    }
    return 0;
}

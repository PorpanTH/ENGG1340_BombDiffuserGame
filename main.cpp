
//
//#include <iostream>
//#include <ctime>
//#include <algorithm>
//#include <iomanip>
//#include <stdlib.h>
//#include <unistd.h>
//
//#include <thread>
//
//using namespace std;
//
////int hours = 0;
//int minutes = 0;
//int seconds = 5;
//
//void displayClock()
//
//{
//    cout <<setfill(' ') <<setw(55) <<"         TIMER         \n";
//
//    cout <<setfill(' ') <<setw(55) <<" -----------------------\n";
//
//    cout <<setfill(' ') <<setw(35);
//
////    cout <<"| " <<setfill('0') <<setw(2) <<hours <<" hrs | ";
//    cout <<"| " <<setfill('0') <<setw(2) ;
//
//    cout <<setfill('0') <<setw(2) <<minutes <<" min | ";
//
//    cout <<setfill('0') <<setw(2) <<seconds <<" sec |" <<endl;
//
//    cout <<setfill(' ') <<setw(55) <<" -----------------------\n";
//}
//void timer(){
//
//    while (true) {
//        displayClock();
//        sleep(1);
//        seconds--;
//        if(minutes==0 && seconds ==0){
//            cout<< setw(48);
//            cout << "Times out"<<endl;
//            break;
//        }
//        if (seconds == 0) {
//            minutes--;
//
////            if (minutes == 0) {
////                hours--;
////                minutes = 0;
////            }
//
//            seconds = 59;
//        }
//
//    }
//}
//
////void threadfunction(){
////    //Timer stuff here
////}
//
//int symbol() {
//
//    timer();
////    thread t1(threadfunction);
//    // your game here
////    t1.join();
//    srand(time(NULL));
//
//    char two_d_list[3][7] = {
//            {'a', 'b', 'c', 'd', 'e', '!', '@'},
//            {'f', 'i', 'j', 'k', 'l', '#', '$'},
//            {'m', 'n', 'o', 'p', 'q','%','^'}
//    };
//    cout<<"Only one row below has all four of the symbols from the keypad."<<endl;
//    cout<<"'a', 'b', 'c', 'd', 'e', '!', '@'"<<endl;
//    cout<<"'f', 'i', 'j', 'k', 'l', '#', '$'"<<endl;
//    cout<<"'m', 'n', 'o', 'p', 'q','%','^'"<<endl;
//    cout<<"Type the four symbols in the order their symbols appear from left to right within that row."<<endl;
//    int random_row = rand() % 3;
////    cout << random_row << endl;
//    char list1[7]; // declare list1 as a one-dimensional character array
//    int random_indices[4];
//    for (int i = 0; i < 7; i++) {
//        list1[i] = two_d_list[random_row][i];
////        cout << list1[i]<<",";
//
//    }
//    cout << endl;
//
//    for (int i = 0; i < 4; i++) {
//        int index;
//        do {
//            index = rand() % 7;
//        } while (index == random_indices[0] || index == random_indices[1] || index == random_indices[2] ||
//                 index == random_indices[3]);
//        random_indices[i] = index;
//    }
//    char output[4];
//    cout <<"Here is the jumbled keypads: "<<endl;
//    for (int i = 0; i < 4; i++) {
//        output[i]=list1[random_indices[i]];
//        cout  << list1[random_indices[i]] << " ";
//    }
//    int n = sizeof(output) / sizeof(*output);
//
//    char correctAnswer[4];
//    cout<<endl;
//    int indexForCorrectAnswer =0;
//    for(int i =0; i< sizeof(list1); i++){
//        bool exists = std::find(output, output + n, list1[i]) != output + n;
//        if (exists) {
////            cout << list1[i]<<" ";
////            cout << "Element found"<<endl;
//            correctAnswer[indexForCorrectAnswer]=list1[i];
////            cout<< correctAnswer[indexForCorrectAnswer]<<",";
//            indexForCorrectAnswer++;
//
//
//        } else {
//            continue;
////            cout << "Element not found"<<endl;
//        }
//
//    }
//    cout<<endl;
//
//    string userInput;
//
//    int count=0;
//    while(count !=5){
//        cout <<"Your input: ";
//        cin >> userInput;
////        cout<<"User input is:"<<userInput<<endl;
////        cout<<userInput.length()<<endl;
//        for(int i=0; i< userInput.length();i++){
////            cout<<"User index i: "<<userInput[i] << " correctAnswer : " << correctAnswer[i]<<endl;
//            if(userInput[i]==correctAnswer[i]){
//                count++;
//            }
////            cout<<count<<endl;
//        }
//        if(count==4){
//            cout<<"Congratualation!! Move on to the next puzzle"<< endl;
//            return 0;
//        } else{
//            cout <<"Wrong 5 seconds deducted"<<endl;
//            count=0;
//        }
//    }
//
//
//    cout << endl;
//
//}

//
//#include <iostream>
//#include <thread>
//#include "symbolCombi.h"
//
//using namespace std;
//
//void printToWindow(int windowNum) {
//    for (int i = 0; i < 10; i++) {
//        cout << "Hello from window " << windowNum << std::endl;
//    }
//}
//
//int main() {
//    symbol();
//    // Create two threads, each printing to a separate output window
////    thread t1(int num){ printToWindow(num); }, 1); // passing 1 as the argument to printToWindow
////    thread t2(int num){ printToWindow(num); }, 2); // passing 2 as the argument to printToWindow
////
////    // Wait for the threads to finish
////    t1.join();
////    t2.join();
//
//    return 0;
//}
//

//
//#include <iostream>
//#include <iomanip>
//#include <string>
//#include <thread>
//#include <chrono>
//
//const int screenWidth = 80;
//const int screenHeight = 24;
//
//void drawHorizontalLine() {
//    for (int i = 0; i < screenWidth; ++i) {
//        std::cout << '-';
//    }
//    std::cout << std::endl;
//}
//
//void clearScreen() {
//    for (int i = 0; i < screenHeight; ++i) {
//        std::cout << std::endl;
//    }
//}
//
//void simulateTerminalScreen(int screenNumber) {
//    std::string message = "Simulated Terminal Screen " + std::to_string(screenNumber);
//    std::cout << std::setw((screenWidth - message.length()) / 2) << message << std::endl;
//    std::cout << "Content of terminal screen " << screenNumber << " goes here." << std::endl;
//}
//
//int main() {
////    clearScreen();
//    int counter = 60; //amount of seconds
//    Sleep(1000);
//    while (counter >= 1)
//    {
//        cout << "\rTime remaining: " << counter << flush;
//        Sleep(1000);
//        counter--;
//    }
////    drawHorizontalLine();
////    simulateTerminalScreen(1);
////    drawHorizontalLine();
////    simulateTerminalScreen(2);
////    drawHorizontalLine();
////
////    // Pause the program to view output
////    std::this_thread::sleep_for(std::chrono::seconds(5));
//
//    return 0;
//}


//#include <iostream>
//#include <chrono>
//#include <thread>
//#include "symbolCombi.h"
//#include "time.h"
//using namespace std;
//
////void symbol();
////chrono::time_point<std::chrono::steady_clock> end_time;
////std::chrono::time_point<std::chrono::steady_clock> start_time;
////std::chrono::time_point<std::chrono::steady_clock> end_time;
//
//int main() {
//    start_time = chrono::steady_clock::now();
//    end_time = start_time + chrono::seconds(100);
//
//    while (chrono::steady_clock::now() < end_time) {
//        // do some other work here
//        this_thread::sleep_for(chrono::milliseconds(100));
//
//        // check for user input
//
//        symbol();
//    }
//
//    cout << "Time's up!" << endl;
//    return 0;
//}
//


#include <iostream>
#include <ctime>
#include <chrono>
#include <algorithm>
#include <stdlib.h>
#include "time.h"
#include "symbolCombi.h"

using namespace std;

//int hours = 0;
//int minutes = 0;
//int seconds = 5;
//std::chrono::time_point<std::chrono::steady_clock> start_time;
//std::chrono::time_point<std::chrono::steady_clock> end_time;

void symbol() {
//    timer();
//    thread t1(threadfunction);
    // your game here
//    t1.join();
    srand(time(NULL));

    char two_d_list[3][7] = {
            {'a', 'b', 'c', 'd', 'e', '!', '@'},
            {'f', 'i', 'j', 'k', 'l', '#', '$'},
            {'m', 'n', 'o', 'p', 'q', '%', '^'}
    };
    cout << "Only one row below has all four of the symbols from the keypad." << endl;
    cout << "'a', 'b', 'c', 'd', 'e', '!', '@'" << endl;
    cout << "'f', 'i', 'j', 'k', 'l', '#', '$'" << endl;
    cout << "'m', 'n', 'o', 'p', 'q','%','^'" << endl;
    cout << "Type the four symbols in the order their symbols appear from left to right within that row." << endl;
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
        cout << list1[random_indices[i]] << " ";
    }
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
    while (count != 4) {
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

//            return 0;
        } else {
            cout << "Wrong 5 seconds deducted" << endl;
            end_time -= chrono::seconds(5);
            auto remaining_time = chrono::duration_cast<chrono::seconds>(end_time - chrono::steady_clock::now());
            cout << "Time remaining: " << remaining_time.count() << " seconds" << endl;

            count = 0;

        }
    }
//    return 0;
}
#include <iostream>
#include <chrono>
#include <thread>
#include "symbolCombi.h"
#include "time.h"
using namespace std;

//void symbol();
std::chrono::time_point<std::chrono::steady_clock> start_time;
std::chrono::time_point<std::chrono::steady_clock> end_time;

int main() {
    start_time = chrono::steady_clock::now();
    end_time = start_time + chrono::seconds(100);

    while (chrono::steady_clock::now() < end_time) {
        this_thread::sleep_for(chrono::milliseconds(100));

        symbol();
        //next game;
    }

    cout << "Time's up!" << endl;
    return 0;
}

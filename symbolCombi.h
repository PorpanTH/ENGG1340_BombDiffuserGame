

#include <iostream>
#include <ctime>
#include <algorithm>
#include <iomanip>
#include <stdlib.h>
#include <unistd.h>

//#include <thread>

using namespace std;

//int hours = 0;
int minutes = 0;
int seconds = 5;

void displayClock()

{
    cout <<setfill(' ') <<setw(55) <<"         TIMER         \n";

    cout <<setfill(' ') <<setw(55) <<" -----------------------\n";

    cout <<setfill(' ') <<setw(35);

//    cout <<"| " <<setfill('0') <<setw(2) <<hours <<" hrs | ";
    cout <<"| " <<setfill('0') <<setw(2) ;

    cout <<setfill('0') <<setw(2) <<minutes <<" min | ";

    cout <<setfill('0') <<setw(2) <<seconds <<" sec |" <<endl;

    cout <<setfill(' ') <<setw(55) <<" -----------------------\n";
}
void timer(){

    while (true) {
        displayClock();
        sleep(1);
        seconds--;
        if(minutes==0 && seconds ==0){
            cout<< setw(48);
            cout << "Times out"<<endl;
            break;
        }
        if (seconds == 0) {
            minutes--;

//            if (minutes == 0) {
//                hours--;
//                minutes = 0;
//            }

            seconds = 59;
        }

    }
}

//void threadfunction(){
//    //Timer stuff here
//}

int symbol() {

    timer();
//    thread t1(threadfunction);
    // your game here
//    t1.join();
    srand(time(NULL));

    char two_d_list[3][7] = {
            {'a', 'b', 'c', 'd', 'e', '!', '@'},
            {'f', 'i', 'j', 'k', 'l', '#', '$'},
            {'m', 'n', 'o', 'p', 'q','%','^'}
    };
    cout<<"Only one row below has all four of the symbols from the keypad."<<endl;
    cout<<"'a', 'b', 'c', 'd', 'e', '!', '@'"<<endl;
    cout<<"'f', 'i', 'j', 'k', 'l', '#', '$'"<<endl;
    cout<<"'m', 'n', 'o', 'p', 'q','%','^'"<<endl;
    cout<<"Type the four symbols in the order their symbols appear from left to right within that row."<<endl;
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
    cout <<"Here is the jumbled keypads: "<<endl;
    for (int i = 0; i < 4; i++) {
        output[i]=list1[random_indices[i]];
        cout  << list1[random_indices[i]] << " ";
    }
    int n = sizeof(output) / sizeof(*output);

    char correctAnswer[4];
    cout<<endl;
    int indexForCorrectAnswer =0;
    for(int i =0; i< sizeof(list1); i++){
        bool exists = std::find(output, output + n, list1[i]) != output + n;
        if (exists) {
//            cout << list1[i]<<" ";
//            cout << "Element found"<<endl;
            correctAnswer[indexForCorrectAnswer]=list1[i];
//            cout<< correctAnswer[indexForCorrectAnswer]<<",";
            indexForCorrectAnswer++;


        } else {
            continue;
//            cout << "Element not found"<<endl;
        }

    }
    cout<<endl;

    string userInput;

    int count=0;
    while(count !=5){
        cout <<"Your input: ";
        cin >> userInput;
//        cout<<"User input is:"<<userInput<<endl;
//        cout<<userInput.length()<<endl;
        for(int i=0; i< userInput.length();i++){
//            cout<<"User index i: "<<userInput[i] << " correctAnswer : " << correctAnswer[i]<<endl;
            if(userInput[i]==correctAnswer[i]){
                count++;
            }
//            cout<<count<<endl;
        }
        if(count==4){
            cout<<"Congratualation!! Move on to the next puzzle"<< endl;
            return 0;
        } else{
            cout <<"Wrong 5 seconds deducted"<<endl;
            count=0;
        }
    }


    return 0;
}
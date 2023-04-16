#include "symbolCombi.h"
#include "word_game.h"
#include "leaderboard.h"
#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include "cut_wire.h"
#include "number_game.h"

using namespace std;

void start_game(vector <Entry> &info){
    cout << "loading save data...";
    this_thread::sleep_for(chrono::seconds(1));
    cout << endl;
    load_save(info); 
}

void end_game(vector <Entry> &info, int score){
    string name;
    cout << "Please enter your name: ";
    cin >> name;
    cout << endl;
    Entry entry = {name, score}; 
    new_entry(info, entry);
    write_save(info);
    print_leaderboard(info);
    
}

int main(){
    
    vector <Entry> info; //declare vector for leaderboard
    int score; //from timer

    start_game(info);
    
    //add game implementation
    word_game();
    number_game();
    cut_wire();
    symbolCombi();
    //end 

    //score = function() add function for timer value
    //score = 1000;    
    end_game(info, score);

    return 1;
}

// word_game.h
#ifndef LEADERBOARD_H
#define LEADERBOARD_H

#include <string>
#include <vector>

using namespace std;

struct Entry{
    string name;
    int score;
};

bool operator<(const Entry &a, const Entry &b){
    return (a.score < b.score) ? true : false;
}

void print_leaderboard(vector <Entry> &info); //print leaderboard at the end

void load_save(vector <Entry> &info); //read save data from file at beginning of program
                                     //users can use their own file with previous save data or "cheats"

void write_save(vector <Entry> &info); //write save data to file at end of program

void new_entry(vector <Entry> &info, Entry entry); //add new time returned at the end

#endif

// word_game.h
#ifndef WORD_GAME_H
#define WORD_GAME_H

#include <string>

using namespace std;

int select_main_word(string words[6][15], string &main_word);  
//1)what it does: randomly select the main word from column one
//2)what the inputs are: 
//a)words: 2D array holding the words
//b)main_word: variable to hold the main_word
//3)what the outputs are: returns an integer that contains the row of main_word. This value is stored in main_index for later use.

void select_words(string words[6][15], string &word1, string &word2, string &word3, string &word4, string &word5, string &word6); 
//1)what it does: select 6 random words from "words" array and assign them to a variable using a reference
//2)what the inputs are: 
//a)words: 2D array holding the words
//b)word1, word2, word3, word4, word5, word6: to store the 6 randomly selected words
//3)what the outputs are: no output

void print_ui(string main_word, string word1, string word2, string word3, string word4, string word5, string word6); 
//1)what it does: print the user interface
//2)what the inputs are: 
//a)main_word: to store the main word
//b)word1, word2, word3, word4, word5, word6: to store the 6 randomly selected words
//3)what the outputs are: no output

string find_word(string words[6][15], int main_index, string main_word, string word1, string word2, string word3, string word4, string word5, string word6); 
//1)what it does: find the correct answer
//2)what the inputs are: 
//a)main_word, word1, word2, word3, word4, word5, word6: same as earlier
//b)main_index: contains which row main_word is from
//3)what the outputs are: correct answer to the puzzle

bool check_word(string answer, string user_word); 
//1)what it does: check if user input is correct
//2)what the inputs are: 
//a)answer: correct answer
//b)user_word: user input
//3)what the outputs are: 1 if answer is correct, else 0

int word_game();
//main function

#endif

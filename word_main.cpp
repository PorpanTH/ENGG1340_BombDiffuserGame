#include <iostream>
#include <string>
#include <random>
#include "word_game.h"

using namespace std;

int main(){
    
    //create list of words in an array with 14 columns and 6 rows
   string words[6][15] = {{"FLUTE","PAUSE","SPARK","SMOKE","TIMER","WRONG","PRESS","LOOSE","THINK","FLUTE","BURNT","FIRST","UHH:(","HELP!","WAIT!"},{"FIRST","WRONG","SPARK","PAUSE","TIMER","BURNT","LOOSE","HELP!","UHH:(","WAIT!","FLUTE","THINK","SMOKE","PRESS","FIRST"},{"BURNT","THINK","UHH:(","WAIT!","FIRST","SMOKE","FLUTE","LOOSE","PAUSE","HELP!","WRONG","PRESS","SPARK","BURNT","TIMER"},{"THINK","WAIT!","LOOSE","SPARK","TIMER","THINK","PRESS","FLUTE","HELP!","BURNT","SMOKE","WRONG","UHH:(","PAUSE","FIRST"},{"THING","UHH:(","LOOSE","SPARK","TIMER","PAUSE","THINK","BURNT","PRESS","WRONG","SMOKE","WAIT!","FIRST","HELP!","FLUTE"},{"PAUSE","SPARK","LOOSE","UHH:(","TIMER","FIRST","SMOKE","PRESS","FLUTE","HELP!","PAUSE","WRONG","THINK","BURNT","WAIT!"}};
    //initialise all the variables
    string main_word, word1, word2, word3, word4, word5, word6, answer, user_word;    
    int main_index;

    srand((unsigned) time(NULL)); //generate a seed

    main_index = select_main_word(words, main_word);
    select_words(words, word1, word2, word3, word4, word5, word6);
    answer = find_word(words, main_index, main_word, word1, word2, word3, word4, word5, word6);
    print_ui(main_word, word1, word2, word3, word4, word5, word6);
    cout << "Enter word: ";
    cin >> user_word;
    cout <<  endl;

    if (check_word(answer, user_word)){
        cout << "You Win!";
    }else{
        cout << "You Lose!";
    }
}    

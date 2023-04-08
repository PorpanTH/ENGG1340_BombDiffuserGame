#include <iostream>
#include <string>
#include <random>
#include <cstdlib>
#include <algorithm>
#include "word_game.h"

using namespace std;

int select_main_word(string words[6][15], string &main_word){
    int random = rand()%5;
    main_word = words[random][0];
    return random;
}
    
void select_words(string words[6][15], string &word1, string &word2, string &word3, string &word4, string &word5, string &word6){
    int a[6] = {0,1,2,3,4,5};
    int b[14] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14}; //where elements from a and b are in the form words[a][b]
    random_shuffle(a, a + 6); //the two arrays "a","b" with the indices are randomly shuffled
    random_shuffle(b, b + 13);
    word1 = words[a[0]][b[0]]; //6 words are randomly selected from each row
    word2 = words[a[1]][b[1]];
    word3 = words[a[2]][b[2]];
    word4 = words[a[3]][b[3]];
    word5 = words[a[4]][b[4]];
    word6 = words[a[5]][b[5]];
    
}

void print_ui(string main_word, string word1, string word2, string word3, string word4, string word5, string word6){
    cout << "┏━━━━━━━━━━━━━━━━┓" << endl;
    cout << "┃" << "     " << main_word << "      " << "┃" << endl;
    cout << "┗━━━━━━━━━━━━━━━━┛" << endl;
    cout << "┏━━━━━━━┓┏━━━━━━━┓" << endl;
    cout << "┃" << " " << word1 << " " << "┃" << "┃" << " " << word2 << " " << "┃" << endl;
    cout << "┗━━━━━━━┛┗━━━━━━━┛" << endl;
    cout << "┏━━━━━━━┓┏━━━━━━━┓" << endl;
    cout << "┃" << " " << word3 << " " << "┃" << "┃" << " " << word4 << " " << "┃" << endl;
    cout << "┗━━━━━━━┛┗━━━━━━━┛" << endl;
    cout << "┏━━━━━━━┓┏━━━━━━━┓" << endl;
    cout << "┃" << " " << word5 << " " << "┃" << "┃" << " " << word6 << " " << "┃" << endl;
    cout << "┗━━━━━━━┛┗━━━━━━━┛" << endl;    
}


string find_word(string words[6][15], int main_index, string main_word, string word1, string word2, string word3, string word4, string word5, string word6){
    string answer;
    for (int i = 0; i < 15; i++){       
        if (words[main_index][i] == word1){
            return word1;
        }else if (words[main_index][i] == word2){
            return word2;
        }else if (words[main_index][i] == word3){
            return word3;
        }else if (words[main_index][i] == word4){
            return word4;
        }else if (words[main_index][i] == word5){
            return word5;
        }else if (words[main_index][i] == word6){
            return word6;
        }
    }
    return "";
}

bool check_word(string answer, string user_word){
    return (answer == user_word);
}

int word_game(){

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
    return 1;
}

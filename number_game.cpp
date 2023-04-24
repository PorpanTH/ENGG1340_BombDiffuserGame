#include <iostream>
#include <array>
#include <cstdlib>
#include "number_game.h"
#include "time.h"

using namespace std;

void printarray(int arr[]){
    cout << "┏━━━┓┏━━━┓┏━━━┓┏━━━┓" << endl;
    cout << "┃" << " " << arr[0] << " " << "┃" << "┃" << " " << arr[1] << " " << "┃" << "┃" << " " << arr[2] << " " << "┃"  << "┃" << " " << arr[3] << " " << "┃" << endl;
    cout << "┗━━━┛┗━━━┛┗━━━┛┗━━━┛" << endl;

}

int stage1(int array[], chrono::steady_clock::time_point& end_time){
    srand(time(0));
    int i = (rand() % 4) + 1 ;
    cout << "         ┏━━━┓" << endl;
    cout << "Stage 1: " << "┃ " <<  i  << " ┃" << endl;
    cout << "         ┗━━━┛" << endl;
    int check;

    if (i==1){
        cin >> check;
        while (chrono::steady_clock::now() < end_time && check != array[1]){
            cout << "Wrong Input. Try Again!" << endl;
            auto remaining_time = chrono::duration_cast<chrono::seconds>(end_time - chrono::steady_clock::now());
            cout << "Time remaining: " << remaining_time.count() << " seconds" << endl;
            cin >> check;

            if(end_time< chrono::steady_clock::now()){
                return 0;
            }
            if (check == array[1]){
                stage2(array,array[1], end_time);
            }
        }



    }
    if (i==2){
        cin >> check;
        while (chrono::steady_clock::now() < end_time && check != array[1]){
            cout << "Wrong Input. Try Again!" << endl;
            auto remaining_time = chrono::duration_cast<chrono::seconds>(end_time - chrono::steady_clock::now());
            cout << "Time remaining: " << remaining_time.count() << " seconds" << endl;
            cin >> check;
            if(end_time< chrono::steady_clock::now()){
                return 0;
            }
            if (check == array[1]){
                stage2(array,array[1], end_time);
            }
        }


    }
    if (i==3){
        cin >>  check;
        while (chrono::steady_clock::now() < end_time && check != array[2]){
            cout << "Wrong Input. Try Again!" << endl;
            auto remaining_time = chrono::duration_cast<chrono::seconds>(end_time - chrono::steady_clock::now());
            cout << "Time remaining: " << remaining_time.count() << " seconds" << endl;
            cin >> check;
            if(end_time< chrono::steady_clock::now()){
                return 0;
            }
            if (check == array[2]){
                stage2(array,array[2],end_time);
            }
        }

    }
    if (i==4){
        cin >>  check;
        while (chrono::steady_clock::now() < end_time && check != array[3]){
            cout << "Wrong Input. Try Again!" << endl;
            auto remaining_time = chrono::duration_cast<chrono::seconds>(end_time - chrono::steady_clock::now());
            cout << "Time remaining: " << remaining_time.count() << " seconds" << endl;
            cin >> check;
            if(end_time< chrono::steady_clock::now()){
                return 0;
            }
            if (check == array[3]){
                stage2(array,array[3], end_time);
            }

        }

    }
    return 1;

}

int stage2(int array[],int key1, chrono::steady_clock::time_point& end_time){
    for (int i=0; i<100;i++){
        cout << endl; }
    printarray(array);
    srand(time(0));
    int check;
    int i = (rand() % 4) + 1;
    cout << "         ┏━━━┓" << endl;
    cout << "Stage 2: " << "┃ " <<  i  << " ┃" << endl;
    cout << "         ┗━━━┛" << endl;
    if (i==1){
        cin >>  check;
        while (chrono::steady_clock::now() < end_time && check != 4){
            cout << "Wrong Input. Try Again!" << endl;
            auto remaining_time = chrono::duration_cast<chrono::seconds>(end_time - chrono::steady_clock::now());
            cout << "Time remaining: " << remaining_time.count() << " seconds" << endl;
            cin >> check;
            if(end_time< chrono::steady_clock::now()){
                return 0;
            }if (check == 4){
                stage3(array,key1,4, end_time);
            }}


    }
    if (i==2){
        cin >>  check;
        while (chrono::steady_clock::now() < end_time && check != key1){
            cout << "Wrong Input. Try Again!" << endl;
            auto remaining_time = chrono::duration_cast<chrono::seconds>(end_time - chrono::steady_clock::now());
            cout << "Time remaining: " << remaining_time.count() << " seconds" << endl;
            cin >> check;
            if(end_time< chrono::steady_clock::now()){
                return 0;
            }if (check == key1){
                stage3(array,key1,key1, end_time);
            }
        }


    }
    if (i==3){
        cin >> check;
        while (chrono::steady_clock::now() < end_time && check != array[0]){
            cout << "Wrong Input. Try Again!" << endl;
            auto remaining_time = chrono::duration_cast<chrono::seconds>(end_time - chrono::steady_clock::now());
            cout << "Time remaining: " << remaining_time.count() << " seconds" << endl;
            cin >> check;
            if(end_time< chrono::steady_clock::now()){
                return 0;
            }if (check == array[0]){
                stage3(array,key1,array[0],end_time);
            }
        }

    }
    if (i==4){
        cin >> check;
        while (chrono::steady_clock::now() < end_time && check != key1){
            cout << "Wrong Input. Try Again!" << endl;
            auto remaining_time = chrono::duration_cast<chrono::seconds>(end_time - chrono::steady_clock::now());
            cout << "Time remaining: " << remaining_time.count() << " seconds" << endl;

            cin >> check;
            if(end_time< chrono::steady_clock::now()){
                return 0;
            }if (check == key1){
                stage3(array,key1,key1, end_time);
            }}


    }
    return 1;
}

int stage3(int array[],int key1,int key2, chrono::steady_clock::time_point& end_time){
    for (int i=0; i<100;i++){
        cout << endl; }
    printarray(array);
    srand(time(0));
    int check;
    int i = (rand() % 4) + 1;
    cout << "         ┏━━━┓" << endl;
    cout << "Stage 3: " << "┃ " <<  i  << " ┃" << endl;
    cout << "         ┗━━━┛" << endl;
    if (i==1){
        cin >>  check;
        while (chrono::steady_clock::now() < end_time && check != key2){
            cout << "Wrong Input. Try Again!" << endl;
            auto remaining_time = chrono::duration_cast<chrono::seconds>(end_time - chrono::steady_clock::now());
            cout << "Time remaining: " << remaining_time.count() << " seconds" << endl;
            cin >> check;
            if(end_time< chrono::steady_clock::now()){
                return 0;
            }if (check == key2){
                stage4(array,key1,key2,key2, end_time);
            }}


    }
    if (i==2){
        cin >> check;
        while (chrono::steady_clock::now() < end_time && check != key1){
            cout << "Wrong Input. Try Again!" << endl;
            auto remaining_time = chrono::duration_cast<chrono::seconds>(end_time - chrono::steady_clock::now());
            cout << "Time remaining: " << remaining_time.count() << " seconds" << endl;
            cin >> check;
            if(end_time< chrono::steady_clock::now()){
                return 0;
            }if (check == key1){
                stage4(array,key1,key2,key1, end_time);
            }}


    }
    if (i==3){
        cin >>  check;
        while (chrono::steady_clock::now() < end_time && check != array[2]){
            cout << "Wrong Input. Try Again!" << endl;
            auto remaining_time = chrono::duration_cast<chrono::seconds>(end_time - chrono::steady_clock::now());
            cout << "Time remaining: " << remaining_time.count() << " seconds" << endl;
            cin >> check;
            if(end_time< chrono::steady_clock::now()){
                return 0;
            }if (check == array[2]){
                stage4(array,key1,key2,array[2], end_time);
            }}


    }
    if (i==4){
        cin >>  check;
        while (chrono::steady_clock::now() < end_time && check != 4){
            cout << "Wrong Input. Try Again!" << endl;
            auto remaining_time = chrono::duration_cast<chrono::seconds>(end_time - chrono::steady_clock::now());
            cout << "Time remaining: " << remaining_time.count() << " seconds" << endl;
            cin >> check;
            if(end_time< chrono::steady_clock::now()){
                return 0;
            }if (check == 4){
                stage4(array,key1,key2,4, end_time);
            }}


    }
    return 1;
}

int stage4(int array[],int key1,int key2, int key3, chrono::steady_clock::time_point& end_time){
    for (int i=0; i<100;i++){
        cout << endl; }
    printarray(array);
    srand(time(0));
    int check;
    int i = (rand() % 4) + 1;
    cout << "         ┏━━━┓" << endl;
    cout << "Stage 4: " << "┃ " <<  i  << " ┃" << endl;
    cout << "         ┗━━━┛" << endl;
    if (i==1){
        cin >> check;
        while (chrono::steady_clock::now() < end_time && check != key1){
            cout << "Wrong Input. Try Again!" << endl;
            auto remaining_time = chrono::duration_cast<chrono::seconds>(end_time - chrono::steady_clock::now());
            cout << "Time remaining: " << remaining_time.count() << " seconds" << endl;
            cin >> check;
            if(end_time< chrono::steady_clock::now()){
                return 0;
            }if (check == key1){
                stage5(array,key1,key2,key3,key1, end_time);
            }}


    }
    if (i==2){
        cin >>  check;
        while (chrono::steady_clock::now() < end_time && check != array[0]){
            cout << "Wrong Input. Try Again!" << endl;
            auto remaining_time = chrono::duration_cast<chrono::seconds>(end_time - chrono::steady_clock::now());
            cout << "Time remaining: " << remaining_time.count() << " seconds" << endl;
            cin >> check;
            if(end_time< chrono::steady_clock::now()){
                return 0;
            }if (check == array[0]){
                stage5(array,key1,key2,key3,array[0], end_time);
            }}


    }
    if (i==3){
        cin >> check;
        while (chrono::steady_clock::now() < end_time && check != key2){
            cout << "Wrong Input. Try Again!" << endl;
            auto remaining_time = chrono::duration_cast<chrono::seconds>(end_time - chrono::steady_clock::now());
            cout << "Time remaining: " << remaining_time.count() << " seconds" << endl;
            cin >> check;
            if(end_time< chrono::steady_clock::now()){
                return 0;
            }if (check == key2){
                stage5(array,key1,key2,key3,key2, end_time);
            }}


    }
    if (i==4){
        cin >> check;
        while (chrono::steady_clock::now() < end_time &&  check != key2){
            cout << "Wrong Input. Try Again!" << endl;
            auto remaining_time = chrono::duration_cast<chrono::seconds>(end_time - chrono::steady_clock::now());
            cout << "Time remaining: " << remaining_time.count() << " seconds" << endl;
            cin >> check;
            if(end_time< chrono::steady_clock::now()){
                return 0;
            }if (check == key2){
                stage5(array,key1,key2,key3,key2, end_time);
            }}


    }
    return 1;
}

int stage5(int array[],int key1,int key2, int key3, int key4, chrono::steady_clock::time_point& end_time){
    for (int i=0; i<100;i++){
        cout << endl; }
    printarray(array);
    srand(time(0));
    int check;
    int i = (rand() % 4) + 1;
    cout << "         ┏━━━┓" << endl;
    cout << "Stage 5: " << "┃ " <<  i  << " ┃" << endl;
    cout << "         ┗━━━┛" << endl;
    if (i==1){
        cin >> check;
        while (chrono::steady_clock::now() < end_time &&  check != key1){
            cout << "Wrong Input. Try Again!" << endl;
            auto remaining_time = chrono::duration_cast<chrono::seconds>(end_time - chrono::steady_clock::now());
            cout << "Time remaining: " << remaining_time.count() << " seconds" << endl;
            cin >> check;
            if(end_time< chrono::steady_clock::now()){
                return 0;
            }if (check == key1){
                cout << "Congratulations! You solved the puzzle!" << endl;
                return 1;
            }}


    }
    if (i==2){
        cin >> check;
        while (chrono::steady_clock::now() < end_time && check != key2){
            cout << "Wrong Input. Try Again!" << endl;
            auto remaining_time = chrono::duration_cast<chrono::seconds>(end_time - chrono::steady_clock::now());
            cout << "Time remaining: " << remaining_time.count() << " seconds" << endl;
            cin >> check;
            if(end_time< chrono::steady_clock::now()){
                return 0;
            }if (check == key2){
                cout << "Congratulations! You solved the puzzle!" << endl;
                return 1;
            }}


    }
    if (i==3){
        cin >> check;
        while (chrono::steady_clock::now() < end_time && check != key4){
            cout << "Wrong Input. Try Again!" << endl;
            auto remaining_time = chrono::duration_cast<chrono::seconds>(end_time - chrono::steady_clock::now());
            cout << "Time remaining: " << remaining_time.count() << " seconds" << endl;
            cin >> check;
            if(end_time< chrono::steady_clock::now()){
                return 0;
            }if (check == key4){
                cout << "Congratulations! You solved the puzzle!" << endl;
                return 1;
            }}


    }
    if (i==4){
        cin >> check;
        while (chrono::steady_clock::now() < end_time && check != key3){
            cout << "Wrong Input. Try Again!" << endl;
            auto remaining_time = chrono::duration_cast<chrono::seconds>(end_time - chrono::steady_clock::now());
            cout << "Time remaining: " << remaining_time.count() << " seconds" << endl;
            cin >> check;
            if(end_time< chrono::steady_clock::now()){
                return 0;
            }
            if (check == key3){
                cout << "Congratulations! You solved the puzzle!" << endl;
                return 1;
            }
        }


    }
    return 1;
}
int number_game(chrono::steady_clock::time_point& end_time){
    cout << "Welcome to the memory game!" << endl;
    int array[4];
    bool temp = true;
    int x = 0;
    srand(time(0));
    while (x < 4){
        int i =  (rand() % 4) + 1 ;
        if (array[0]!=i && array[1]!=i && array[2]!=i && array[3]!=i){
            array[x] = i;
            x++; }

    }

    printarray(array);
//    stage1(array, end_time);
    if(stage1(array, end_time)){
        return 1;
    }
    return 1;
}
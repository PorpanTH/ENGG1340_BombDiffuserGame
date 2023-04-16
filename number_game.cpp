#include <iostream>
#include <array>
#include <cstdlib>
using namespace std;
void stage1(int array[]);
void stage2(int array[],int key1);
void stage3(int array[],int key1,int key2);
void stage4(int array[],int key1,int key2, int key3);
void stage5(int array[],int key1, int key2, int key3, int key4);


void printarray(int arr[]){
	for (int x=0; x < 4; x++){
		cout << arr[x] << ""; }
	cout << endl;

}

void stage1(int array[]){
	srand(time(0));
	int i = (rand() % 4) + 1 ;
	cout << "Stage 1: " <<  i << endl;
	int check;
	if (i==1){
		cin >> check;
		if (check == array[1])
			stage2(array,array[1]);	
	}
	if (i==2){
		cin >> check;
		if (check == array[1])
			stage2(array,array[1]);
	}
	if (i==3){
		cin >>  check;
		if (check == array[2])
			stage2(array,array[2]);
	}
	if (i==4){
		cin >>  check;
		if (check == array[3])
			stage2(array,array[3]);
	}
			
}

void stage2(int array[],int key1){
	srand(time(0));
	int check;
	int i = (rand() % 4) + 1;
	cout << "Stage 2: " << i << endl;
	if (i==1){
                  cin >>  check;
                  if (check == 4)
                          stage3(array,key1,4);
        }
        if (i==2){
                  cin >>  check;
                  if (check == key1)
                          stage3(array,key1,key1);
        }
        if (i==3){
                  cin >>  check;
                  if (check == array[0])
                          stage3(array,key1,array[0]);
        }
        if (i==4){
                  cin >>  check;
                  if (check == key1)
                          stage3(array,key1,key1);
	}
}

void stage3(int array[],int key1,int key2){
          srand(time(0));
	  int check;
          int i = (rand() % 4) + 1;
	  cout << "Stage 3: " << i << endl;
          if (i==1){
                    cin >>  check;
                    if (check == key2)
                            stage4(array,key1,key2,key2);
          }
          if (i==2){
                    cin >> check;
                    if (check == key1)
                            stage4(array,key1,key2,key1);
          }
          if (i==3){
                    cin >>  check;
                    if (check == array[2])
                            stage4(array,key1,key2,array[2]);
          }
          if (i==4){
                    cin >>  check;
                    if (check == 4)
                            stage4(array,key1,key2,4);
          }
}

void stage4(int array[],int key1,int key2, int key3){
            srand(time(0));
	    int check;
            int i = (rand() % 4) + 1;
	    cout << "Stage 4: " << i << endl;
            if (i==1){
                      cin >>  check;
                      if (check == key1)
                              stage5(array,key1,key2,key3,key1);
            }
            if (i==2){
                      cin >>  check;
                      if (check == array[0])
                              stage5(array,key1,key2,key3,array[0]);
            }
            if (i==3){
                      cin >>  check;
                      if (check == key2)
                              stage5(array,key1,key2,key3,key2);
            }
            if (i==4){
                      cin >>  check;
                      if (check == key2)
                              stage5(array,key1,key2,key3,key2);
            }
}

void stage5(int array[],int key1,int key2, int key3, int key4){
              srand(time(0));
	      int check;
              int i = (rand() % 4) + 1;
	      cout << "Stage 5: " <<i << endl;
              if (i==1){
                        cin >> check;
                        if (check == key1)
                                cout << "Congratulations! You solved the puzzle!" << endl;
              }
              if (i==2){
                        cin >> check;
                        if (check == key2)
 				cout << "Congratulations! You solved the puzzle!" << endl;             
	     }	
             if (i==3){
                       cin >> check;
                       if (check == key4)
                               cout << "Congratulations! You solved the puzzle!" << endl;
             }
             if (i==4){
                       cin >> check;
                       if (check == key3)
                               cout << "Congratulations! You solved the puzzle!" << endl;
             }
}
int main(){
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
  	stage1(array);

}
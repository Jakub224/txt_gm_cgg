#include <iostream>

using namespace std;

//variables_arrays
string inpt;
string cmds [20] = {" ","north", "south", "west", "east", "exit","I"};
string inventar[3] = {"Torch", "Candle", "Dagger"};
int position [2] = {0,0};
int size_cmds;
int size_inventar;
int cmd_no;
int i;


// commands_functions
int north () {
position [1] = position[1]+1;
 std::cout << "Your position is " << position[0] << " " << position[1] << ".\n";
}

int south() {
position[1] = position[1]-1;
 std::cout << "Your position is " << position[0] << " " << position[1] << ".\n";
}

int east() {
position[0] = position[0] + 1;
 std::cout << "Your position is " << position[0] << " " << position[1] << ".\n";
}

int west() {
position[0] = position[0] - 1;
 std::cout << "Your position is " << position[0] << " " << position[1] << ".\n";
}

void exit_end() {
exit(0);
}

//main functions
int main()
{

    cout << endl << "----------------------------" << endl;
    cout << endl << "      Introduction   " << endl;
    cout << endl << "----------------------------" << endl;

size_cmds = sizeof(cmds)/sizeof(cmds[0]);
size_inventar = sizeof(inventar)/sizeof(inventar[0]);

while (1 < 2) {

    std::cout << "Where would you like to move? \n";
    std::cin  >> inpt;

if (inpt == "help") {
        std::cout << "\n";
    for (i=1; i<size_cmds; i++){
        std::cout << cmds[i] << "\n";
    }
}

    for (i=1; i<size_cmds; i++) {
        if (inpt == cmds[i] ){
            cmd_no = i;
        }
    }

    switch(cmd_no){
case 1:
    north();
    cmd_no = 0;
    break;

case 2:
    south();
    cmd_no = 0;
    break;

case 3:
    west();
    cmd_no = 0;
    break;

case 4:
    east();
    cmd_no = 0;
    break;

case 5:
    exit_end();
    break;

case 6:
     std::cout << "\n";
  for (i=0; i < size_inventar; i++){
        std::cout << inventar[i] << "\n";
        }
        std::cout << "\n";
        break;
    }
}
}

#include <iostream>

using namespace std;

//variables_arrays
string inpt;
string cmds [20] = {" ","north", "south", "west", "east", "exit"};
int position [2] = {0,0};
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

int main()
{

    cout << endl << "----------------------------" << endl;
    cout << endl << "      Introduction   " << endl;
    cout << endl << "----------------------------" << endl;

while (1 < 2) {

    std::cout << "Where would you like to move? \n";
    std::cin  >> inpt;

    for (i=1; i<6; i++) {
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
    }
}

}

#include <bits/stdc++.h>
using namespace std;

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main()
{
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    cout << "HELLO WELCOME TO TIC TAC TOE GAME\n";
    drawBoard(spaces);

    while(running){
        playerMove(spaces, player);
        drawBoard(spaces);
        if(checkWinner(spaces, player, computer)){
            running = false;
            break;
        }
         else if(checkTie(spaces)){
             running = false;
             break;
         }

        computerMove(spaces, computer);
        drawBoard(spaces);
        if(checkWinner(spaces, player, computer)){
            running = false;
            break;
        }
         else if(checkTie(spaces)){
             running = false;
             break;
         }
    }
    cout << "Thanks for playing!\n";

    return 0;
}

void drawBoard(char *spaces){
    cout << '\n';
    cout << "     |     |     " << '\n';
    cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << '\n';
    cout << "_____|_____|_____" << '\n';
    cout << "     |     |     " << '\n';
    cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << '\n';
    cout << "_____|_____|_____" << '\n';
    cout << "     |     |     " << '\n';
    cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << '\n';
    cout << "     |     |     " << '\n';
    cout << '\n';
}

void playerMove(char *spaces, char player){	
    int number;
    do{
        cout << "Masukkan Angka dari 1-9 untuk memulai giliran : ";
        cin >> number;
        cout << "\n~~~~~~~~~~~~~~~~~~~ Langkah Player ~~~~~~~~~~~~~~~~~~~\n";
        number--;
        if(spaces[number] == ' '){
           spaces[number] = player;
           break; 
        }
    }while(!number > 0 || !number < 8);
}

void computerMove(char *spaces, char computer){
	cout << "~~~~~~~~~~~~~~~~~~~ Langkah Computer ~~~~~~~~~~~~~~~~~~~\n";
    int number,temp;
    while(true){
        if(spaces[4] == ' '){
            spaces[4] = computer;
            break;
        }
        // diagonal
        if(spaces[0] == ' ' and spaces[4] == 'O' and spaces[8] == 'O'){
        	spaces[0] = computer;
        	break;
		}
		if(spaces[0] == 'O' and spaces[4] == ' ' and spaces[8] == 'O'){
			spaces[4] = computer;
        	break;
		}
		if(spaces[0] == 'O' and spaces[4] == 'O' and spaces[8] == ' ' ){
			spaces[8] = computer;
        	break;
		}
		
		if(spaces[2] == ' ' and spaces[4] == 'O' and spaces[6] == 'O'){
        	spaces[2] = computer;
        	break;
		}
		if(spaces[2] == 'O' and spaces[4] == ' ' and spaces[6] == 'O'){
			spaces[4] = computer;
        	break;
		}
		if(spaces[2] == 'O' and spaces[4] == 'O' and spaces[6] == ' ' ){
			spaces[6] = computer;
        	break;
		}
		// diagonal
		
		// vertical
		if(spaces[0] == ' ' and spaces[3] == 'O' and spaces[6] == 'O'){
        	spaces[0] = computer;
        	break;
		}
		if(spaces[0] == 'O' and spaces[3] == ' ' and spaces[6] == 'O'){
			spaces[3] = computer;
        	break;
		}
		if(spaces[0] == 'O' and spaces[3] == 'O' and spaces[6] == ' ' ){
			spaces[6] = computer;
        	break;
		}
		
		if(spaces[1] == ' ' and spaces[4] == 'O' and spaces[7] == 'O'){
        	spaces[1] = computer;
        	break;
		}
		if(spaces[1] == 'O' and spaces[4] == ' ' and spaces[7] == 'O'){
			spaces[4] = computer;
        	break;
		}
		if(spaces[1] == 'O' and spaces[4] == 'O' and spaces[7] == ' ' ){
			spaces[7] = computer;
        	break;
		}
		
		if(spaces[2] == ' ' and spaces[5] == 'O' and spaces[8] == 'O'){
        	spaces[2] = computer;
        	break;
		}
		if(spaces[2] == 'O' and spaces[5] == ' ' and spaces[8] == 'O'){
			spaces[5] = computer;
        	break;
		}
		if(spaces[2] == 'O' and spaces[5] == 'O' and spaces[8] == ' ' ){
			spaces[8] = computer;
        	break;
		}
		// vertical
		
		// horizontal
		if(spaces[0] == ' ' and spaces[1] == 'O' and spaces[2] == 'O'){
        	spaces[0] = computer;
        	break;
		}
		if(spaces[0] == 'O' and spaces[1] == ' ' and spaces[2] == 'O'){
			spaces[1] = computer;
        	break;
		}
		if(spaces[0] == 'O' and spaces[1] == 'O' and spaces[2] == ' ' ){
			spaces[2] = computer;
        	break;
		}
		
		if(spaces[3] == ' ' and spaces[4] == 'O' and spaces[5] == 'O'){
        	spaces[3] = computer;
        	break;
		}
		if(spaces[3] == 'O' and spaces[4] == ' ' and spaces[5] == 'O'){
			spaces[4] = computer;
        	break;
		}
		if(spaces[3] == 'O' and spaces[4] == 'O' and spaces[5] == ' ' ){
			spaces[5] = computer;
        	break;
		}
		
		if(spaces[6] == ' ' and spaces[7] == 'O' and spaces[8] == 'O'){
        	spaces[6] = computer;
        	break;
		}
		if(spaces[6] == 'O' and spaces[7] == ' ' and spaces[8] == 'O'){
			spaces[7] = computer;
        	break;
		}
		if(spaces[6] == 'O' and spaces[7] == 'O' and spaces[8] == ' ' ){
			spaces[8] = computer;
        	break;
		}
		
        ///////////////////////////////////////////////////////////////
        // diagonal
        if(spaces[0] == ' ' and spaces[4] == 'X' and spaces[8] == 'X'){
        	spaces[0] = computer;
        	break;
		}
		if(spaces[0] == 'X' and spaces[4] == ' ' and spaces[8] == 'X'){
			spaces[4] = computer;
        	break;
		}
		if(spaces[0] == 'X' and spaces[4] == 'X' and spaces[8] == ' ' ){
			spaces[8] = computer;
        	break;
		}
		
		if(spaces[2] == ' ' and spaces[4] == 'X' and spaces[6] == 'X'){
        	spaces[2] = computer;
        	break;
		}
		if(spaces[2] == 'X' and spaces[4] == ' ' and spaces[6] == 'X'){
			spaces[4] = computer;
        	break;
		}
		if(spaces[2] == 'X' and spaces[4] == 'X' and spaces[6] == ' ' ){
			spaces[6] = computer;
        	break;
		}
		// diagonal
		
		// vertical
		if(spaces[0] == ' ' and spaces[3] == 'X' and spaces[6] == 'X'){
        	spaces[0] = computer;
        	break;
		}
		if(spaces[0] == 'X' and spaces[3] == ' ' and spaces[6] == 'X'){
			spaces[3] = computer;
        	break;
		}
		if(spaces[0] == 'X' and spaces[3] == 'X' and spaces[6] == ' ' ){
			spaces[6] = computer;
        	break;
		}
		
		if(spaces[1] == ' ' and spaces[4] == 'X' and spaces[7] == 'X'){
        	spaces[1] = computer;
        	break;
		}
		if(spaces[1] == 'X' and spaces[4] == ' ' and spaces[7] == 'X'){
			spaces[4] = computer;
        	break;
		}
		if(spaces[1] == 'X' and spaces[4] == 'X' and spaces[7] == ' ' ){
			spaces[7] = computer;
        	break;
		}
		
		if(spaces[2] == ' ' and spaces[5] == 'X' and spaces[8] == 'X'){
        	spaces[2] = computer;
        	break;
		}
		if(spaces[2] == 'X' and spaces[5] == ' ' and spaces[8] == 'X'){
			spaces[5] = computer;
        	break;
		}
		if(spaces[2] == 'X' and spaces[5] == 'X' and spaces[8] == ' ' ){
			spaces[8] = computer;
        	break;
		}
		// vertical
		
		// horizontal
		if(spaces[0] == ' ' and spaces[1] == 'X' and spaces[2] == 'X'){
        	spaces[0] = computer;
        	break;
		}
		if(spaces[0] == 'X' and spaces[1] == ' ' and spaces[2] == 'X'){
			spaces[1] = computer;
        	break;
		}
		if(spaces[0] == 'X' and spaces[1] == 'X' and spaces[2] == ' ' ){
			spaces[2] = computer;
        	break;
		}
		
		if(spaces[3] == ' ' and spaces[4] == 'X' and spaces[5] == 'X'){
        	spaces[3] = computer;
        	break;
		}
		if(spaces[3] == 'X' and spaces[4] == ' ' and spaces[5] == 'X'){
			spaces[4] = computer;
        	break;
		}
		if(spaces[3] == 'X' and spaces[4] == 'X' and spaces[5] == ' ' ){
			spaces[5] = computer;
        	break;
		}
		
		if(spaces[6] == ' ' and spaces[7] == 'X' and spaces[8] == 'X'){
        	spaces[6] = computer;
        	break;
		}
		if(spaces[6] == 'X' and spaces[7] == ' ' and spaces[8] == 'X'){
			spaces[7] = computer;
        	break;
		}
		if(spaces[6] == 'X' and spaces[7] == 'X' and spaces[8] == ' ' ){
			spaces[8] = computer;
        	break;
		}
		
		///////////////////////////////////////////////////////////////////
		if(spaces[4] == 'X'){
        	if(spaces[0] == ' '){
        		spaces[0] = computer;
        		break;
			}else if (spaces[2] == ' '){
				spaces[2] = computer;
				break;
			}else if (spaces[6] == ' '){
				spaces[6] = computer;
				break;
			}else if(spaces[8] == ' '){
				spaces[8] = computer;
				break;
			}
		}
		if(spaces[0] == 'X' and spaces[8] == 'X'){
			if(spaces[1] == ' '){
        		spaces[1] = computer;
        		break;
			}else if (spaces[3] == ' '){
				spaces[3] = computer;
				break;
			}else if (spaces[5] == ' '){
				spaces[5] = computer;
				break;
			}else if(spaces[7] == ' '){
				spaces[7] = computer;
				break;
			}
		}
		if(spaces[2] == 'X' and spaces[6] == 'X'){
			if(spaces[1] == ' '){
        		spaces[1] = computer;
        		break;
			}else if (spaces[3] == ' '){
				spaces[3] = computer;
				break;
			}else if (spaces[5] == ' '){
				spaces[5] = computer;
				break;
			}else if(spaces[7] == ' '){
				spaces[7] = computer;
				break;
			}
		}
    }
}

bool checkWinner(char *spaces, char player, char computer){
    if((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2])){
        spaces[0] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else if((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5])){
        spaces[3] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else if((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8])){
        spaces[6] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else if((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6])){
        spaces[0] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else if((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7])){
        spaces[1] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else if((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8])){
        spaces[2] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else if((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8])){
        spaces[0] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else if((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6])){
        spaces[2] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else{
        return false;
    }
    return true;
}

bool checkTie(char *spaces){
    for(int i = 0; i < 9; i++){
        if(spaces[i] == ' '){
            return false;
        }
    }
	cout << "DRAW\n";
    return true;
}

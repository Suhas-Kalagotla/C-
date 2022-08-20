"""I have learned to code this game with the help of youtube
huge shout-out to ProgrammingKnowledge and dsa in c++ by Michael T. Goodrich"""

#include <iostream>
using namespace std; // making std:: accessible

char board[3][3] = {{'1','2','3'}, {'4','5','6'}, {'7','8','9'}};
char currentMark ;
int currentPlayer;

void clearBoard() {
  for(int x = 0; x < 3; x++)
    for(int y = 0; y < 3; y++)
      board[x][y] = 'a';
  currentPlayer = 'X';
}

bool putMark(int num){
  int row  = num / 3, col;
  if(num % 3 == 0) {
    row-- ;
    col = 2;
  }else col = (num % 3) - 1;

  if(board[row][col] != 'X' && board[row][col] != 'O')
  {
    board[row][col] = currentMark;
    return true ;
  } else return false;
}

int getWinner(){
  for(int x = 0; x < 3; x++){
    if(board[x][0] == board[x][1] && board[x][1] == board[x][2]) return currentPlayer; // rows
    if(board[0][x] == board[1][x] && board[1][x] == board[2][x]) return currentPlayer; // columns
  }
  if(board[0][0] == board[1][1] && board[1][1] == board[2][2]) return currentPlayer;// diagonal
  if(board[2][0] == board[1][1] && board[1][1] == board[0][2]) return currentPlayer;// diagonal

  return 0;
}

void printBoard() {
  cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
  cout << "-----------\n" ;
  cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
  cout << "-----------\n" ;
  cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;

}

void swap_player_marker(){
  if(currentMark == 'X') currentMark = 'O';
  else currentMark = 'X';

  if(currentPlayer == 1) currentPlayer =2;
  else (currentPlayer = 1) ;
}

void game(){
  int winner ;

  cout << "Player one, choose your marker : ";
  char marker_p1;
  cin >> marker_p1;

  currentPlayer = 1;
  currentMark = marker_p1;

  printBoard();

  for(int i =0 ; i< 9 ;i++){
    cout << "It's player " << currentPlayer << "'s turn. Enter your slot : ";
    int slot;
    cin >> slot;

    if(slot > 9 || slot < 1)
    {
      cout << "That slot is invalid!!!\n";
      i-- ;
      continue;
    }

    if(!putMark(slot))
    {
      cout << "That slot is occupied!!! Try another slot!\n";
      i-- ;
      continue;
    }

    printBoard();
    winner = getWinner();
    if(winner==1) {cout << "Player 1 is the winner\n"; break ;}
    if(winner==2) {cout << "Player 2 is the winner\n"; break ; }
    swap_player_marker();
  }
  if(winner == 0) cout << "The game is a tie";
}

int main(){
  game();
}

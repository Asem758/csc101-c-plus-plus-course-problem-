#‎include‬<iostream>
#include<string>
#include<conio.h>
#include<windows.h>
using namespace std;

const int width = 40;//FOR WIDTH OF FRAME
const int hight = 20;//FOR HIGHT OF FRAME
int foodx, foody;
int x;//FOR CONTROLLING X AXIS
int y;//FOR CONTROLLING Y AXIS
int score = 0;//FOR ADDING SCORE
int tailx[200] = {0};
int taily[200] = {0};
int tail = 0;
enum direction{ LEFT, RIGHT, UP, DOWN };
direction dir;
bool gameover;//FOR STARTING GAME


void start()
{
  gameover = false;
  x = width / 2;//SET THE VALUE OF X=20
  y = hight / 2;//SET THE VALUE OF Y=10
  foodx = rand() % width;//RANDOMLY GENERATE FOOD OF X AXIS
  foody = rand() % hight;//RANDOMLY GENERATE FOOD OF Y AXIS
}


void frame()
{
  system("cls");

  for (int i = 0; i < width + 2; i++)
  cout << "#";//FOR PRINTING UPPER WALL MEAN CEALING
  cout << endl;

  for (int i = 0; i < hight; i++)//FOR PRINTING SIDE WALLS
  {
    for (int j = 0; j < width; j++)
    {
      if (j == 0)//PRINT LEFT SIDE WALL
      {
        cout << "#";
      }

     if (i == y&&j == x)//FOR MAKING THE SNAKE HEAD IN CENTRE
     cout << "O";

     else if (i == foody&&j == foodx)//FOR GENERATING RANDOM FOOD IN FRAME
     cout << "*";

    else
    {
    bool print = false;

    for (int k = 0; k < tail; k++)
    {
      if (tailx[k] == j&&taily[k] == i)
      {
        cout << "0";
        print = true;
     }
    }

     if (!print)
     {
      cout << " ";
     }
   }

    if (j == width - 1)//FOR PRINTING RIGHT SIDE WALL
    {
      cout << "#";
    }
 }

 cout << endl;
}

for (int i = 0; i < width + 2; i++)//FOR PRINTING LOWER WALL MEAN FLOOR
{
  cout << "#";

}
 cout << endl;
 cout << "SCORE: " << score << endl;
}


void direct()
{
  if (_kbhit())//WHEN USER ENTER THE KEYBOARD
  {
   switch (_getch())//IT TAKES CHARACTER
   {
    case'a':
    dir = LEFT;
    break;
    case's':
    dir = DOWN;
    break;
    case'w':
    dir = UP;
    break;
    case'd':
    dir = RIGHT;
    break;
   }
  }
}


void move()
{
  int previousx = tailx[0];
  int previousy = taily[0];
  int prev2x = 0;
  int prev2y = 0;
  tailx[0] = x;//remind first tail value of x axis
  taily[0] = y;//remind second tail value of y-ais
 for (int i = 1; i < tail; i++)
 {//for reminding previous tail position
  prev2x = tailx[i];
  prev2y = taily[i];
  tailx[i] = previousx;
  taily[i] = previousy;
  previousx = prev2x;
  previousy = prev2y;

 }

 switch (dir)
 {
  case LEFT://decrease value of x when a is pressed
  x--;
  break;
  case RIGHT://increase value of x when a is pressed
  x++;
  break;
  case UP:
  y--;//decrease value of y when w is pressed
  break;
  case DOWN:
  y++;//increase value of y when s is pressed
  break;
  default:
  break;
 }

 if (x>width - 1 || x<0 || y > hight - 1 || y<0)//when snake hit the wall game end
 gameover = true;

 for (int i = 0; i < tail; i++)
 {
   if (tailx[i] == x&&taily[i] == y)
      gameover = true;
 }

 if (x == foodx&&y == foody)//WHEN FOODX=x AND FOODY=y then generate new food
 {
  foodx = rand() % width;
  foody = rand() % hight;
  tail++;
  score += 10;//when food is eaten then score added by ten
 }

}

int main()
{
  string a;
  cout << "\n\n\n\t\t\t\t THE SNAKE GAME\n\n";
  cout << "CONTROLS:\n\nw=UP\ns=DOWN\na=RIGHT\nd=LEFT\n\n\n";
  cout << "PLEASE ENTER YOUR NAME: ";
  cin >> a;

  start();

 while (!gameover)//game condition is true
 {

  frame();
  direct();
  move();
  Sleep(100);
 }

 system("cls");

  cout << "\n\n\nOPPS YOU ARE OUT" << "\tTRY AGAIN";
  cout << endl;
  cout << a << " YOUR SCORE IS: " << score << endl;

}

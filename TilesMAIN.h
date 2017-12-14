#ifndef TILES_H_INCLUDED
#define TILES_H_INCLUDED
#include <iostream>
//use cordinaites n'shit north+1 to y, south-1 to y, west-1 x, east+1 x
//spawn (24,26)
// "We art not but babies, and these babies must walk" - Phillip 2k16
using namespace std;

void playerloction()
{
  char movement[20];
	int cordx=24;
	int cordy=26;
  //equal cords in tile24_26
  tile24_26(cordx, cordy);
  cin << movement;
  if(movement == 'north')
  {
    cordy = cordy + 1
  }
      
  else if(movement == 'south')
  {
   	cordy = cordy - 1;
  }
  
  else if(movement == 'east')
  {
   	cordx = cordx + 1; 
  }
  
  else if(movement == 'west')
  {
   	cordx = cordx - 1; 
  }
  
  
}
//normal ass tiles - items/normal boss encounters
void tile24_26(int &cordx, &cordy)
{
	//spawn
  
}
//town tiles
void tile#()
{
	
}
//dungeon tiles
void tile0()
{
	
}
//radiation tiles
void tile0()
{
	
}
#endif // TILES_H_INCLUDED
//skynet was here

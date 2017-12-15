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
void tile1_4(int &cordx, &cordy)
{
	int player=0;
	cordxx=4
	cordyy=1
	playerlocation(cordx,cordy);
	if(cordx == cordxx && cordy == cordyy)
	{
		player = player+1;
	}
	else
	{
		player = 0;
	}
	
}
void tile1_5(int &cordx, &cordy)
{
	
  
}
void tile1_21(int &cordx, &cordy)
{
	
  
}
void tile1_22(int &cordx, &cordy)
{
	
  
}
void tile1_23(int &cordx, &cordy)
{
	
  
}
void tile1_24(int &cordx, &cordy)
{
	
  
}
void tile1_25(int &cordx, &cordy)
{
	
  
}
void tile1_26(int &cordx, &cordy)
{
	
  
}
void tile1_27(int &cordx, &cordy)
{
	
  
}
void tile1_28(int &cordx, &cordy)
{
	
  
}
void tile1_29(int &cordx, &cordy)
{
	
  
}
void tile1_30(int &cordx, &cordy)
{
	
  
}
void tile1_31(int &cordx, &cordy)
{
	
  
}
void tile1_32(int &cordx, &cordy)
{
	
  
}
void tile1_33(int &cordx, &cordy)
{
	
  
}
void tile1_34(int &cordx, &cordy)
{
	
  
}
void tile1_35(int &cordx, &cordy)
{
	
  
}
void tile1_36(int &cordx, &cordy)
{
	
  
}
void tile1_37(int &cordx, &cordy)
{
	
  
}
void tile1_38(int &cordx, &cordy)
{
	
  
}
//2
void tile2_4(int &cordx, &cordy)
{
	
  
}
void tile2_5(int &cordx, &cordy)
{
	
  
}
void tile2_21(int &cordx, &cordy)
{
	
  
}
void tile2_22(int &cordx, &cordy)
{
	
  
}
void tile2_23(int &cordx, &cordy)
{
	
  
}
void tile2_24(int &cordx, &cordy)
{
	
  
}
void tile2_25(int &cordx, &cordy)
{
	
  
}
void tile2_26(int &cordx, &cordy)
{
	
  
}
void tile2_27(int &cordx, &cordy)
{
	
  
}
void tile2_28(int &cordx, &cordy)
{
	
  
}
void tile2_29(int &cordx, &cordy)
{
	
  
}
void tile2_30(int &cordx, &cordy)
{
	
  
}
void tile2_31(int &cordx, &cordy)
{
	
  
}
void tile2_32(int &cordx, &cordy)
{
	
  
}
void tile2_33(int &cordx, &cordy)
{
	
  
}
void tile2_34(int &cordx, &cordy)
{
	
  
}
void tile2_35(int &cordx, &cordy)
{
	
  
}
void tile2_36(int &cordx, &cordy)
{
	
  
}
void tile2_37(int &cordx, &cordy)
{
	
  
}
void tile2_38(int &cordx, &cordy)
{
	
  
}
//3
void tile3_4(int &cordx, &cordy)
{
	
  
}
void tile3_5(int &cordx, &cordy)
{
	
  
}
void tile3_21(int &cordx, &cordy)
{
	
  
}
void tile3_22(int &cordx, &cordy)
{
	
  
}
void tile3_23(int &cordx, &cordy)
{
	
  
}
void tile3_24(int &cordx, &cordy)
{
	
  
}
void tile3_25(int &cordx, &cordy)
{
	
  
}
void tile3_26(int &cordx, &cordy)
{
	
  
}
void tile3_27(int &cordx, &cordy)
{
	
  
}
void tile3_28(int &cordx, &cordy)
{
	
  
}
void tile3_29(int &cordx, &cordy)
{
	
  
}
void tile3_30(int &cordx, &cordy)
{
	
  
}
void tile3_31(int &cordx, &cordy)
{
	
  
}
void tile3_32(int &cordx, &cordy)
{
	
  
}
void tile3_33(int &cordx, &cordy)
{
	
  
}
void tile3_34(int &cordx, &cordy)
{
	
  
}
void tile3_35(int &cordx, &cordy)
{
	
  
}
void tile3_36(int &cordx, &cordy)
{
	
  
}
void tile3_37(int &cordx, &cordy)
{
	
  
}
void tile3_38(int &cordx, &cordy)
{
	
  
}
//4
void tile1_4(int &cordx, &cordy)
{
	
  
}
void tile1_5(int &cordx, &cordy)
{
	
  
}
void tile4_20(int &cordx, &cordy)
{
	
  
}
void tile4_21(int &cordx, &cordy)
{
	
  
}
void tile4_22(int &cordx, &cordy)
{
	
  
}
void tile4_23(int &cordx, &cordy)
{
	
  
}
void tile4_24(int &cordx, &cordy)
{
	
  
}
void tile4_25(int &cordx, &cordy)
{
	
  
}
void tile4_26(int &cordx, &cordy)
{
	
  
}
void tile4_27(int &cordx, &cordy)
{
	
  
}
void tile4_28(int &cordx, &cordy)
{
	
  
}
void tile4_29(int &cordx, &cordy)
{
	
  
}
void tile4_30(int &cordx, &cordy)
{
	
  
}
void tile4_31(int &cordx, &cordy)
{
	
  
}
void tile4_36(int &cordx, &cordy)
{
	
  
}
void tile4_37(int &cordx, &cordy)
{
	
  
}
void tile4_38(int &cordx, &cordy)
{
	
  
}
//5
void tile5_4(int &cordx, &cordy)
{
	
  
}
void tile5_5(int &cordx, &cordy)
{
	
  
}
void tile5_20(int &cordx, &cordy)
{
	
  
}
void tile5_21(int &cordx, &cordy)
{
	
  
}
void tile5_22(int &cordx, &cordy)
{
	
  
}
void tile5_23(int &cordx, &cordy)
{
	
  
}
void tile5_24(int &cordx, &cordy)
{
	
  
}
void tile5_25(int &cordx, &cordy)
{
	
  
}
void tile5_26(int &cordx, &cordy)
{
	
  
}
void tile5_27(int &cordx, &cordy)
{
	
  
}
void tile5_28(int &cordx, &cordy)
{
	
  
}
void tile5_29(int &cordx, &cordy)
{
	
  
}
void tile5_30(int &cordx, &cordy)
{
	
  
}
void tile5_31(int &cordx, &cordy)
{
	
  
}
void tile5_36(int &cordx, &cordy)
{
	
  
}
void tile5_37(int &cordx, &cordy)
{
	
  
}
void tile5_38(int &cordx, &cordy)
{
	
  
}
//6
void tile6_4(int &cordx, &cordy)
{
	
  
}
void tile6_5(int &cordx, &cordy)
{
	
  
}
void tile6_20(int &cordx, &cordy)
{
	
  
}
void tile6_21(int &cordx, &cordy)
{

  
}
void tile6_22(int &cordx, &cordy)
{
	
  
}
void tile6_23(int &cordx, &cordy)
{
	
  
}
void tile6_24(int &cordx, &cordy)
{
	
  
}
void tile6_25(int &cordx, &cordy)
{
	
  
}
void tile6_26(int &cordx, &cordy)
{
	
  
}
void tile6_27(int &cordx, &cordy)
{
	
  
}
void tile6_28(int &cordx, &cordy)
{
	
  
}
void tile6_29(int &cordx, &cordy)
{
	
  
}
void tile6_30(int &cordx, &cordy)
{
	
  
}
void tile6_31(int &cordx, &cordy)
{
	
  
}
void tile6_36(int &cordx, &cordy)
{
	
  
}
void tile6_37(int &cordx, &cordy)
{
	
  
}
void tile6_38(int &cordx, &cordy)
{
	
  
}
//7
void tile7_4(int &cordx, &cordy)
{
	
  
}
void tile7_5(int &cordx, &cordy)
{
	
  
}
void tile7_20(int &cordx, &cordy)
{
	
  
}
void tile7_21(int &cordx, &cordy)
{
	
  
}
void tile7_22(int &cordx, &cordy)
{
	
  
}
void tile7_23(int &cordx, &cordy)
{
	
  
}
void tile7_24(int &cordx, &cordy)
{
	
  
}
void tile7_25(int &cordx, &cordy)
{
	
  
}
void tile7_26(int &cordx, &cordy)
{
	
  
}
void tile7_27(int &cordx, &cordy)
{
	
  
}
void tile7_28(int &cordx, &cordy)
{
	
  
}
void tile7_29(int &cordx, &cordy)
{
	
  
}
void tile7_30(int &cordx, &cordy)
{
	
  
}
void tile7_31(int &cordx, &cordy)
{
	
  
}
void tile7_36(int &cordx, &cordy)
{
	
  
}
void tile7_37(int &cordx, &cordy)
{
	
  
}
void tile7_38(int &cordx, &cordy)
{
	
  
}
//8
void tile8_4(int &cordx, &cordy)
{
	
  
}
void tile8_5(int &cordx, &cordy)
{
	
  
}
void tile8_21(int &cordx, &cordy)
{
	
  
}
void tile8_22(int &cordx, &cordy)
{
	
  
}
void tile8_23(int &cordx, &cordy)
{
	
  
}
void tile8_24(int &cordx, &cordy)
{
	
  
}
void tile8_25(int &cordx, &cordy)
{
	
  
}
void tile8_26(int &cordx, &cordy)
{
	
  
}
void tile8_27(int &cordx, &cordy)
{
	
  
}
void tile8_28(int &cordx, &cordy)
{
	
  
}
void tile8_29(int &cordx, &cordy)
{
	
  
}
void tile8_30(int &cordx, &cordy)
{
	
  
}
void tile8_31(int &cordx, &cordy)
{
	
  
}
void tile8_32(int &cordx, &cordy)
{
	
  
}
void tile8_33(int &cordx, &cordy)
{
	
  
}
void tile8_34(int &cordx, &cordy)
{
	
  
}
void tile8_35(int &cordx, &cordy)
{
	
  
}
void tile8_36(int &cordx, &cordy)
{
	
  
}
void tile8_37(int &cordx, &cordy)
{
	
  
}
void tile8_38(int &cordx, &cordy)
{
	
  
}
//9
void tile9_4(int &cordx, &cordy)
{
	
  
}
void tile9_5(int &cordx, &cordy)
{
	
  
}
void tile9_21(int &cordx, &cordy)
{
	
  
}
void tile9_22(int &cordx, &cordy)
{
	
  
}
void tile9_23(int &cordx, &cordy)
{
	
  
}
void tile9_24(int &cordx, &cordy)
{
	
  
}
void tile9_25(int &cordx, &cordy)
{
	
  
}
void tile9_26(int &cordx, &cordy)
{
	
  
}
void tile9_27(int &cordx, &cordy)
{
	
  
}
void tile9_28(int &cordx, &cordy)
{
	
  
}
void tile9_29(int &cordx, &cordy)
{
	
  
}
void tile9_30(int &cordx, &cordy)
{
	
  
}
void tile9_31(int &cordx, &cordy)
{
	
  
}
void tile9_32(int &cordx, &cordy)
{
	
  
}
void tile9_33(int &cordx, &cordy)
{
	
  
}
void tile9_34(int &cordx, &cordy)
{
	
  
}
void tile9_35(int &cordx, &cordy)
{
	
  
}
void tile9_36(int &cordx, &cordy)
{
	
  
}
void tile9_37(int &cordx, &cordy)
{
	
  
}
void tile9_38(int &cordx, &cordy)
{
	
  
}
//10
void tile10_4(int &cordx, &cordy)
{
	
  
}
void tile10_5(int &cordx, &cordy)
{
	
  
}
void tile10_21(int &cordx, &cordy)
{
	
  
}
void tile10_22(int &cordx, &cordy)
{
	
  
}
void tile10_23(int &cordx, &cordy)
{
	
  
}
void tile10_24(int &cordx, &cordy)
{
	
  
}
void tile10_25(int &cordx, &cordy)
{
	
  
}
void tile10_26(int &cordx, &cordy)
{
	
  
}
void tile10_27(int &cordx, &cordy)
{
	
  
}
void tile10_28(int &cordx, &cordy)
{
	
  
}
void tile10_29(int &cordx, &cordy)
{
	
  
}
void tile10_30(int &cordx, &cordy)
{
	
  
}
void tile10_31(int &cordx, &cordy)
{
	
  
}
void tile10_32(int &cordx, &cordy)
{
	
  
}
void tile10_33(int &cordx, &cordy)
{
	
  
}
void tile10_34(int &cordx, &cordy)
{
	
  
}
void tile10_35(int &cordx, &cordy)
{
	
  
}
void tile10_36(int &cordx, &cordy)
{
	
  
}
void tile10_37(int &cordx, &cordy)
{
	
  
}
void tile10_38(int &cordx, &cordy)
{
	
  
}
//11
void tile11_4(int &cordx, &cordy)
{
	
  
}
void tile11_5(int &cordx, &cordy)
{
	
  
}
void tile11_21(int &cordx, &cordy)
{
	
  
}
void tile11_22(int &cordx, &cordy)
{
	
  
}
void tile11_23(int &cordx, &cordy)
{
	
  
}
void tile11_24(int &cordx, &cordy)
{
	
  
}
void tile11_25(int &cordx, &cordy)
{
	
  
}
void tile11_26(int &cordx, &cordy)
{
	
  
}
void tile11_27(int &cordx, &cordy)
{
	
  
}
void tile11_28(int &cordx, &cordy)
{
	
  
}
void tile11_29(int &cordx, &cordy)
{
	
  
}
void tile11_30(int &cordx, &cordy)
{
	
  
}
void tile11_31(int &cordx, &cordy)
{
	
  
}
void tile11_32(int &cordx, &cordy)
{
	
  
}
void tile11_33(int &cordx, &cordy)
{
	
  
}
void tile11_34(int &cordx, &cordy)
{
	
  
}
void tile11_35(int &cordx, &cordy)
{
	
  
}
void tile11_36(int &cordx, &cordy)
{
	
  
}
void tile11_37(int &cordx, &cordy)
{
	
  
}
void tile11_38(int &cordx, &cordy)
{
	
  
}
//12
void tile12_4(int &cordx, &cordy)
{
	
  
}
void tile12_5(int &cordx, &cordy)
{
	
  
}
void tile12_21(int &cordx, &cordy)
{
	
  
}
void tile12_22(int &cordx, &cordy)
{
	
  
}
void tile12_23(int &cordx, &cordy)
{
	
  
}
void tile12_24(int &cordx, &cordy)
{
	
  
}
void tile12_25(int &cordx, &cordy)
{
	
  
}
void tile12_26(int &cordx, &cordy)
{
	
  
}
void tile12_27(int &cordx, &cordy)
{
	
  
}
void tile12_28(int &cordx, &cordy)
{
	
  
}
void tile12_29(int &cordx, &cordy)
{
	
  
}
void tile12_30(int &cordx, &cordy)
{
	
  
}
void tile12_31(int &cordx, &cordy)
{
	
  
}
void tile12_32(int &cordx, &cordy)
{
	
  
}
void tile12_33(int &cordx, &cordy)
{
	
  
}
void tile12_34(int &cordx, &cordy)
{
	
  
}
void tile12_35(int &cordx, &cordy)
{
	
  
}
void tile12_36(int &cordx, &cordy)
{
	
  
}
void tile12_37(int &cordx, &cordy)
{
	
  
}
void tile12_38(int &cordx, &cordy)
{
	
  
}
//13
void tile13_4(int &cordx, &cordy)
{
	
  
}
void tile13_5(int &cordx, &cordy)
{
	
  
}
void tile13_21(int &cordx, &cordy)
{
	
  
}
void tile13_22(int &cordx, &cordy)
{
	
  
}
void tile13_23(int &cordx, &cordy)
{
	
  
}
void tile13_24(int &cordx, &cordy)
{
	
  
}
void tile13_25(int &cordx, &cordy)
{
	
  
}
void tile13_26(int &cordx, &cordy)
{
	
  
}
void tile13_27(int &cordx, &cordy)
{
	
  
}
void tile13_28(int &cordx, &cordy)
{
	
  
}
void tile13_29(int &cordx, &cordy)
{
	
  
}
void tile13_30(int &cordx, &cordy)
{
	
  
}
void tile13_31(int &cordx, &cordy)
{
	
  
}
void tile13_32(int &cordx, &cordy)
{
	
  
}
void tile13_33(int &cordx, &cordy)
{
	
  
}
void tile13_34(int &cordx, &cordy)
{
	
  
}
void tile13_35(int &cordx, &cordy)
{
	
  
}
void tile13_36(int &cordx, &cordy)
{
	
  
}
void tile13_37(int &cordx, &cordy)
{
	
  
}
void tile13_38(int &cordx, &cordy)
{
	
  
}
//14
void tile14_4(int &cordx, &cordy)
{
	
  
}
void tile14_5(int &cordx, &cordy)
{
	
  
}
void tile14_6(int &cordx, &cordy)
{
	
  
}
void tile14_7(int &cordx, &cordy)
{
	
  
}
void tile14_8(int &cordx, &cordy)
{
	
  
}
void tile14_9(int &cordx, &cordy)
{
	
  
}
void tile14_10(int &cordx, &cordy)
{
	
  
}
void tile14_11(int &cordx, &cordy)
{
	
  
}
void tile14_16(int &cordx, &cordy)
{
	
  
}
void tile14_17(int &cordx, &cordy)
{
	
  
}
void tile14_18(int &cordx, &cordy)
{
	
  
}
void tile14_19(int &cordx, &cordy)
{
	
  
}
void tile14_20(int &cordx, &cordy)
{
	
  
}
void tile14_21(int &cordx, &cordy)
{
	
  
}
void tile14_22(int &cordx, &cordy)
{
	
  
}
void tile14_23(int &cordx, &cordy)
{
	
  
}
void tile14_24(int &cordx, &cordy)
{
	
  
}
void tile14_25(int &cordx, &cordy)
{
	
  
}
void tile14_26(int &cordx, &cordy)
{
	
  
}
void tile14_27(int &cordx, &cordy)
{
	
  
}
void tile14_28(int &cordx, &cordy)
{
	
  
}
void tile14_29(int &cordx, &cordy)
{
	
  
}
void tile14_30(int &cordx, &cordy)
{
	
  
}
void tile14_31(int &cordx, &cordy)
{
	
  
}
void tile14_32(int &cordx, &cordy)
{
	
  
}
void tile14_33(int &cordx, &cordy)
{
	
  
}
void tile14_34(int &cordx, &cordy)
{
	
  
}
void tile14_35(int &cordx, &cordy)
{
	
  
}
void tile14_36(int &cordx, &cordy)
{
	
  
}
void tile14_37(int &cordx, &cordy)
{
	
  
}
void tile14_38(int &cordx, &cordy)
{
	
}
//15
void tile14_4(int &cordx, &cordy)
{
	
  
}
void tile14_5(int &cordx, &cordy)
{
	
  
}
void tile14_6(int &cordx, &cordy)
{
	
  
}
void tile14_7(int &cordx, &cordy)
{
	
  
}
void tile14_8(int &cordx, &cordy)
{
	
  
}
void tile14_9(int &cordx, &cordy)
{
	
  
}
void tile14_10(int &cordx, &cordy)
{
	
  
}
void tile14_11(int &cordx, &cordy)
{
	
  
}
void tile14_12(int &cordx, &cordy)
{
	
  
}
void tile14_13(int &cordx, &cordy)
{
	
  
}
void tile14_14(int &cordx, &cordy)
{
	
  
}
void tile14_15(int &cordx, &cordy)
{
	
  
}

void tile14_16(int &cordx, &cordy)
{
	
  
}
void tile14_17(int &cordx, &cordy)
{
	
  
}
void tile14_18(int &cordx, &cordy)
{
	
  
}
void tile14_19(int &cordx, &cordy)
{
	
  
}
void tile14_20(int &cordx, &cordy)
{
	
  
}
void tile14_21(int &cordx, &cordy)
{
	
  
}
void tile14_22(int &cordx, &cordy)
{
	
  
}
void tile14_23(int &cordx, &cordy)
{
	
  
}
void tile14_24(int &cordx, &cordy)
{
	
  
}
void tile14_25(int &cordx, &cordy)
{
	
  
}
void tile14_26(int &cordx, &cordy)
{
	
  
}
void tile14_27(int &cordx, &cordy)
{
	
  
}
void tile14_28(int &cordx, &cordy)
{
	
  
}
void tile14_29(int &cordx, &cordy)
{
	
  
}
void tile14_30(int &cordx, &cordy)
{
	
  
}
void tile14_31(int &cordx, &cordy)
{
	
  
}
void tile14_32(int &cordx, &cordy)
{
	
  
}
void tile14_33(int &cordx, &cordy)
{
	
  
}
void tile14_34(int &cordx, &cordy)
{
	
  
}
void tile14_35(int &cordx, &cordy)
{
	
  
}
void tile14_36(int &cordx, &cordy)
{
	
  
}
void tile14_37(int &cordx, &cordy)
{
	
  
}
void tile14_38(int &cordx, &cordy)
{
	
}



void tile25_26(int &cordx, &cordy)
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

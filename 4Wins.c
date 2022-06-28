// ----------------------------------------------------------------
//  4 Wins f�r Casio FX-9860G2 Ver 1.00
// Author: Fabian Schuster

//Librarys

#include "fxlib.h"
#include <stdio.h>
#include <stdlib.h>

//registrations

void feld();
void rechteck();
void kreis();
void place();
void win();
void endscreen();
short store1[7] = { 0 };
short store2[7] = { 0 };
short store3[7] = { 0 };
short store4[7] = { 0 };
short store5[7] = { 0 };
short store6[7] = { 0 };
short store7[7] = { 0 };
short store8[7] = { 0 };
int game = 1;
int wi = 0;
int i = 0;
int g = 0;
int l = 0;
int pass = 1;
int placey = 0;
int player = 1;
unsigned int key;


//main program
int AddIn_main(int isAppli, unsigned short OptionNum)
{
    
     Bdisp_AllClr_DDVRAM();


while(game == 1){
 
//startup
Bdisp_AllClr_DDVRAM();
wi = 1;
placey = 0;
i = 0;
pass = 1;
player = 1;
feld();
for(i=0 ; i<7 ; i++){
store1[i] = 0 ;
}
for(i=0 ; i<7 ; i++){
store2[i] = 0 ;
}
for(i=0 ; i<7 ; i++){
store3[i] = 0 ;
}
for(i=0 ; i<7 ; i++){
store4[i] = 0 ;
}
for(i=0 ; i<7 ; i++){
store5[i] = 0 ;
}
for(i=0 ; i<7 ; i++){
store6[i] = 0 ;
}
for(i=0 ; i<7 ; i++){
store7[i] = 0 ;
}
for(i=0 ; i<7 ; i++){
store8[i] = 0 ;
}
if(player % 2 == 0){
        rechteck(110,18);  
    }else{
        kreis(110,18);
   }    


 //actual game
while(wi == 1){

GetKey( &key ); 

 switch (key){ 
  case KEY_CHAR_1 :
    if(store1[0]==0){
     for(i=6 ; i>=0 ; i--){
      if(store1[i] == 0){
       placey=i;
       place(1);
       pass = 0;
       if(player % 2 == 0){
         store1[i] = 2;
    }else{
        store1[i] = 1;
   }  
       break;
   }
  }
 }

      break;
   case KEY_CHAR_2 :
      if(store2[0]==0){
      for(i=6 ; i>=0 ; i--){
      if(store2[i] == 0){
       placey=i;
       place(2);
       pass = 0;
       if(player % 2 == 0){
         store2[i] = 2;
    }else{
        store2[i] = 1;
   }  
       break;
   }
  }

}

      break;
    case KEY_CHAR_3 :
      if(store3[0]==0){
     for(i=6 ; i>=0 ; i--){
      if(store3[i] == 0){
       placey=i;
       place(3);
       pass = 0;
       if(player % 2 == 0){
         store3[i] = 2;
    }else{
        store3[i] = 1;
   }  
       break;
   }
  }

}

      break;
    case KEY_CHAR_4 :
      if(store4[0]==0){
      for(i=6 ; i>=0 ; i--){
      if(store4[i] == 0){
       placey=i;
       place(4);
       pass = 0;
       if(player % 2 == 0){
         store4[i] = 2;
    }else{
        store4[i] = 1;
   }  
       break;
   }
  }

}

      break;
    case KEY_CHAR_5 :
      if(store5[0]==0){
      for(i=6 ; i>=0 ; i--){
      if(store5[i] == 0){
       placey=i;
       place(5);
       pass = 0;
       if(player % 2 == 0){
         store5[i] = 2;
    }else{
        store5[i] = 1;
   }  
       break;
   }
  }

}

      break;
    case KEY_CHAR_6 :
      if(store6[0]==0){
      for(i=6 ; i>=0 ; i--){
      if(store6[i] == 0){
       placey=i;
       place(6);
       pass = 0;
       if(player % 2 == 0){
         store6[i] = 2;
    }else{
        store6[i] = 1;
   }  
       break;
   }
  }

}

      break;
    case KEY_CHAR_7 :
      if(store7[0]==0){
      for(i=6 ; i>=0 ; i--){
      if(store7[i] == 0){
       placey=i;
       place(7);
       pass = 0;
       if(player % 2 == 0){
         store7[i] = 2;
    }else{
        store7[i] = 1;
   }  
       break;
   }
  }

}

      break;
    case KEY_CHAR_8 :
      if(store8[0]==0){
      for(i=6 ; i>=0 ; i--){
      if(store8[i] == 0){
       placey=i;
       place(8);
       pass = 0;
       if(player % 2 == 0){
         store8[i] = 2;
    }else{
        store8[i] = 1;
   }  
       break;
   }
  }

}

      break;
    case KEY_CTRL_AC :
      wi=0;
      break;
   
    case KEY_CTRL_F1 :
    if(pass == 1){
      player++;
      if(player % 2 == 0){
        rechteck(110,18);  
    }else{
        kreis(110,18);
   }    
   }

  } 

if(store1[0] != 0 && store2[0] != 0 && store3[0] != 0 && store4[0] != 0 && store5[0] != 0 && store6[0] != 0 && store7[0] != 0 && store8[0] != 0){
PopUpWin(1);
locate(5,4);
   Print((unsigned char*)"Unentschieden");
    GetKey(&key);
    key = 0;
wi = 0;
}
    
win();

     }
   }
    return 1;
}

//classes

void feld(){
   Bdisp_DrawLineVRAM(0,0,64,0);                                     //Horizontal
   Bdisp_DrawLineVRAM(0,8,64,8);
   Bdisp_DrawLineVRAM(0,16,64,16);
   Bdisp_DrawLineVRAM(0,24,64,24);
   Bdisp_DrawLineVRAM(0,32,64,32);
   Bdisp_DrawLineVRAM(0,40,64,40);
   Bdisp_DrawLineVRAM(0,48,64,48);
   Bdisp_DrawLineVRAM(0,56,64,56);
   
   Bdisp_DrawLineVRAM(0,0,0,56);                                        //Vertical
   Bdisp_DrawLineVRAM(8,0,8,56);
   Bdisp_DrawLineVRAM(16,0,16,56);
   Bdisp_DrawLineVRAM(24,0,24,56);
   Bdisp_DrawLineVRAM(32,0,32,56);
   Bdisp_DrawLineVRAM(40,0,40,56);
   Bdisp_DrawLineVRAM(48,0,48,56);
   Bdisp_DrawLineVRAM(56,0,56,56);
   Bdisp_DrawLineVRAM(64,0,64,56);

   PrintMini(3,58,"1",MINI_OVER);                            //Zahlen
   PrintMini(11,58,"2",MINI_OVER);   
   PrintMini(19,58,"3",MINI_OVER);   
   PrintMini(27,58,"4",MINI_OVER);   
   PrintMini(35,58,"5",MINI_OVER);   
   PrintMini(43,58,"6",MINI_OVER);         
   PrintMini(51,58,"7",MINI_OVER);   
   PrintMini(59,58,"8",MINI_OVER);   


   locate(13,1);                                                                    //Rechts
   Print((unsigned char*)"4 Gewinnt");
   Bdisp_AreaReverseVRAM(70,0,127,7);

   PrintMini(75,16,"Am Zug:",MINI_OVER);
   PrintMini(72,32,"[F1]: Anderer",MINI_OVER);  
   PrintMini(76,40,"Startspieler",MINI_OVER);  
   PrintMini(72,48,"[1-8]: Setzen",MINI_OVER);  
   PrintMini(72,56,"[AC/ON]: Neu",MINI_OVER); 
      
}

void rechteck(int x, int y){
   Bdisp_SetPoint_VRAM(x,y,1);
   Bdisp_SetPoint_VRAM(x,y-1,1);
   Bdisp_SetPoint_VRAM(x,y-2,1);
   Bdisp_SetPoint_VRAM(x,y+1,1);
   Bdisp_SetPoint_VRAM(x,y+2,1);
   Bdisp_SetPoint_VRAM(x+1,y,1);
   Bdisp_SetPoint_VRAM(x+2,y,1);
   Bdisp_SetPoint_VRAM(x-1,y,1);
   Bdisp_SetPoint_VRAM(x-2,y,1);
   Bdisp_SetPoint_VRAM(x-1,y-1,1);
   Bdisp_SetPoint_VRAM(x+1,y+1,1);
   Bdisp_SetPoint_VRAM(x-1,y+1,1);
   Bdisp_SetPoint_VRAM(x+1,y-1,1);
   Bdisp_SetPoint_VRAM(x+1,y-2,1);
   Bdisp_SetPoint_VRAM(x+2,y-2,1);
   Bdisp_SetPoint_VRAM(x+2,y-1,1);
   Bdisp_SetPoint_VRAM(x+2,y+1,1);
   Bdisp_SetPoint_VRAM(x+2,y+2,1);
   Bdisp_SetPoint_VRAM(x+1,y+2,1);
   Bdisp_SetPoint_VRAM(x-1,y+2,1);
   Bdisp_SetPoint_VRAM(x-2,y+2,1);
   Bdisp_SetPoint_VRAM(x-2,y+1,1);
   Bdisp_SetPoint_VRAM(x-2,y-1,1);
   Bdisp_SetPoint_VRAM(x-2,y-2,1);
   Bdisp_SetPoint_VRAM(x-1,y-2,1);
}

void kreis(int x, int y){
   Bdisp_SetPoint_VRAM(x,y,0);
   Bdisp_SetPoint_VRAM(x,y-1,1);
   Bdisp_SetPoint_VRAM(x,y-2,1);
   Bdisp_SetPoint_VRAM(x,y+1,1);
   Bdisp_SetPoint_VRAM(x,y+2,1);
   Bdisp_SetPoint_VRAM(x+1,y,1);
   Bdisp_SetPoint_VRAM(x+2,y,1);
   Bdisp_SetPoint_VRAM(x-1,y,1);
   Bdisp_SetPoint_VRAM(x-2,y,1);
   Bdisp_SetPoint_VRAM(x-1,y-1,1);
   Bdisp_SetPoint_VRAM(x+1,y+1,1);
   Bdisp_SetPoint_VRAM(x-1,y+1,1);
   Bdisp_SetPoint_VRAM(x+1,y-1,1);
   Bdisp_SetPoint_VRAM(x+1,y-2,1);
   Bdisp_SetPoint_VRAM(x+2,y-1,1);
   Bdisp_SetPoint_VRAM(x+2,y+1,1);
   Bdisp_SetPoint_VRAM(x+1,y+2,1);
   Bdisp_SetPoint_VRAM(x-1,y+2,1);
   Bdisp_SetPoint_VRAM(x-2,y+1,1);
   Bdisp_SetPoint_VRAM(x-2,y-1,1);
   Bdisp_SetPoint_VRAM(x-1,y-2,1);
   Bdisp_SetPoint_VRAM(x+2,y-2,0);
   Bdisp_SetPoint_VRAM(x+2,y+2,0);
   Bdisp_SetPoint_VRAM(x-2,y-2,0);
   Bdisp_SetPoint_VRAM(x-2,y+2,0);
}

void place(int m){
   if(player % 2 == 0){
        rechteck(m*8-4,placey*8+4);
        kreis(110,18);
    }else{
        kreis(m*8-4,placey*8+4);
        rechteck(110,18);
   }  
 player++;
}

void win(){
for(i=1  ;i<=2 ; i++){

//vertical
for(g=0 ; g<=3 ; g++){
   if(store1[g] == i && store1[g+1] == i && store1[g+2] == i && store1[g+3] == i){
     wi = 0;
    endscreen(i);
   }
   if(store2[g] == i && store2[g+1] == i && store2[g+2] == i && store2[g+3] == i){
     wi = 0;
     endscreen(i);
   }
   if(store3[g] == i && store3[g+1] == i && store3[g+2] == i && store3[g+3] == i){
     wi = 0;
     endscreen(i);
   }
    if(store4[g] == i && store4[g+1] == i && store4[g+2] == i && store4[g+3] == i){
     wi = 0;
     endscreen(i);
   }
    if(store5[g] == i && store5[g+1] == i && store5[g+2] == i && store5[g+3] == i){
     wi = 0;
     endscreen(i);
   }
    if(store6[g] == i && store6[g+1] == i && store6[g+2] == i && store6[g+3] == i){
     wi = 0;
     endscreen(i);
   }
    if(store7[g] == i && store7[g+1] == i && store7[g+2] == i && store7[g+3] == i){
     wi = 0;
     endscreen(i);
   }
    if(store8[g] == i && store8[g+1] == i && store8[g+2] == i && store8[g+3] == i){
     wi = 0;
     endscreen(i);
   }
 }

//Horizontal
for(l=0 ; l<7 ; l++){
   if(store1[l] == i && store2[l] == i && store3[l] == i && store4[l] == i){
     wi = 0;
     endscreen(i);
   }
   if(store2[l] == i && store3[l] == i && store4[l] == i && store5[l] == i){
     wi = 0;
     endscreen(i);
   }
   if(store3[l] == i && store4[l] == i && store5[l] == i && store6[l] == i){
     wi = 0;
     endscreen(i);
   }
   if(store4[l] == i && store5[l] == i && store6[l] == i && store7[l] == i){
     wi = 0;
     endscreen(i);
   }
   if(store5[l] == i && store6[l] == i && store7[l] == i && store8[l] == i){
     wi = 0;
     endscreen(i);
   }
}

//Vertical to top right
for(l=3 ; l<=6 ; l++){
if(store1[l] == i && store2[l-1] == i && store3[l-2] == i && store4[l-3] == i){
     wi = 0;
     endscreen(i);
   }
if(store2[l] == i && store3[l-1] == i && store4[l-2] == i && store5[l-3] == i){
     wi = 0;
     endscreen(i);
   }
if(store3[l] == i && store4[l-1] == i && store5[l-2] == i && store6[l-3] == i){
     wi = 0;
     endscreen(i);
   }
if(store4[l] == i && store5[l-1] == i && store6[l-2] == i && store7[l-3] == i){
     wi = 0;
     endscreen(i);
   }
if(store5[l] == i && store6[l-1] == i && store7[l-2] == i && store8[l-3] == i){
     wi = 0;
     endscreen(i);
   }

//Vertical to bottom right
if(store8[l] == i && store7[l-1] == i && store6[l-2] == i && store5[l-3] == i){
     wi = 0;
     endscreen(i);
   }
if(store7[l] == i && store6[l-1] == i && store5[l-2] == i && store4[l-3] == i){
     wi = 0;
     endscreen(i);
   }
if(store6[l] == i && store5[l-1] == i && store4[l-2] == i && store3[l-3] == i){
     wi = 0;
     endscreen(i);
   }
if(store5[l] == i && store4[l-1] == i && store3[l-2] == i && store2[l-3] == i){
     wi = 0;
     endscreen(i);
   }
if(store4[l] == i && store3[l-1] == i && store2[l-2] == i && store1[l-3] == i){
     wi = 0;
     endscreen(i);
   }
}
  }
}


void endscreen(int b){
  PopUpWin(1);
   locate(9,4);
   Print((unsigned char*)"Gewinnt");
  if(i == 1){
         rechteck(35,27);
    }else{
         kreis(35,27);
   }  
    GetKey(&key);
    key = 0;
}



//****************************************************************************
//**************                                              ****************
//**************                 Notice!                      ****************
//**************                                              ****************
//**************  Please do not change the following source.  ****************
//**************                                              ****************
//****************************************************************************


#pragma section _BR_Size
unsigned long BR_Size;
#pragma section


#pragma section _TOP

//****************************************************************************
//  InitializeSystem
//
//  param   :   isAppli   : 1 = Application / 0 = eActivity
//              OptionNum : Option Number (only eActivity)
//
//  retval  :   1 = No error / 0 = Error
//
//****************************************************************************
int InitializeSystem(int isAppli, unsigned short OptionNum)
{
    return INIT_ADDIN_APPLICATION(isAppli, OptionNum);
}

#pragma section


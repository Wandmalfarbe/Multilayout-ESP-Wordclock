#include <Arduino.h>


unsigned int matrix[11][11] = {                               //aus 10  11

  {0,   1,  2,  3,  4,  5,  6,  7,  8,  9, 10},
  {21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11},
  {22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32},
  {43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33},
  {44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54},
  {65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55},
  {66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76},
  {87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77},
  {88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98},
  {109,108,107,106,105,104,103,102,101,100,99}, 
  {110,111,112,113},                                          //ergänzt
  
  };
  
  
  //ergänzt
  


//------------------------------------------------------------------------------

unsigned int smatrix[114] = {                             //vorher 110


   0,   1,  2,  3,  4,  5,  6,  7,  8,  9, 10,
   11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21,
   22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32,
   33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43,
   44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54,
   55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65,
   66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76,
   77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87,
   88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98,
   99,100,101,102,103,104,105,106,107,108,109,
   110,111,112,113,                                         //ergänzt
};

//------------------------------------------------------------------------------


unsigned int min_arr[2][4] = {                       //ergänzt aus "Uhr func 169"-datei

  {110,  111,  112,  113},                           // 152 zu 110 / 150 zu 111 / 148 zu 112 / 146 zu 113
  //{ 110,   111,  112,  113}                         // auskommentieren   
};


unsigned int rmatrix[36] = {                        //eingefügt für Ambilight
114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 
126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137,
138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149
};


//------------------------------------------------------------------------------





void es_ist() 
{
  //Es
  led_set(0);
  led_set(1);  
  
  //Ist
  led_set(3);
  led_set(4);
  led_set(5);
}

//------------------------------------------------------------------------------

void nach()
{  
  led_set(38);
  led_set(39);
  led_set(40);
  led_set(41);
}

//------------------------------------------------------------------------------

void vor()
{
  led_set(35);
  led_set(36);
  led_set(37); 
}
//------------------------------------------------------------------------------

void viertel()
{ 
  led_set(26);
  led_set(27);
  led_set(28);
  led_set(29);
  led_set(30);
  led_set(31);
  led_set(32);   
} 

//------------------------------------------------------------------------------

void fuenf()
{
  led_set(7);
  led_set(8);
  led_set(9);
  led_set(10);  
}

//------------------------------------------------------------------------------

void zehn()
{
  led_set(18);
  led_set(19);
  led_set(20);
  led_set(21);
}

//------------------------------------------------------------------------------
void zwanzig()
{
  led_set(11);
  led_set(12);
  led_set(13);
  led_set(14);
  led_set(15);  
  led_set(16);
  led_set(17);   
}

//------------------------------------------------------------------------------

void halb()
{  
  led_set(44);
  led_set(45);
  led_set(46);
  led_set(47); 
}

//------------------------------------------------------------------------------

void eins()
{
  led_set(60);
  led_set(61);
  led_set(62);
  led_set(63); 
}

//------------------------------------------------------------------------------

void uhr()
{
  led_set(100);
  led_set(101);
  led_set(102);
}

//------------------------------------------------------------------------------

void h_ein()
{
  led_set(61);
  led_set(62);
  led_set(63);
}

//------------------------------------------------------------------------------

void h_zwei()
{  
  led_set(62);
  led_set(63);
  led_set(64);
  led_set(65); 
}

//------------------------------------------------------------------------------

void h_drei()
{  
  led_set(67);
  led_set(68);
  led_set(69);
  led_set(70);  
}

//------------------------------------------------------------------------------

void h_vier()
{ 
  led_set(77);
  led_set(78);
  led_set(79);
  led_set(80);  
}

//------------------------------------------------------------------------------

void h_fuenf()
{  
  led_set(73);
  led_set(74);
  led_set(75);
  led_set(76);  
}

//------------------------------------------------------------------------------

void h_sechs()
{
  led_set(104);
  led_set(105);
  led_set(106);
  led_set(107);
  led_set(108);
}

//------------------------------------------------------------------------------

void h_sieben()
{
  led_set(55);
  led_set(56);
  led_set(57);
  led_set(58);
  led_set(59);   
  led_set(60);     
}

//------------------------------------------------------------------------------

void h_acht()
{
  led_set(89);
  led_set(90);
  led_set(91);
  led_set(92);
}

//------------------------------------------------------------------------------

void h_neun()
{
  led_set(81);
  led_set(82);
  led_set(83);
  led_set(84);  
}

//------------------------------------------------------------------------------

void h_zehn()
{
  led_set(93);
  led_set(94);
  led_set(95);
  led_set(96); 
}

//------------------------------------------------------------------------------

void h_elf()
{
  led_set(85);
  led_set(86);
  led_set(87);
}

//------------------------------------------------------------------------------

void h_zwoelf()
{ 

  led_set(49);
  led_set(50);
  led_set(51);
  led_set(52);
  led_set(53);

}

//------------------------------------------------------------------------------

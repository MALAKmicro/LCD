#include<Wire.h>// library

#include<LiquidCrystal_I2C.h>// library LCD with I2C

LiquidCrystal_I2C lcd(0x27,16,2);//change name lcd & Details and type lcd 

void setup(){

  lcd.init();// initialization lcd (begin lcd)

  lcd.backlight();//To turn on the backlight lcd

  lcd.setCursor(2,0);//Determine where to write

  lcd.print("MALAKmicro");// your name
}


void loop()
{
}


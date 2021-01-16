
// 10 is button 1, rest is 2, 3, 4, 5, 6, 7, 8, 9

int inPins[] = { 10, 2, 3, 4, 5, 6, 7, 8, 9 };

char shiftkey = KEY_LEFT_SHIFT;
char ctrlkey = KEY_LEFT_CTRL;
char winKey = KEY_LEFT_GUI; 
char f1 = KEY_F1;
char f2 = KEY_F2;
char f3 = KEY_F3;
char f4 = KEY_F4;
char f5 = KEY_F5;
char f6 = KEY_F6;
char f7 = KEY_F7;
char f8 = KEY_F8;
char f9 = KEY_F9;

char enter = KEY_RETURN; 

void setup()
{
 for (int i=0; i<sizeof(inPins); i++)
  {
    pinMode(inPins[i], INPUT_PULLUP); 
  }
  Keyboard.begin();
}

void loop()
{
 for (int i=0; i<sizeof(inPins); i++)
  {
    if (digitalRead(inPins[i]) == 0)
    {
       pressKey(inPins[i]);
    } 
  delay(5);
  } 
}
void pressKey(int pinnum)
{
  switch (pinnum)
  {
    case 10:
      pressMacro('q');
      delay(500);
      break;
    case 2:
      pressMacro('w');
      delay(500);
      break;      
    case 3:
      pressMacro('e');
      delay(500);
      break;      
    case 4:
      pressMacro('r');
      delay(500);
      break;      
    case 5:
      pressMacro('t');
      delay(500);
      break;      
    case 6:
      pressMacro('y');
      delay(500);
      break;      
    case 7:
      pressMacro('u');
      delay(500);
      break;      
    case 8:
      pressMacro('i');
      delay(500);
      break;      
    case 9:
      pressMacro('o');
      delay(500);
      break;
    default:
      break;    
  }
}

void pressMacro(char key)
{
  Keyboard.press(shiftkey);
  Keyboard.press(ctrlkey);
  Keyboard.write(key);
  delay(10);
  Keyboard.releaseAll();
}

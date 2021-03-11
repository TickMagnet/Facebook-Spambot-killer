// This code will go thru a friend's list of a Spambot on Facebook
// and report them all as fake and block them. Lots of these bots
// Have several hundred friends and you can break their network 
// I use this on a Digispark but there are other HID devices.
// If you end up in the wrong menu adjust the number
// of tab and enter commands as needed.
// if your Digispark misses menus slow down the code to 100 microseconds
// Most fake bots are able to be removed with this set of commands.
// To use navigate to the bot's friend list, hit refresh 
// and plug in your Digispark.
// This code is open source like the keyboard example it is based on
// and is released under the same licence as the original.
// Peterthinks 3/11/2021
// I know this can be made shorter, faster or more adjustable
// but copy/paste was easy, fast and simple.

#include "DigiKeyboard.h"

void setup() {

}

void loop() {
  
 // reset keystroke
 
  DigiKeyboard.sendKeyStroke(0);
  
 // Tab down to friends list of bot
   
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);    
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(200);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(200);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(200);
  DigiKeyboard.write('\t');
  //DigiKeyboard.delay(200);
 // DigiKeyboard.write('\t');
 // DigiKeyboard.delay(200);
 // DigiKeyboard.write('\t');
 // DigiKeyboard.delay(200);
      
 // Enter first friend on bot's friend list
 
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);

 // Tab over to profile menu of bot's friend
   
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);  
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(200);
  
 // enter menu
  
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
  DigiKeyboard.delay(1000);

 // select report profile
    
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

 // tab to fake account button
   
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(200);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(200);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(200);

 // press fake account button
  
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

 // tab down to done and confirm

 
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1200);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(20);

 // press done
 
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000); 

 // back arrow to go back to bot friend list
  
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT,MOD_ALT_LEFT);
  DigiKeyboard.delay(2000);

 // refresh bot's friend list
  
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_CONTROL_LEFT);
  DigiKeyboard.delay(2000);

 // loop back up and repeat 
               
}

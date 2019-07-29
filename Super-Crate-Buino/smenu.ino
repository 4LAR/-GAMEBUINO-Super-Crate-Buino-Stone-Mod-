#define SMENULENGTH 3
#define CNFMENULENGTH 2

const char strCheats[] PROGMEM = "Cheats";
const char strSystemInfo[] PROGMEM = "Stystem info";
const char strReset[] PROGMEM = "Reset score";

const char strCon[] PROGMEM = "Cheats ON";
const char strCoff[] PROGMEM = "Cheats OFF";

const char* const sMenu[SMENULENGTH] PROGMEM = {
  strCheats,
  strSystemInfo,
  strReset,
};
const char* const cnfMenu[CNFMENULENGTH] PROGMEM = {
  strCon,
  strCoff,
};

void smenu(){
  switch(gb.menu(sMenu, SMENULENGTH)){
    case 0: //Cheats
      //cnf();
      
      if (CheatGun == 0){
        CheatGun = 1;
        gb.popup(F("Cheats ON"),20);
      }else{
        CheatGun = 0;
        gb.popup(F("Cheats OFF"),20);
      }
      
      break;
    case 1: //display system info
      displaySystemInfo();
      break;
    case 2: //reset score
      
      break;
    default:
      break;
  }
}
/*
void cnf(){
  switch(gb.menu(cnfMenu, CNFMENULENGTH)){
    case 0: //on
      CheatGun = 1;
      break;
    case 1: //off
      CheatGun = 0;
      break;
    default:
      break;
  }
}
*/

void displaySystemInfo(){
  while(1){
    if(gb.update()){
      if (gb.buttons.pressed(BTN_C)) {
        gb.sound.playCancel();
        break;
      }
      gb.display.print(F("Bat:"));
      gb.display.print(gb.battery.voltage);
      gb.display.println(F("mV"));

      gb.display.print(F("Bat lvl:"));
      gb.display.print(gb.battery.level);
      gb.display.println(F("/4"));

      gb.display.print(F("Light:"));
      gb.display.println(gb.backlight.ambientLight);

      gb.display.print(F("Backlight:"));
      gb.display.println(gb.backlight.backlightValue);

      gb.display.print(F("Volume:"));
      gb.display.print(gb.sound.getVolume());
      gb.display.print(F("/"));
      gb.display.println(gb.sound.volumeMax);
    }
  }
}

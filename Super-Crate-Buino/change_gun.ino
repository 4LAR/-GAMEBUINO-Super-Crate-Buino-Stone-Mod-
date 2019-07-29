#define GUNMENULENGTH 13

const char strPistol[] PROGMEM = "Pistol";
const char strMachinegun[] PROGMEM = "Machinegun";
const char strRifle[] PROGMEM = "Rifle";
const char strShotgun[] PROGMEM = "Shotgun";
const char strRocket[] PROGMEM = "Rocket";
const char strClub[] PROGMEM = "Club";
const char strRevolver[] PROGMEM = "Revolver";
const char strMine[] PROGMEM = "Mine";
const char strSniper[] PROGMEM = "Sniper";
const char strGrende[] PROGMEM = "Grende";
const char strAkimbo[] PROGMEM = "Akimbo";
const char strDisk[] PROGMEM = "Disk";
const char strLaser[] PROGMEM = "Laser";

const char strExplosion[] PROGMEM = "Explosion";
const char strShell[] PROGMEM = "Shell";


const char* const gunMenu[GUNMENULENGTH] PROGMEM = {
//  const char*
  strPistol,
  strRifle,
  strShotgun,
  strRocket,
  strClub,
  strRevolver,
  strMine,
  strSniper,
  strMachinegun,
  strGrende,
  strAkimbo,
  strDisk,
  strLaser,
};

void gunmenu(){
  switch(gb.menu(gunMenu, GUNMENULENGTH)){
    case 0: //Pistol
      player.weapon.subtype = W_PISTOL;
      break;
    case 1: //
      player.weapon.subtype = W_RIFLE;
      break;
    case 2: //
      player.weapon.subtype = W_SHOTGUN;
      break;
    case 3: //
      player.weapon.subtype = W_ROCKET;
      break;
    case 4: //
      player.weapon.subtype = W_CLUB;
      break;
    case 5: //
      player.weapon.subtype = W_REVOLVER;
      break;
    case 6: //
      player.weapon.subtype = W_MINE;
      break;
    case 7: //
      player.weapon.subtype = W_SNIPER;
      break;
    case 8: //
      player.weapon.subtype = W_MACHINEGUN;
      break;
    case 9: //
      player.weapon.subtype = W_GRENADE;
      break;
    case 10: //
      player.weapon.subtype = W_AKIMBO;
      break;
    case 11: //
      player.weapon.subtype = W_DISK;
      break;
    case 12: //
      player.weapon.subtype = W_LASER;
      break;
    
    default:
      break;
  }
}

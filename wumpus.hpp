#ifndef wumpus_hpp
#define wumpus_hpp

#include "wumpus.cpp"

int random20();
int random_buur();
string actie();
bool check_bestand_leeg();
void lees_instructie();
void lees_tunnel();
bool check_buur(const string& string_invoer);
void verplaats();
void verplaats_wumpus();
void schiet();
bool ruik();
bool hoor_vleermuis();
bool voelWind();
bool valkuil_check();
bool vleermuis_check();
void driver();

//#include "cpu.cpp"

//void end();
//void make_location_safe();
//void cpu_driver();

#endif /* wumpus_hpp */
#define DUMPSTER_IMPLEMENTATION
#include "./dumpster.h"

int main(void) {
    rom *r = rom_load("rom.bin");
    if (r == NULL) return 1;

    rom_dump(r);
    
    rom_unload(r);
    return 0;
}

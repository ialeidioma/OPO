#ifndef GAME_START_H_INCLUDED
#define GAME_START_H_INCLUDED

for(i=0; i<100;i++){
    cout << "\b";
}
cout << "booting IaleOS_lite 0.2\n";
Sleep(500);
cout << "Please wait while system diagnostic is run\n";
Sleep(500);
cout << "Boot Loader Status: ENABLED\n";
Sleep(500);
cout << "Boot Devices: Detected\n";
Sleep(500);
cout << "BIOS initiating boot sequence\n";
Sleep(500);
for(i=0; i<10; i++){
    cout << ".";
    Sleep(250);
    b = rand() % 10 + 1;
    if(i == b || i == 9)
        cout << "\n";

}
cout << "Boot Successful!\n";
Sleep(500);

#include "initialization.h"



#endif // GAME_START_H_INCLUDED

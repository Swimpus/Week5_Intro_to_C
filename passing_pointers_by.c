#include <stdio.h>




// LOR Guest
typedef struct{
    char name[10];
    char status[20];
    int hp;
    int dmg; 
    int def;

} Guest;

void display_stats(const Guest *guest);

void uprgade(Guest *guest);


int main(void){

    // Naming some guests.
    Guest guest1 = {
        .name = "Pierre",
        .status = "Urban Myth",
        .hp = 32,
        .dmg = 5,
        .def = 3
    };

    Guest guest2 = {
        .name = "Philip",
        .status = "Urban Plague",
        .hp = 53,
        .dmg = 10,
        .def = 15
    };
    
    // Send in the address because the paramter is a pointer.
    display_stats(&guest1);

    // Or alternatively, create a pointer and send it.

    Guest *pGuest2 = &guest2;

    display_stats(pGuest2);

    // Upgrade stats now that there is no const.
    uprgade(&guest1);
    uprgade(pGuest2);


    // See new stats.
    display_stats(&guest1);
    display_stats(pGuest2);


}

// Let's mess around with passing by pointer

void display_stats(const Guest *guest){
    printf("Name: %s\n",guest->name);
    printf("Status: %s\n",guest->status);
    printf("HP: %d\n",(*guest).hp);
    printf("DMG: %d\n",(*guest).dmg);
    printf("DEF: %d\n",(*guest).def);
    printf("----------------------\n");
    // Notice how you can use the -> and (*p).var method.
    // Choose one and be consistent. 
}

void uprgade(Guest *guest){
    printf("NOTICE STATS HAVE BEEN UPGRADED");
    guest->hp *= 2;
    guest->dmg *= 2;
    guest->def *= 2;

}

// TLDR:
// In practice: almost always pass structs by pointer. 
// Use constants when needed too!


#include <stdio.h>

int main(void){

    // What are structs really?
    // Think of them as objects that have specific characteristics, so let's say an abnormality from lob corp.

    // Mind the typedef! We use it so we don't have to use ... struct every time and just call it by its alias.
    typedef struct{
        char name[50]; // Must have a name
        char risk_level[10]; // A risk level
        double  hp; // current hp
        int max_hp; // max hp
        int damage;

    } Abnormality;

    // So now how do we declare something to have these characteristics!

    // You can doing the following ways...
    
    // |Struct Name| |Variable Name|, then you include the specifications.
    Abnormality QOH = {.name = "Queen of Hatred", .risk_level ="WAW", .hp= 1500, .max_hp=3500, .damage = 35};

    Abnormality PunishBird = {
        .name = "Punishment Bird",
        .risk_level = "TETH",
        .hp = 200,
        .max_hp = 500,
        .damage = 100
    };

    // Both are valid.

    // Note that if you don't declare every specification in the original struct, it gets defaulted to 0.
    Abnormality DTM = {.name = "Don't Touch Me"}; 

    // How to print:

    printf("Name: %s\n",QOH.name);
    printf("Risk Level: %s\n",QOH.risk_level);
    printf("HP: %.2lf/%d\n",QOH.hp,QOH.max_hp);
    printf("DMG: %d\n",QOH.damage);

    printf("---------------\n");

    printf("Name: %s\n",PunishBird.name);
    printf("Risk Level: %s\n",PunishBird.risk_level);
    printf("HP: %.2lf/%d\n",PunishBird.hp,PunishBird.max_hp);
    printf("DMG: %d\n",PunishBird.damage);

    printf("---------------\n");


    // Our unitialized case, has defaults like it's supposed to.
    // Defaults of 0 that is.
    printf("Name: %s\n",DTM.name);
    printf("Risk Level: %s\n",DTM.risk_level);
    printf("HP: %.2lf/%d\n",DTM.hp,DTM.max_hp);
    printf("DMG: %d\n",DTM.damage);

    printf("---------------\n");
    
}
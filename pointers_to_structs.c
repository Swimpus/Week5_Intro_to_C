#include <stdio.h>


// -----------------------------------------------------
// Pointers to Structs and "->""

int main(void){
    
//---POINTERS TO STRUCTS---
typedef struct 
{ char name[50];
  double hp;
  int max_hp;
} Enemy;

// Above is a struct that contains the specifications of an "Enemy:.

// Declaring a goblin that follows the struct of "Enemy".
Enemy goblin = {.name = "Goblin", .hp = 40, .max_hp= 100};
Enemy *pGOB = &goblin;

// P now holds the address of goblin.
// Dereferencing it gives back the whole struct.

printf("Current HP: %.2lf\n", goblin.hp);

(*pGOB).hp = 15; // Dereference to p (goblin), then access hp.
// Mind the () paranthesis. 

printf("Changed HP: %.2lf\n", goblin.hp);

//---THE "->" OPERATOR-----

// Because (*p).field is kinda tacky, there is a solution.
// A shorthand called -> 
// Assumed something is a pointer already

// Identical!
// p->hp == (*p).hp
// p->name == (*p).name
// The arrow means go to the struct this pointer points at and then access the mentioned field.

// Go to the struct Enemy for goblin and access it's hp
pGOB -> hp -= 10;

// Same way you would use dereferencing!
printf("%s hp : %.2lf\n",pGOB->name,pGOB->hp);

// . vs ->
// . -- Used for struct variables.
// -> -- Used for a pointer to a struct

Enemy zombie = {.name = "Zombie", .hp=8, .max_hp=16};
Enemy *pZOM = &zombie;

printf("%s HP: %.2lf\n",pZOM->name,pZOM->hp);

(*pZOM).hp += 2; // Still valid
pZOM->hp += 2; // Considered better.

// Note how the hp is now 12! We added 2 two times with the two different methods.
printf("%s HP: %.2lf\n",pZOM->name,pZOM->hp);

}
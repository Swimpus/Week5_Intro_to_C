# include <stdio.h>

// Creating a normal struct!
typedef struct 
{
    char name[20];
    double hp;
    int max_hp;
    int atk;
    int def;
} Enemy;

// Now how do we go about declaring an array of structs.

Enemy dungeon[3] = { // Because this is now an array all items technically have an index
	{   .name = "Goblin",  // [0]
	    .hp = 40, .max_hp = 40, 
	    .atk =  8, .def = 2 
	},
    {   .name = "Orc", // [1]
	    .hp = 70, .max_hp = 70, 
	    .atk = 14, .def = 6 
	},
    {   .name = "Thug", // [2]
	    .hp = 50, .max_hp = 50, 
	    .atk = 10, .def = 12
	}
}; // Mind the {} please!



int main(void){

    //  Let's see how to iterate through dungeons...
    int count = 3;
    for (int i = 0; i<count; i++){
        printf("%s|HP:%.2lf/%d|ATK:%d|DEF:%d\n",
        dungeon[i].name,
        dungeon[i].hp,
        dungeon[i].max_hp,
        dungeon[i].atk,
        dungeon[i].def);
    }

    // Works like indexing through an array except the items are structs!


}
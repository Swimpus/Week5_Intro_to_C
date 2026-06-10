#include <stdio.h>

typedef struct 
    {
        char name[15];
        double price;
        char description[20];
    } Dish;


void display_dish(Dish d);

void price_changer(Dish d);

int main(void){

    // Let's create a new structure.
    // Maybe for dishes!!


    Dish dish1 = {.name = "Lasagna",.price = 14.99, .description = "Italian Dish"};

    Dish dish2 = {.name = "Enchiladas",.price = 12.99, .description = "Mexican Dish"};

    // What if we want to copy for whatever reason...

    Dish dish_copy = dish1; // dish_copy is a copy of dish1.
    // Kinda like doing x = y. x is now y.

    // Check it out:
    printf("Name: %s, Price: %.2lf, Description: \"%s\"\n",dish1.name,dish1.price,dish1.description);
    printf("Name: %s, Price: %.2lf, Description: \"%s\"\n",dish_copy.name,dish_copy.price,dish_copy.description);
    // They are the same!
    
    //-------------------------------------------------
    display_dish(dish1);
    display_dish(dish2);

    // Unchanged!
    price_changer(dish1);
    printf("Dish 1 Price in main: %lf\n",dish1.price);

    
}

// Pass by value into a function!
// The whole struct is copied!
// Expensive memory wise!
void display_dish(Dish d){
    printf("---------------------------------------------------------------------------\n");
    printf("Name: %s, Price: %.2lf, Description: \"%s\"\n",d.name,d.price,d.description);
}

// However there is another implication.
// Functions cannot modify the caller's struct!

void price_changer(Dish d){
    d.price /= 2;
    printf("Changed Price: %lf\n",d.price);
    // Simply a local change.
}
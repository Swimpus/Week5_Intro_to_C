

int main(void){
    // Enums solve the issue of magic numbers
    // Raw integers for categorical values are kinda useless.
    // Common Place for bugs.

    int enemy_type = 2;

    // What enemy really is it?
    // Enums give a human readable name to a number.


    // Enums: Named Integer Constants
    // Help code become more readable for the reader.

    enum EnemyType{ // C gives default values too! They are just integers behind the hood.
        ENEMY_SORA,  // 0
        ENEMY_VALENCINA, // 1
        ENEMY_RIEN, // 2
        ENEMY_LUCIO, // 3
    }; 
 
    enum ErrorStatus{ // You can override and manually give values type 
        ERROR_FATAL  = 999,
        ERROR_MINOR = 001,
    };

    // Once we have an enum defined such as StatusEffects...
    enum StatusEffect{
        STATUS_POISON, //0
        STATUS_WEAK, // 1
        STATUS_MANIC, // 2
        STATUS_DEPRESSED, // 3
    };

    // Here is how you declare a variable with it.

    // 1. Use the keywod enum when declaring the variable
//  |Variable type|   |Variable name|
    enum StatusEffect current_status;

    // Now we have a variable named current stauts and because it
    // is of the variable type enum Status effect it can hold
    // 0,1,2,3. 

    current_status = STATUS_WEAK;

    if (current_status == STATUS_WEAK){
        printf("YOU ARE WEAKENED!\n");
    }

    //-----ENUM AND TYPEDEF---------

    // Instead of having to type
    // enum StatusEffect every time we want to declare a variable of
    // the type enum StatusEffect we can do this.

    typedef enum StatusEffectPlus{
        STATUS_FATIGUE,
        STATUS_HOMESICK,
        STATUS_DROWSY
    } StatusType;

    // The nickname/alias comes after you put in all the statuses.
    // Now when you say StatusType you are actually refering to the enum.

    // So now for declaration...
    // variable + name
    StatusType actual_status;

    // Now StatusType behaves like a int or char.

    actual_status = STATUS_FATIGUE;

    if (actual_status == STATUS_FATIGUE){
        printf("Drowsyy....\n");
    }




}
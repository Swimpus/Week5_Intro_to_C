# include <stdio.h>
# include <string.h>


typedef struct{
    char name[30];
    char origin[25];
    char danger_lvl[15];
} Enemies;

Enemies discpline_floor[6] = {
    {.name = "Queen of Hatred", .origin = "Magical Girl", .danger_lvl = "WAW"},
    {.name = "Dream of Black Swan", .origin = "Folklore", .danger_lvl = "WAW" },
    {.name = "Silent Orchestra", .origin = "Musician", .danger_lvl = "ALEPH" },
    {.name = "Bloodbath", .origin = "...", .danger_lvl = "TETH" },
    {.name = "Today's Shy Look", .origin = "School", .danger_lvl = "TETH" },
    {.name = "Judgement Bird", .origin = "The Forest", .danger_lvl = "WAW" }
};

void find_by_danger(Enemies list[], int count, char *level);

Enemies *find_by_name(Enemies list[], int count, char *name);

int main(void){

    find_by_danger(discpline_floor, 6, "WAW");

    Enemies *target = find_by_name(discpline_floor,6, "Bloodbath");

    if (target != NULL){
        printf("Abnormality searched: %s\n", target->name);
        printf("Abnormality stats:\n");
        printf("Origin :%s | Danger LVL: %s", target->origin, target ->danger_lvl); 
    }


}

void find_by_danger(Enemies list[], int count, char *level){
    for (int i = 0 ; i < count ; i++){
        if (strcmp(list[i].danger_lvl,level)== 0){
            printf("%s is %s level!\n", list[i].name, level);
        }
    }
}

Enemies *find_by_name(Enemies list[], int count, char *name){
    for (int i = 0 ; i < count ; i++){
        if (strcmp(list[i].name,name)==0){
            return &list[i];
        }
    }
    return NULL;
}
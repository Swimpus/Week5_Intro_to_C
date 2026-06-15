# include <stdio.h>
# include <string.h>

/* Declaring a struct
   Let's make is about songs!
*/

typedef struct{
    char name[25]; 
    char artist[25];
    int rating;
} Songs;

Songs *find_song_by_artist(Songs playlist[], int count, const char *artist_name);

int main(void){

  Songs my_favorites[4] = {
  {.name = "Twillight",.artist = "Boa", .rating = 9},
  {.name = "Louise",.artist = "TV Girl", .rating = 8},
  {.name = "Step on me",.artist = "The Cardigans", .rating = 7},
  {.name = "Tian Tian",.artist = "Mili", .rating = 8},
  };

  // Let's say we want to find a specific song by using the artist or name. Then we want to return the index.
  Songs *target = find_song_by_artist(my_favorites, 4, "Boa");
  if (target != NULL){
    printf("Found %s\n", target->name);
    target->rating = 10; // Since target is a pointer pointing at the address of myfavorites[0]
                         // My favorites entry on boa's rating should have changed now too.
    printf("New rating for Twllight by Boa: %d\n", target->rating);
    printf("New rating for Twllight by Boa: %d\n", my_favorites[0].rating);
  }

  
}

Songs *find_song_by_artist(Songs playlist[], int count, const char *artist_name){
  for (int i = 0; i < count; i++){
    if (strcmp(playlist[i].artist, artist_name) == 0){ // String compare always done to compare strings properly. // == 0 if they are equal.
      return &playlist[i]; // Return the address of that playlist
    }
  }
  return NULL;
}



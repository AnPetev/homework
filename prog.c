#include <stdio.h>
#include <stdbool.h>

struct Sun
{
      bool light;
      bool dark;
};
struct Tree
{
      int vol;
};
struct Frog
{
      int breath;
      int movement;
};
struct Grass{
      int consuming;
};
bool light(Sun* sun) 
{
      printf("%s","There is light now." );
	return true;
}
bool dark(Sun* sun)
{
      printf("%s", "There is dark now." );
	return true;
}

// struct Tree
// {
//       int vol;
// };
void produce_air(Sun* sun){
      if(light(Sun* sun)){
            printf("%s","The air is producing");
      }
}


// struct Frog
// {
//       int breath;
//       int movement;
// };

void sleep(Sun* sun){
      if(dark(Sun* sun)){
            printf("%s","i am sleeping");
      }
}

// struct Grass{
//       int consuming;
// };
void eat(Frog* frog){
      printf("%s", "I am eating");
}
void consume(Frog* frog){
      frog.eat();
}


int main(){
      struct Sun s;
}
#include <iostream>
#include <queue>
using namespace std;

class Animals
{
public:
    queue<string> Dogs;
    queue<string> Cats;
};


Animals::~Animals()
{
}


void addAnimal(){
    string animalName;
    int catDog;
    cout << "Please enter the name of your animal:\n";
    cin >> animalName;
    cout << "Is it a dog or a cat? (Enter 1 for Dogs, 2 for Cats)\n";
    cin >> catDog;

    if (catDog == 1)
    {
        Dogs.push(animalName);
    } else if (catDog == 2)
    {    
        Cats.push.(animalName);
    }
}

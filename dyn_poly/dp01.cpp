#include<iostream>
using namespace std;

// this example demonstrate basic virtual functions 
// try removing virtual keyword and see the output

class Entity {
    public:
     virtual string GetName() { return "Entity"; }
};

class Player: public Entity {
    string name;
    public:
    Player(string name) {
        this->name=name;
    }

    string GetName() {
        return name;
    } 
};

int main() {
    Entity *e = new Entity();
    cout<<e->GetName()<<endl;

    Player *p = new Player("Sulav");
    cout<<p->GetName()<<endl;

    Entity *entity = p;
    cout<<entity->GetName();
    return 0;   
}
#include <iostream>
#include <map> //This is ordered_map
#include <string>
#include<list>
using namespace std;


int main(){
    map<string, list<string>> Pokedex;

    list<string>NarutoJutsus{"Rasenagan","Rasenshuriken","Shadow Clone Jutsu"};
    list<string>MinatoJutsus{"Rasenagan","Reaper Death Seal","Flying Thunder God Jutsu"};
    list<string>BorutoJutsus{"Vanishing Rasengan","Water Release Jutsu", "Uchiha Style Shurikenjutsu", "Thunderclap Arrow"};

    Pokedex.insert(pair<string,list<string>>("Naruto",NarutoJutsus));
    Pokedex.insert(pair<string,list<string>>("Minato",MinatoJutsus));
    Pokedex.insert(pair<string,list<string>>("Boruto",BorutoJutsus));

    for(auto pair:Pokedex){
        cout<<pair.first<<" - ";

        for(auto Jutsus :pair.second){
            cout<<Jutsus<<", ";

        }cout<<endl;
    }
}
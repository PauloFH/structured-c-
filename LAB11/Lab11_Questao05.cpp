//Paulo Roberto Fernandes Holanda
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

int main(){
    system("chcp 1252 > nul");
    char name[40] = {}, firstname[20] = {}, secondname[20] = {};
    int sizename,control;
    cout << "Digite seu nome e sobrenome: ";
    cin.getline(name, 40);
    control = 0;
    sizename = strlen(name);
    while (name[control] && !isspace(name[control])){
        control++;
    }

    strncat(firstname, name, control);
    strncat(secondname, name + control + 1, (sizename - control));
    cout << "Bom dia senhor, " << secondname << ". Ou devo chamá-lo de " << firstname << "?";
}

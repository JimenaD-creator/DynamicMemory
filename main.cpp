#include <iostream>
using namespace std;

int main(){
    int capacity = 5;
    int *number = new int[5]; //Crear estructura con memoria fija
    int entries = 0;

    while(true){
        cout << "Numbers: ";
        cin >> number[entries];

        if(cin.fail()) break; //Si el usuario ingresa un tipo de dato no numérico
        entries ++;

        if(entries == capacity){
            //Crear una variable temporal para incrementar la memoria asignada
            capacity *= 2;
            int *temp = new int[capacity];
            
            for(int i = 0; i < entries; i++){
                temp[i]= number[i];

            }
            delete[] number;
            // Copiar los elementos de temp al arreglo de number
            number = temp;

        }

        if(entries > capacity){
            cout << "Warning: Exceeded capacity!" << endl;
        }

    }
    for(int i = 0; i < entries; i++){
            cout << number[i] << ",";

    }
}
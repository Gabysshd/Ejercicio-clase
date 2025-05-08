#include <iostream>

using namespace std;

int main (){
//Declarar variables 

int calificacion;
char letra;

// Decir al usuario que ingrese la calificacion

cout << " Ingrese una calificacion entre (0-100): ";
cin >> calificacion;

if (calificacion >=90);
letra = 'A';

else if (calificacion <=90 && >=85);
letra = 'B';

else if (calificacion <= 85 && >= 80);
letra = 'C';

else if (calificacion <= 80 && >= 70);
letra = 'D';

else if (calificacion <= 70 && >= 69);
letra 'E';

else if (calificacion <= 69 && >= 10);
letra 'F';

switch (letra) {
    case 'A':
    cout << "Excelente, tu calificacion es A. ";
    break;

    case 'B':
    cout << "Muy bien, tu calificacion es B. ";
    break;

    case 'C':
    cout << "Bien, tu calificacion es C. ";
    break;

    case 'D':
    cout << "Muy mal, tu calificacion es D. ";
    break;

    case 'E':
    cout << "Mal, tu calificacion es E. ";
    break;

    case 'F':
    cout << "Reprobado, tu calificacion es F. ";
    break;

    default: 
    cout << "No se encuentra registrada tu nota. ";

    return 0;















}


}
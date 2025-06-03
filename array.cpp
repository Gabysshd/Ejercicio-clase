#include <iostream> 
using namespace std;


float suma (float Numerouno, float Numerodos){
    float resultado =0;
    resultado = Numerouno + Numerodos;
    return resultado;


}

float resta (float numero1, float numero2){
    float resultado =0;
    resultado = numero1 - numero2;
    return resultado;
}

float multiplicacion (float numero1, float numero2){
    float resultado =0;
    resultado = numero1 * numero2;
    return resultado; 
}

float division (float numero1, float numero2){
    float resultado =0;
    resultado = numero1 / numero2;
    return resultado; 
}

int main (){
    float numero1,numero2,sumatoria=0, numero3 =7, numero4 =56, sumatoria2, resultadoResta=0, resultadoMulti =0, resultadoDivi =0;


cout << "Operaciones" <<endl;
cout << "Ingrese el primer numero" <<endl;
cin >> numero1;

cout << "Ingrese el segundo numero" <<endl;
cin >> numero2;

sumatoria = suma (numero1, numero2);

sumatoria2 = suma  (numero3, numero4);

resultadoResta = resta (numero1, numero2);

resultadoMulti = multiplicacion (numero1, numero2);

resultadoDivi = division (numero1, numero2); 

cout << "El resultado de la suma es: "<<sumatoria<<endl;

cout << "El resultado de la segunda suma es:"<<sumatoria2<<endl;

cout << "El resultado de la resta es:" <<resultadoResta<<endl;

cout << "El resultado de la multiplicacion es:" <<resultadoMulti<<endl;

cout << "El resultado de la division es:" <<resultadoDivi<<endl;

 



    return 0;
}
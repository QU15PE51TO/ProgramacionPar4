#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Ingrese la cantidad de calificaciones: ";
    cin >> N;
    int calificaciones[N];
    double desviacion[N];
    int suma = 0;
    double promedio;
    double sumaCuadrados = 0;
    double varianza;
    // Introducir las calificaciones
    cout << "\nIngrese las calificaciones:" << endl;
    for(int i = 0; i < N; i++)
    {
        cout << "Calificacion " << i + 1 << ": ";
        cin >> calificaciones[i];
        suma = suma + calificaciones[i];
    }
    // Calcular promedio
    promedio = (double)suma / N;
    // Calcular las desviaciones
    for(int i = 0; i < N; i++)
    {
        desviacion[i] = calificaciones[i] - promedio;
        sumaCuadrados = sumaCuadrados + desviacion[i] * desviacion[i];
    }
    // Calcular varianza
    varianza = sumaCuadrados / N;
    // Mostrar resultados
    cout << "\nSuma total: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "\nCalificacion\tDesviacion" << endl;
    for(int i = 0; i < N; i++)
    {
        cout << calificaciones[i] << "\t\t"
             << desviacion[i] << endl;
    }
    cout << "\nVarianza: " << varianza << endl;
    return 0;
}
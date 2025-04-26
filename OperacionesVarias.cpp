/* Desarrollar en C++ los siguientes programas:

1.	Resolver y realizar en C++:

a.	Realizar un programa que pida la fecha de nacimiento y nos de la edad.
b.	Realizar un programa que pida 3 datos y nos devuelva el promedio.
c.	Realizar un programa que pida 4 datos y devuelva el producto de ambos.
d.	Escribe un programa en C++ que nos diga cuál es el volumen de un cono con un radio de la base de 14,5 y una altura de 26,79. 
    La fórmula que debes usar es: (PI * Radio al cuadrado * altura)/3. Recuerda que el valor (aproximado) de ԉ es 3,141592.
e.	Modifica el programa anterior para que use tres variables, todas de tipo double: radio, altura y volumen. Las dos primeras 
    se inicializarán a 14,5 y 26,79 respectivamente. La tercera obtendrá el resultado de la fórmula.
f.	Escribe un programa en C++ que lea del teclado un número (real) de grados Fahrenheit y lo convierta a Celsius mostrando el 
    resultado en la pantalla. Fórmula: ºC = 5 / 9 x (ºF ‐ 32).
g.	Escribe un programa que lea del teclado un tiempo transcurrido en segundos y muestre en la pantalla las horas, los minutos y 
    los segundos equivalentes. */

#include <iostream>

using namespace std;

void calcularEdad();
void calcularPromedio();
void calcularProducto();
void volumenConoFijo();
void volumenConoVariables();
void convertirFahrenheitACelsius();
void convertirSegundos();
void mostrarMenu();

int main() 
    {
        int opcion = -1;
        
        while (opcion != 0) 
            {
                mostrarMenu();
                cin >> opcion;
                
                if (opcion == 1) 
                    {
                        calcularEdad();
                    } 
                    else if (opcion == 2) 
                        {
                            calcularPromedio();
                        }
                        else if (opcion == 3) 
                            {
                                calcularProducto();
                            }
                            else if (opcion == 4) 
                                {
                                    volumenConoFijo();
                                }
                                else if (opcion == 5) 
                                    {
                                        volumenConoVariables();
                                    }
                                    else if (opcion == 6) 
                                        {
                                            convertirFahrenheitACelsius();
                                        }
                                        else if (opcion == 7) 
                                            {
                                                convertirSegundos();
                                            }
                                            else if (opcion == 0) 
                                                {
                                                    cout << "Saliendo del programa..." << endl;
                                                }
                                                else 
                                                    {
                                                        cout << "Opcion no valida. Intenta nuevamente" << endl;
                                                    }
                    
                if (opcion != 0) 
                    {
                        cout << "\nPresiona Enter para continuar...";
                        cin.ignore();
                        cin.get();
                    }
            }
        
        return 0;
    }

void mostrarMenu() 
    {
        system("cls");
        cout << "\nMENU DE OPCIONES DE OPERACIONES VARIAS" << endl;
        cout << "---------------------------------------\n" << endl;
        cout << "1. Calcular edad (ingresando anio actual)" << endl;
        cout << "2. Calcular promedio de 3 numeros" << endl;
        cout << "3. Calcular producto de 4 numeros" << endl;
        cout << "4. Calcular volumen de cono (valores fijos)" << endl;
        cout << "5. Calcular volumen de cono (con variables)" << endl;
        cout << "6. Convertir Fahrenheit a Celsius" << endl;
        cout << "7. Convertir segundos a horas, minutos y segundos" << endl;
        cout << "0. Salir\n" << endl;
        cout << "Seleccione una opcion: ";
    }

void calcularEdad() 
    {
        int diaNac, mesNac, anioNac;
        int diaActual, mesActual, anioActual;
        
        cout << "\nDATOS DE NACIMIENTO:" << endl;
        cout << "Ingresa el dia de nacimiento (dd): ";
        cin >> diaNac;
        cout << "Ingresa el mes de nacimiento (mm): ";
        cin >> mesNac;
        cout << "Ingresa el anio de nacimiento (aaaa): ";
        cin >> anioNac;
        
        cout << "\nDATOS ACTUALES:" << endl;
        cout << "Ingresa el dia actual (dd): ";
        cin >> diaActual;
        cout << "Ingresa el mes actual (mm): ";
        cin >> mesActual;
        cout << "Ingresa el anio actual (aaaa): ";
        cin >> anioActual;

        int edad = anioActual - anioNac;

        if (mesActual < mesNac || (mesActual == mesNac && diaActual < diaNac)) 
            {
                edad--;
            }

        cout << "\nTu edad es: " << edad << " anios." << endl;
    }

void calcularPromedio() 
    {
        double num1, num2, num3;
        cout << "\nIngresa el primer numero: ";
        cin >> num1;
        cout << "\nIngresa el segundo numero: ";
        cin >> num2;
        cout << "\nIngresa el tercer numero: ";
        cin >> num3;

        double promedio = (num1 + num2 + num3) / 3;
        cout << "El promedio es: " << promedio << endl;
    }

void calcularProducto() 
    {
        double num1, num2, num3, num4;
        cout << "\nIngresa el primer numero: ";
        cin >> num1;
        cout << "\nIngresa el segundo numero: ";
        cin >> num2;
        cout << "\nIngresa el tercer numero: ";
        cin >> num3;
        cout << "\nIngresa el cuarto numero: ";
        cin >> num4;

        double producto = num1 * num2 * num3 * num4;
        cout << "\nEl producto es: " << producto << endl;
    }

void volumenConoFijo() 
    {
        const double PI = 3.141592;
        double radio = 14.5;
        double altura = 26.79;
        double volumen = (PI * radio * radio * altura) / 3;

        cout << "\nEl volumen del cono con radio " << radio << " y altura " << altura << " es: " << volumen << endl;
    }

void volumenConoVariables() 
    {
        const double PI = 3.141592;
        double radio = 14.5;
        double altura = 26.79;
        double volumen = (PI * radio * radio * altura) / 3;

        cout << "\nEl volumen del cono con:\n" << endl;
        cout << "Radio: " << radio << endl;
        cout << "Altura: " << altura << endl;
        cout << "Volumen: " << volumen << endl;
    }

void convertirFahrenheitACelsius() 
    {
        double fahrenheit;
        cout << "\nIngresa la temperatura en grados Fahrenheit: \n";
        cin >> fahrenheit;

        double celsius = 5.0 / 9.0 * (fahrenheit - 32);
        cout << fahrenheit << "F equivalen a " << celsius << "C" << endl;
    }

void convertirSegundos() 
    {
        int segundosTotales;
        cout << "\nIngresa el tiempo en segundos: ";
        cin >> segundosTotales;

        int horas = segundosTotales / 3600;
        int segundosRestantes = segundosTotales % 3600;
        int minutos = segundosRestantes / 60;
        int segundos = segundosRestantes % 60;

        cout << segundosTotales << " segundos equivalen a: " << endl;
        cout << horas << " horas, " << minutos << " minutos y " << segundos << " segundos." << endl;
    }
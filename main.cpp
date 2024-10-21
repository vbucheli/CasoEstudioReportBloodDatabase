/*
    Proyecto: Report-BloodDatabase (Adaptado)
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle

    Este es un proyecto del curso FPOO de la Universidad del Valle, 
    desarrollado con fines académicos. Puede ser utilizado con fines 
    académicos dando los créditos de la autoría.

Los requerimientos resueltos en este proyecto son

A partir del estudio de caso sobre el Sistema de Gestión de Donantes de Sangre de la Cruz Roja, se solicita crear un módulo de reportes, estadísticas e indicadores. El problema es adaptado y modificado de [1] y se solicita que el dicho módulo sea accesible desde el menú principal. En el sistema se conoce la siguiente información de las personas: el tipo de sangre, procedencia y edad.

El tipo de sangre y la procedencia se manejan de acuerdo a las siguientes convenciones:
Tipo de sangre: A+, A-, B+, B-, AB+, AB-, O+, O-
Procedencia:
    Putumayo
    Cauca
    Valle del Cauca
    Amazonas
    Risaralda
    Antioquia
    Norte de Santander
    Chocó
    Arauca
    Guainía
El reporte debe contener:
1. Determinar el total de personas en el sistema.
2. Determinar el número de chocoanos con tipo de sangre A+, araucanos con tipo de sangre O- y caucanos con tipo de sangre A+.
3. Determinar la edad promedio de los individuos de Choco, Arauca y Valle del Cauca.
4. Determinar la cantidad de vallecaucanos con tipo de sangre B+ y mayores de edad.


    Autor: Victor Bucheli
    Correo: victor.bucheli@correounivalle.edu.co
    Fecha: Octubre 2024
*/

#include "BloodDatabase.h"
#include "Donor.h"
#include "Reports.h"
#include <iostream>
#include <limits>
#include <string>
#include <vector>
using namespace std;

int main() {
    std::string donorName;
    BloodDatabase database;
    Reports reporte;
    int d=3;
    int a=43;
    int b=3;
    int choice;

    while (true) {
        BloodDatabase::clearConsole();

        std::cout <<
             " ░█████╗░██████╗░██╗░░░██╗███████╗  ██████╗░░█████╗░░░░░░██╗░█████╗░\n"
             " ██╔══██╗██╔══██╗██║░░░██║╚════██║  ██╔══██╗██╔══██╗░░░░░██║██╔══██╗\n"
             " ██║░░╚═╝██████╔╝██║░░░██║░░███╔═╝  ██████╔╝██║░░██║░░░░░██║███████║\n"
             " ██║░░██╗██╔══██╗██║░░░██║██╔══╝░░  ██╔══██╗██║░░██║██╗░░██║██╔══██║\n"
             " ╚█████╔╝██║░░██║╚██████╔╝███████╗  ██║░░██║╚█████╔╝╚█████╔╝██║░░██║\n"
             " ░╚════╝░╚═╝░░╚═╝░╚═════╝░╚══════╝  ╚═╝░░╚═╝░╚════╝░░╚════╝░╚═╝░░╚═╝\n";

        std::cout << "1. Registrar donante\n";
        std::cout << "2. Buscar donante\n";
        std::cout << "3. Eliminar donante\n";
        std::cout << "4. Reportes\n";
        std::cout << "5. Salir\n";
        std::cout << "Ingrese su elección: ";
        std::cin >> choice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // descartar cualquier entrada extra

        switch (choice) {
        case 1:
            database.getDonorDetails();
            database.writeDataToFile();
            break;
        case 2:
            database.searchAndDisplay();
            break;
        case 3:
            std::cout << "Ingrese el nombre del donante a eliminar: ";
            std::getline(std::cin, donorName);
            database.deleteDonor(donorName);
            BloodDatabase::waitForKeyPress();
            break;
        case 4:
            std::cout << "Reporteador "<<endl<<endl;
            reporte.loadDataBase(database.getDonors());
             std::cout << "El total de registros es: "<<reporte.donorTotal()<<endl<<endl;
             std::cout << "El total de registros del Valle del Cauca, 43 años y B+ es: "<<reporte.donorTotal(d,a,b)<<endl<<endl;
            d=8;std::cout << "El total de registros de Chocoanos B+ es: "<<reporte.donorTotal(d,b)<<endl<<endl;
            d=9;b=8;std::cout << "El total de registros de Aracaunos O+ es: "<<reporte.donorTotal(d,b)<<endl<<endl;
            d=3;b=1;std::cout << "El total de registros de Valle Caucanos A+ es: "<<reporte.donorTotal(d,b)<<endl<<endl;
            double auxedad;d=8;auxedad=reporte.donorMeanAge(d);
            d=9;auxedad=(auxedad+reporte.donorMeanAge(d))/2;
            d=3;auxedad=(auxedad+reporte.donorMeanAge(d))/2;
             std::cout << "El promedio de edad los individuos de Choco, Arauca y Valle de Cauca: "<<auxedad<<endl<<endl;
            d=3;b=3;
             std::cout << "El total de registros mayores de edad vallecaucanos B+: "<<reporte.donorAdult(d,b)<<endl<<endl;
            break;
        case 5:
            std::cout << "Gracias por usar el Sistema de la Cruz Roja" << std::endl;
            return 0;
        default:
            std::cout << "Opción no válida. Inténtalo de nuevo.\n";
            BloodDatabase::waitForKeyPress();
            break;
        }
    }
}

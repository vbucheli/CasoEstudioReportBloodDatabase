/*
    Clase: Reports
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle

    Información CRC:

    Clase: Reports

    Responsabilidades:
        - Cargar una base de datos de donantes de sangre desde un vector de objetos de tipo `Donor` a un                 vector auxiliar para hacer reportes con la informacón de los donantes tal como tipo de sangre,                edad, distrito de residencia y otros datos relevantes.
        - Calcular el total de donantes según diferentes criterios (distrito, edad, tipo de sangre).
        - Calcular la edad promedio de los donantes en un distrito específico.
        - Calcular el número de donantes adultos por distrito y tipo de sangre.

    Colaboradores:
        - Colabora con la clase BloodDatabase, que gestiona una colección 
          de objetos Donor para administrar la base de datos de donantes 
          de sangre.

    Este es un proyecto del curso FPOO de la Universidad del Valle, 
    desarrollado con fines académicos. Puede ser utilizado con fines 
    académicos dando los créditos de la autoría.

    El código se basó en el proyecto BloodDatabase, fue traducido al español 
    y adaptado a las necesidades del curso.

    Autor: Victor Bucheli
    Correo: victor.bucheli@correounivalle.edu.co
    Fecha: Octubre 2024
*/
#ifndef REPORTS_H
#define REPORTS_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Donor.h"

class Reports {
public:
Reports();
void loadDataBase(const std::vector<Donor>& adonor);
int donorTotal() const;        
int donorTotal(const int& district, const int& age, const int& bloodType) const;
int donorTotal(const int& district, const int& bloodType) const;  
double donorMeanAge(const int& district) const;
int donorAdult(const int& district, const int& bloodType) const;


private:
    std::string date;
    std::vector<Donor> auxDonor;
};

#endif // DONOR_H

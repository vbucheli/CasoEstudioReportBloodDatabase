/*
    Proyecto: Report-BloodDatabase (Adaptado)
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle

    Descripción:
    Este proyecto gestiona una base de datos de donantes de sangre, proporcionando 
    funcionalidades para registrar, buscar y analizar la información de los donantes.

    Este proyecto genera reportes de una base de datos de donantes de sangre, proporcionando 
    informacion sobre las ubicaciones de los dontantes, el tipo de sangre y la edad.

    El código se basó en el proyecto BloodDatabase, fue traducido al español 
    y adaptado a las necesidades del curso.



    Autor: Victor Bucheli
    Correo: victor.bucheli@correounivalle.edu.co
    Fecha: Octubre 2024
*/
#include "Reports.h"
#include <algorithm>
#include <cctype>
#include <fstream>
#include <iostream>
#include <limits>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>

using namespace std;

Reports::Reports() { auxDonor.empty(); }
void Reports::loadDataBase(const std::vector<Donor> &auxdonor) {
  this->auxDonor = auxdonor;
}
int Reports::donorTotal() const { return auxDonor.size(); }

int Reports::donorTotal(const int &district, const int &age,
                        const int &bloodType) const {
  int total = 0;
  for (const auto &d : auxDonor) {

    if (d.district == district && d.age == age && d.bloodType == bloodType)
      total++;
  }
  return total;
}

int Reports::donorTotal(const int &district, const int &bloodType) const {
  int total = 0;
  for (const auto &d : auxDonor) {

    if (d.district == district && d.bloodType == bloodType)
      total++;
  }
  return total;
}
double Reports::donorMeanAge(const int &district) const {
  int total = 0, ages = 0;

  for (const auto &d : auxDonor) {
    if (d.district == district){
      ages = ages + d.age;
      total++;
  }
}
return (ages / total);
}

int Reports::donorAdult(const int &district, const int &bloodType) const {
  int total = 0;

  for (const auto &d : auxDonor) {

    if (d.district == district && d.age >= 18 && d.bloodType == bloodType)
      total++;
  }
  return total;
}

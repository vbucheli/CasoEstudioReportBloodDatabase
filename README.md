# Report-BloodDatabase

Este proyecto es una adaptación del sistema de gestión de donantes de sangre de la Cruz Roja, desarrollado como parte del curso **Fundamentos de Programación Orientada a Objetos (FPOO)** en la **Universidad del Valle**.

## Descripción del Proyecto

El objetivo de este proyecto es implementar un módulo de reportes, estadísticas e indicadores basado en la información de donantes de sangre. Los datos manejados incluyen el tipo de sangre, la procedencia y la edad de las personas. Este proyecto tiene fines académicos y puede ser utilizado en el ámbito educativo, siempre y cuando se respeten los créditos de la autoría.

Este sistema fue adaptado y modificado de fuentes externas [1], y el módulo de reportes es accesible desde el menú principal del sistema.

## Funcionalidades del Módulo de Reportes

El módulo de reportes permite realizar las siguientes consultas y estadísticas:

1. **Total de personas en el sistema**: El reporte muestra cuántos donantes se encuentran registrados.
2. **Número de personas por tipo de sangre y procedencia**:
    - Número de donantes de Chocó con tipo de sangre A+.
    - Número de donantes de Arauca con tipo de sangre O-.
    - Número de donantes de Cauca con tipo de sangre A+.
3. **Edad promedio de los donantes**: Se calcula la edad promedio de los donantes provenientes de Chocó, Arauca y Valle del Cauca.
4. **Cantidad de adultos con sangre B+ en el Valle del Cauca**: Se determina cuántos donantes del Valle del Cauca son mayores de edad y tienen tipo de sangre B+.

## Información de Donantes

En el sistema, los donantes están clasificados según la siguiente información:

- **Tipo de sangre**: A+, A-, B+, B-, AB+, AB-, O+, O-
- **Procedencia**: 
    - Putumayo
    - Cauca
    - Valle del Cauca
    - Amazonas
    - Risaralda
    - Antioquia
    - Norte de Santander
    - Chocó
    - Arauca
    - Guainía

## Requerimientos del Proyecto

El proyecto resuelve los siguientes requerimientos relacionados con la gestión y reporte de donantes:
- Implementación de consultas para generar estadísticas personalizadas basadas en el tipo de sangre, procedencia y edad de los donantes.
- Desarrollo de un módulo que permita realizar estas consultas de manera eficiente y accesible desde el menú principal.

## Instalación

1. Clona este repositorio: 
   ```bash
   git clone https://github.com/tu_usuario/Report-BloodDatabase.git
2. Compila el proyecto utilizando CMake:
  ```bash
  mkdir build
  cd build
  cmake ..
  make

3. Ejecuta el programa desde el directorio de compilación.

## Uso
Accede al módulo de reportes desde el menú principal del sistema. Desde ahí, podrás realizar las consultas descritas anteriormente y obtener las estadísticas solicitadas.

## Créditos
Este es un proyecto desarrollado por Victor Bucheli para el curso FPOO en la Universidad del Valle. El código fue traducido y adaptado a las necesidades del curso basándose en el proyecto original BloodDatabase.

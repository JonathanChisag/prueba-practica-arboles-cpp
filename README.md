[README_COMPLETO.md](https://github.com/user-attachments/files/27803853/README_COMPLETO.md)
# Sistema Académico con Árbol Binario de Búsqueda en c++

Proyecto desarrollado para la asignatura de **Estructura de Datos** utilizando **Árboles Binarios de Búsqueda (ABB)** en c++.

---

# Información General

- **Universidad:** Universidad Técnica de Ambato
- **Asignatura:** Estructura de Datos
- **Tema:** Árboles Binarios de Búsqueda
- **Lenguaje:** Java
- **Nombre:** Chisag Punina Alex Jonathan
- **Modalidad:** Individual

---
# Objetivo del Proyecto

Desarrollar un sistema académico en C++ capaz de gestionar estudiantes mediante la implementación de un Árbol Binario de Búsqueda (ABB), aplicando conceptos fundamentales de estructuras de datos y programación.

Durante el desarrollo del proyecto se utilizaron:

- Programación Orientada a Objetos (POO)
- Recursividad
- Recorridos de árboles binarios
- BFS utilizando colas (Queue)
- Inserción, búsqueda y eliminación de nodos
- Manejo dinámico de memoria
- Código modular y estructurado

---
---

# Estructuras Aplicadas

## Árbol Binario de Búsqueda (ABB)

Se implementó un Árbol Binario de Búsqueda (ABB) en C++ para gestionar estudiantes de manera eficiente.

Esta estructura permite:

- Insertar estudiantes dinámicamente
- Buscar estudiantes por cédula rápidamente
- Mantener los registros ordenados automáticamente
- Eliminar nodos conservando la estructura del árbol
- Recorrer los datos mediante Inorden, Preorden, Postorden y BFS
- Optimizar operaciones de búsqueda e inserción

---

# Funciones Implementadas

| Función | Descripción |
|---|---|
| insertarEstudiante() | Inserta un nuevo estudiante |
| buscarEstudiante() | Busca por número de cédula |
| eliminarEstudiante() | Elimina un estudiante |
| recorridoInorden() | Recorre el árbol en Inorden |
| recorridoPreorden() | Recorre el árbol en Preorden |
| recorridoPostorden() | Recorre el árbol en Postorden |
| recorridoPorNiveles() | Recorrido BFS |
| contarNodos() | Cuenta estudiantes registrados |
| calcularAltura() | Obtiene la altura del árbol |
| buscarNotaMayor() | Muestra mayor nota |
| buscarNotaMenor() | Muestra menor nota |
| mostrarAprobados() | Muestra aprobados |
| mostrarReprobados() | Muestra reprobados |

---

# Clases del Proyecto

## NodoAcademico.h / NodoAcademico.cpp

Representa cada estudiante dentro del árbol binario.

### Atributos:

- Cédula
- Apellidos
- Nombres
- Nota final
- Carrera
- Nivel
- Nodo izquierdo
- Nodo derecho

---

## RegistroUniversitarioABB.h / RegistroUniversitarioABB.cpp

Contiene toda la lógica del Árbol Binario de Búsqueda:

- Inserciones
- Búsquedas
- Eliminaciones
- Recorridos
- BFS
- Altura del árbol
- Conteo de nodos
- Filtros de aprobados y reprobados

---

## PrincipalSistemaUTA.cpp

Archivo principal encargado de:

- Mostrar el menú interactivo
- Capturar datos
- Ejecutar las funciones del sistema
- Controlar el flujo principal del programa

---

# Recorridos del Árbol

## Inorden

Muestra estudiantes ordenados por cédula.

## Preorden

Primero procesa la raíz y luego los subárboles.

## Postorden

Primero procesa hijos y luego la raíz.

## BFS

Recorre el árbol por niveles utilizando una cola.

---

# Menú del Sistema

```text
1. Insertar estudiante
2. Buscar estudiante por cédula
3. Eliminar estudiante
4. Recorrido Inorden
5. Recorrido Preorden
6. Recorrido Postorden
7. Recorrido por niveles BFS
8. Contar estudiantes
9. Calcular altura del árbol
10. Mostrar estudiante con mayor nota
11. Mostrar estudiante con menor nota
12. Mostrar estudiantes aprobados
13. Mostrar estudiantes reprobados
14. Salir
```

---

# Evidencias del Sistema

## Menú Principal
![Menu](https://github.com/JonathanChisag/prueba-practica-arboles-cpp/blob/75529a7ba695848dc3305479d6b616133d038e5d/capturas%20de%20pnatlla%20prueba/Captura%20de%20pantalla%202026-05-15%20084240.png)

---

## Insertar Estudiante

![Insertar](https://github.com/JonathanChisag/prueba-practica-arboles-cpp/blob/4e791a67dca01ed16dabfe3aed04c3283d3ace3d/capturas%20de%20pnatlla%20prueba/Captura%20de%20pantalla%202026-05-15%20084240.png)
---
## Buscar Estudiante

![Buscar](https://github.com/JonathanChisag/prueba-practica-arboles-cpp/raw/66bc3672ab52f009f15d56f3d418ffa3c7bb5424/capturas%20de%20pnatlla%20prueba/Captura%20de%20pantalla%202026-05-15%20084318.png)

---

## Eliminar Estudiante

![Eliminar](https://github.com/JonathanChisag/prueba-practica-arboles-cpp/raw/66bc3672ab52f009f15d56f3d418ffa3c7bb5424/capturas%20de%20pnatlla%20prueba/Captura%20de%20pantalla%202026-05-15%20084359.png)

---

## Recorrido Inorden

![Inorden](https://github.com/JonathanChisag/prueba-practica-arboles-cpp/raw/66bc3672ab52f009f15d56f3d418ffa3c7bb5424/capturas%20de%20pnatlla%20prueba/Captura%20de%20pantalla%202026-05-15%20084416.png)

---

## Recorrido Preorden

![Preorden](https://github.com/JonathanChisag/prueba-practica-arboles-cpp/raw/66bc3672ab52f009f15d56f3d418ffa3c7bb5424/capturas%20de%20pnatlla%20prueba/Captura%20de%20pantalla%202026-05-15%20084433.png)

---

## Recorrido Postorden

![Postorden](https://github.com/JonathanChisag/prueba-practica-arboles-cpp/raw/66bc3672ab52f009f15d56f3d418ffa3c7bb5424/capturas%20de%20pnatlla%20prueba/Captura%20de%20pantalla%202026-05-15%20084448.png)

---

## Recorrido BFS

![BFS](https://github.com/JonathanChisag/prueba-practica-arboles-cpp/raw/66bc3672ab52f009f15d56f3d418ffa3c7bb5424/capturas%20de%20pnatlla%20prueba/Captura%20de%20pantalla%202026-05-15%20084448.png)

---

## Contar Estudiantes

![Contar](https://github.com/JonathanChisag/prueba-practica-arboles-cpp/raw/66bc3672ab52f009f15d56f3d418ffa3c7bb5424/capturas%20de%20pnatlla%20prueba/Captura%20de%20pantalla%202026-05-15%20084506.png)

---

## Calcular Altura

![Altura](https://github.com/JonathanChisag/prueba-practica-arboles-cpp/raw/66bc3672ab52f009f15d56f3d418ffa3c7bb5424/capturas%20de%20pnatlla%20prueba/Captura%20de%20pantalla%202026-05-15%20084519.png)

---

## Mayor Nota

![MayorNota](https://github.com/JonathanChisag/prueba-practica-arboles-cpp/raw/66bc3672ab52f009f15d56f3d418ffa3c7bb5424/capturas%20de%20pnatlla%20prueba/Captura%20de%20pantalla%202026-05-15%20084532.png)

---

## Menor Nota

![MenorNota](https://github.com/JonathanChisag/prueba-practica-arboles-cpp/raw/66bc3672ab52f009f15d56f3d418ffa3c7bb5424/capturas%20de%20pnatlla%20prueba/Captura%20de%20pantalla%202026-05-15%20084543.png)

---

## Mostrar Aprobados

![Aprobados](https://github.com/JonathanChisag/prueba-practica-arboles-cpp/raw/66bc3672ab52f009f15d56f3d418ffa3c7bb5424/capturas%20de%20pnatlla%20prueba/Captura%20de%20pantalla%202026-05-15%20084558.png)

---

## Mostrar Reprobados

![Reprobados](https://github.com/JonathanChisag/prueba-practica-arboles-cpp/raw/66bc3672ab52f009f15d56f3d418ffa3c7bb5424/capturas%20de%20pnatlla%20prueba/Captura%20de%20pantalla%202026-05-15%20084613.png)

---

## Salida del Sistema

![Salir](https://github.com/JonathanChisag/prueba-practica-arboles-cpp/raw/66bc3672ab52f009f15d56f3d418ffa3c7bb5424/capturas%20de%20pnatlla%20prueba/Captura%20de%20pantalla%202026-05-15%20084624.png)

---

---

# Compilación y Ejecución

# Compilación y Ejecución

## Compilar

```bash
g++ *.cpp -o main.exe
---

# Tecnologías Utilizadas

- C++
- Programación Orientada a Objetos (POO)
- Árboles Binarios de Búsqueda (ABB)
- Recursividad
- Manejo dinámico de memoria
- Estructuras de Datos
- Cola (Queue)
- Visual Studio Code
- MinGW / G++
- GitHub
---

# Explicación Técnica

## ¿Por qué se utilizó un ABB?

Porque permite mantener los estudiantes ordenados automáticamente según la cédula y optimiza operaciones de búsqueda, inserción y eliminación.

## ¿Por qué BFS utiliza cola?

Porque BFS trabaja por niveles y la cola respeta el principio FIFO (First In First Out).

## ¿Cómo se calcula la altura?

Se usa recursividad para calcular la altura izquierda y derecha, retornando la mayor más uno.

## ¿Cómo funciona eliminar un nodo?

Existen tres casos:

1. Nodo sin hijos
2. Nodo con un hijo
3. Nodo con dos hijos utilizando sucesor Inorden

---

# Estructura del Proyecto

```text
prueba/
│
├── NodoAcademico.cpp
├── NodoAcademico.h
├── RegistroUniversitarioABB.cpp
├── RegistroUniversitarioABB.h
├── PrincipalSistemaUTA.cpp
├── README.md
└── capturas/
```


---

# ⭐ Resultado

Sistema académico funcional desarrollado en C++ utilizando Árboles Binarios de Búsqueda (ABB), con recorridos completos, BFS, cálculo de altura, búsqueda, inserción y eliminación de estudiantes, además de documentación y evidencias del sistema en GitHub.

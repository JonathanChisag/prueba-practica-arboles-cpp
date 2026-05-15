/**
 * ============================================================
 * ArbolBST.h
 * Aquí se declara la clase ArbolBST para manejar un árbol
 * binario de búsqueda de estudiantes ordenados por cédula.
 * Trabajo práctico para la materia de Estructura de Datos.
 * ============================================================
 */

#ifndef ARBOL_BST_H
#define ARBOL_BST_H

#include "Nodo.h"
#include <string>

/**
 * Clase ArbolBST: representa el árbol de estudiantes.
 * Se usa para insertar, buscar, eliminar y recorrer el árbol.
 *
 * Los métodos públicos son los que usa el menú del programa.
 * Los métodos privados son los que hacen el trabajo recursivo.
 */
class ArbolBST {
private:
    Nodo* raiz; // raíz del árbol, desde aquí arranca todo

    // --- Métodos privados recursivos ---
    bool insertar(Nodo*& nodo, Estudiante est);
    Nodo* buscar(Nodo* nodo, const string& cedula);
    Nodo* encontrarMinimo(Nodo* nodo);
    bool eliminar(Nodo*& nodo, const string& cedula);
    void inorden(Nodo* nodo);
    void preorden(Nodo* nodo);
    void postorden(Nodo* nodo);
    int contarNodos(Nodo* nodo);
    int calcularAltura(Nodo* nodo);
    void buscarNotaMayor(Nodo* nodo, Nodo*& mejor);
    void buscarNotaMenor(Nodo* nodo, Nodo*& peor);
    void mostrarAprobados(Nodo* nodo, int& conteo);
    void mostrarReprobados(Nodo* nodo, int& conteo);
    void destruir(Nodo* nodo);

public:
    // Constructor y destructor del árbol
    ArbolBST();
    ~ArbolBST();

    // Muestra por pantalla la información de un estudiante
    void mostrarEstudiante(const Estudiante& est);

    // --- Métodos que usa el menú del programa ---
    bool insertarEstudiante(Estudiante est);
    Nodo* buscarEstudiante(const string& cedula);
    bool eliminarEstudiante(const string& cedula);
    void recorridoInorden();
    void recorridoPreorden();
    void recorridoPostorden();
    void recorridoPorNiveles();
    int contarEstudiantes();
    int obtenerAltura();
    void mostrarNotaMayor();
    void mostrarNotaMenor();
    void listarAprobados();
    void listarReprobados();
};

#endif // ARBOL_BST_H

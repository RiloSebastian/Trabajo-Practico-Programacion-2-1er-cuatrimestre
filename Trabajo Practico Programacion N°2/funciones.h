#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED


typedef struct{

char nombre[50];
int edad;
int dni;
int estado;

}ePersona;


/** \brief inicializa todos los estados en 0
 * \param recibe una persona
 * \param recibe la cantidad de personas que se pueden ingresar
 */
void inicializar(ePersona *persona,int cant);

/** \brief busca un espacio libre para ingresar una nueva persona
 * \param recibe una persona
 * \param recibe la cantidad de personas que se pueden ingresar
 * \return devuelve la primera posicion libre que encuentre en orden ascendente
 */
int buscarLibre(ePersona *persona, int cant);

/** \brief ingresa una nueva persona
 * \param recibe una persona
 * \param recibe la cantidad de personas que se pueden ingresar
 * \return un valor tipo flag que indique si se pudo ingresar o no
 */
int altaPersona(ePersona *persona, int cant);

/** \brief libera uno de los espacios ocupados por una persona
 * \param recibe una persona
 * \param recibe la cantidad de personas que se pueden ingresar
 * \return
 */
int bajaPersona(ePersona *persona, int cant);

/** \brief muestra las personas ingresadas en orden alfabetico
 * \param recibe una persona
 * \param recibe la cantidad de personas que se pueden ingresar
 */
void mostrarListaPorNombre(ePersona *persona, int cant);

/** \brief muestra un grafico de las edades de las personas ingresadas
 * \param recibe una persona
 * \param recibe la cantidad de personas que se pueden ingresar
 */
void mostrarGrafico(ePersona *persona, int cant);

#endif

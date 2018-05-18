#ifndef VALIDACIONES_H_INCLUDED
#define VALIDACIONES_H_INCLUDED

/** \brief valida un nombre
 * \param recibe un string
 * \return devuelve un string validado
 */
char validarnombre(char );

/** \brief compara una variable con caracteres propios de un string para validar
 * \param recibe el string ingresado en "validarnombre"
 * \return una variable tipo flag para indicar si es o no un string
 */
int soloNombre(char *);

/** \brief  valida un numero
 * \param  recibe un numero
 * \return devuelve el numero validado
 */
int validarNumero(int );
#endif

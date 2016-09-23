#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}ePersona;

/** \brief Permite mostrar el menu de opciones.
 */
 int menu();

/** \brief Ordena personas segun criterio (en este caso orden alfabético)
 *
 * \param Array de personas
 * \param Tamaño del array
 */
 void ordenarPersonas (ePersona[], int);

/** \brief Inicializa los array de personas que esten cargados con basura previa
 *
 * \param Array de personas
 * \param Tamaño del array
 */
 void inicializarPersonas(ePersona[], int);

/** \brief Muestra una persona
 *
 * \param Persona a mostrar
 */
 void mostrarPersona (ePersona);

/** \brief Muestra un conjunto de personas
 *
 * \param Array de personas a mostrar
 * \param Tamaño del array
 */
 void mostrarPersonas (ePersona[], int);

/** \brief Obtiene el primer espacio libre en un array (estado=0)
 *
 * \param Array de personas
 * \param Tamaño del array
 * \return El primer espacio libre en el array con su respectivo indice
 */
 int obtenerEspacioLibre(ePersona[], int);

/** \brief Busca personas segun su DNI
 *
 * \param Array de personas
 * \param Tamaño del array
 * \param DNI
 * \return Si encuentra el DNI o no en las personas cargadas
 */
 int buscarPorDni(ePersona[], int, int);

/** \brief Da de alta una persona en sistema con una serie de datos que solicita
 *
 * \param Array de personas
 * \param Tamaño del array
 */
 void altaPersonas(ePersona[], int);

/** \brief Da de baja una persona en sistema solicitando el DNI (estado=2)
 *
 * \param Array de personas
 * \param Tamaño del array
 */
 void borrarPersona(ePersona[], int);

/** \brief Calcula un grafico de barras con la cantidad de personas ingresadas en sistema hasta el momento
 *
 * \param Array de personas
 * \param Tamaño del array
 */
void grafico(ePersona[], int);

#endif

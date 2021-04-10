// Fig. 7.17: LibroCalificaciones.cpp
// Definiciones de funciones miembro para la clase LibroCalificaciones
// que utiliza un arreglo para almacenar las calificaciones de una prueba.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;
using std::setw;

#include "LibroCalificaciones.h" // definici�n de la clase LibroCalificaciones
int main()
// el constructor inicializa nombreCurso y el arreglo calificaciones
LibroCalificaciones::LibroCalificaciones( string nombre, const int arregloCalificaciones[] )
{
	establecerNombreCurso( nombre ); // inicializa nombreCurso

// copia calificaciones de arregloCalificaciones al miembro de datos calificaciones
	for ( int calificacion = 0; calificacion < estudiantes; calificacion++ )
		calificaciones[ calificacion ] = arregloCalificaciones[ calificacion ];
} // fin del constructor de LibroCalificaciones

// funci�n para establecer el nombre del curso
void LibroCalificaciones::establecerNombreCurso( string nombre )
{
	nombreCurso = nombre; // almacena el nombre del curso
} // fin de la funci�n establecerNombreCurso

// funci�n para obtener el nombre del curso
string LibroCalificaciones::obtenerNombreCurso()
{
	return nombreCurso;
} // fin de la funci�n obtenerNombreCurso

// muestra un mensaje de bienvenida para el usuario de LibroCalificaciones
void LibroCalificaciones::mostrarMensaje()
{
// esta instrucci�n llama a obtenerNombreCurso para obtener el
// nombre del curso que representa este LibroCalificaciones
	cout << "Bienvenido al libro de calificaciones para\n" << obtenerNombreCurso() << "!"
		<< endl;
} // fin de la funci�n mostrarMensaje

// realiza varias operaciones con los datos
void LibroCalificaciones::procesarCalificaciones()
{
// imprime el arreglo calificaciones
	imprimirCalificaciones();

// llama a la funci�n obtenerPromedio para calcular la calificacion promedio
	cout << "\nEl promedio de la clase es " << setprecision( 2 ) << fixed <<
		obtenerPromedio() << endl;

// llama a las funciones obtenerMinimo y obtenerMaximo
	cout << "La calificacion mas baja es " << obtenerMinimo() << "\nLa calificacion mas alta es "
		<< obtenerMaximo() << endl;

// llama a la funci�n imprimirGraficoBarras para imprimir el gr�fico de distribuci�n de calificaciones
	imprimirGraficoBarras();
} // fin de la funci�n procesarCalificaciones

// busca la calificaci�n m�nima
int LibroCalificaciones::obtenerMinimo()
{
	int calificacionInf = 100; // asume que la calificaci�n m�s baja es 100

// itera a trav�s del arreglo calificaciones
	for ( int calificacion = 0; calificacion < estudiantes; calificacion++ )
	{
// si la calificaci�n actual es menor que calificacionInf, la asigna a calificacionInf
		if ( calificaciones[ calificacion ] < calificacionInf )
				calificacionInf = calificaciones[ calificacion ]; // nueva calificaci�n m�s baja
	} // fin de for

	return calificacionInf; // devuelve la calificaci�n m�s baja
} // fin de la funci�n obtenerMinimo

// busca la calificaci�n m�xima
int LibroCalificaciones::obtenerMaximo()
{
	int calificacionSup = 0; // asume que la calificaci�n m�s alta es 0

// itera a trav�s del arreglo calificaciones
	for ( int calificacion = 0; calificacion < estudiantes; calificacion++ )
	{
// si la calificaci�n actual es mayor que calificacionSup, la asigna a calificacionSup
		if ( calificaciones[ calificacion ] > calificacionSup )
			calificacionSup = calificaciones[ calificacion ]; // nueva calificaci�n m�s alta
	} // fin de for

	return calificacionSup; // devuelve la calificaci�n m�s alta
} // fin de la funci�n obtenerMaximo

// determina la calificaci�n promedio para la prueba
double LibroCalificaciones::obtenerPromedio()
{
	int total = 0; // inicializa el total

// suma las calificaciones en el arreglo
	for ( int calificacion = 0; calificacion < estudiantes; calificacion++ )
		total += calificaciones[ calificacion ];

	// devuelve el promedio de las calificaciones
	return static_cast< double >( total ) / estudiantes;
} // fin de la funci�n obtenerPromedio

// imprime gr�fico de barras que muestra la distribuci�n de las calificaciones
void LibroCalificaciones::imprimirGraficoBarras()
{
	cout << "\nDistribucion de calificaciones:" << endl;

// almacena la frecuencia de calificaciones en cada rango de 10 calificaciones
	const int tamanioFrecuencia = 11;
	int frequency[ tamanioFrecuencia ] = {}; // inicializa elementos con 0

// para cada calificaci�n, incrementa la frecuencia apropiada
	for ( int calificacion = 0; calificacion < estudiantes; calificacion++ )
		frequency[ calificaciones[ calificacion ] / 10 ]++;

// para cada frecuencia de calificaci�n, imprime barra en el gr�fico
	for ( int cuenta = 0; cuenta < tamanioFrecuencia; cuenta++ )
	{
// imprime etiquetas de las barras ("0-9:", ..., "90-99:", "100:" )
		if ( cuenta == 0 )
			cout << " 0-9: ";
		else if ( cuenta == 10 )
			cout << " 100: ";
		else
			cout << cuenta * 10 << "-" << ( cuenta * 10 ) + 9 << ": ";

// imprime barra de asteriscos
		for ( int estrellas = 0; estrellas < frequency[ cuenta ]; estrellas++ )
			cout << '*';

		cout << endl; // empieza una nueva l�nea de salida
	}	 // fin de for exterior
} // fin de la funci�n imprimirGraficoBarras

// imprime el contenido del arreglo calificaciones
void LibroCalificaciones::imprimirCalificaciones()
{
	cout << "\nLas calificaciones son:\n\n";

// imprime la calificaci�n de cada estudiante
	for ( int estudiante = 0; estudiante < estudiantes; estudiante++ )
		cout << "Estudiante " << setw( 2 ) << estudiante + 1 << ": " << setw( 3 )
			<< calificaciones[ estudiante ] << endl;
} // fin de la funci�n imprimirCalificaciones


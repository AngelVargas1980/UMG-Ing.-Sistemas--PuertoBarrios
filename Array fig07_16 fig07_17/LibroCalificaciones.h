// Fig. 7.16: LibroCalificaciones.h
// Definici�n de la clase LibroCalificaciones que utiliza un arreglo para almacenar
// calificaciones de una prueba. Las funciones miembro se definen en LibroCalificaciones.cpp

#include <string> // el programa usa la clase string de la Biblioteca est�ndar de C++
using std::string;
int main()
// definici�n de la clase LibroCalificaciones
class LibroCalificaciones
{
public:
// constante -- n�mero de estudiantes que tomaron la prueba
	const static int estudiantes = 10; // observe los datos p�blicos

// el constructor inicializa el nombre del curso y el arreglo de calificaciones
	LibroCalificaciones( string, const int [] );

	void establecerNombreCurso( string ); // funci�n para establecer el nombre del curso
	string obtenerNombreCurso(); // funci�n para obtener el nombre del curso
	void mostrarMensaje(); // muestra un mensaje de bienvenida
	void procesarCalificaciones(); // realiza varias operaciones con los datos de calificaciones
	int obtenerMinimo(); // buscar la calificaci�n m�nima para la prueba
	int obtenerMaximo(); // buscar la calificaci�n m�xima para la prueba
	double obtenerPromedio(); // determina la calificaci�n promedio para la prueba
	void imprimirGraficoBarras(); // imprime gr�fico de barras de la distribuci�n de alificaciones
	void imprimirCalificaciones(); // imprime el contenido del arreglo calificaciones
private:
	string nombreCurso; // nombre del curso para este libro de calificaciones
	int calificaciones[ estudiantes ]; // arreglo de calificaciones de estudiantes
}; // fin de la clase LibroCalificaciones


// Fig. 7.16: LibroCalificaciones.h
// Definición de la clase LibroCalificaciones que utiliza un arreglo para almacenar
// calificaciones de una prueba. Las funciones miembro se definen en LibroCalificaciones.cpp

#include <string> // el programa usa la clase string de la Biblioteca estándar de C++
using std::string;
int main()
// definición de la clase LibroCalificaciones
class LibroCalificaciones
{
public:
// constante -- número de estudiantes que tomaron la prueba
	const static int estudiantes = 10; // observe los datos públicos

// el constructor inicializa el nombre del curso y el arreglo de calificaciones
	LibroCalificaciones( string, const int [] );

	void establecerNombreCurso( string ); // función para establecer el nombre del curso
	string obtenerNombreCurso(); // función para obtener el nombre del curso
	void mostrarMensaje(); // muestra un mensaje de bienvenida
	void procesarCalificaciones(); // realiza varias operaciones con los datos de calificaciones
	int obtenerMinimo(); // buscar la calificación mínima para la prueba
	int obtenerMaximo(); // buscar la calificación máxima para la prueba
	double obtenerPromedio(); // determina la calificación promedio para la prueba
	void imprimirGraficoBarras(); // imprime gráfico de barras de la distribución de alificaciones
	void imprimirCalificaciones(); // imprime el contenido del arreglo calificaciones
private:
	string nombreCurso; // nombre del curso para este libro de calificaciones
	int calificaciones[ estudiantes ]; // arreglo de calificaciones de estudiantes
}; // fin de la clase LibroCalificaciones


Algoritmo ingresarNombreCompletoRepetir
	
	Escribir "------------------------------------";
	Escribir "Programador: Said Jesús Sánchez Vega";
	Escribir "Boleta: 2025121073";
	Escribir "Fecha: 22/10/2025";
	Escribir "------------------------------------";
	Escribir "";
	
	definir nombre Como Caracter;
	definir i Como Entero;
	
	escribir "Ingresa tu nombre completo";
	leer nombre;
	
	i <- 1;
	
	repetir 
		Escribir i, ".- ", nombre;
		i <- i + 1;
	Hasta Que i > 20
	
FinAlgoritmo

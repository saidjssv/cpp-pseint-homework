Algoritmo lector
	
	// La fecha es de cuando le puse la info
	
	Escribir "------------------------------------";
	Escribir "Programador: Said Jesús Sánchez Vega";
	Escribir "Boleta: 2025121073";
	Escribir "Fecha: 2/11/2025";
	Escribir "------------------------------------";
	Escribir "";
	
	Definir nombre, nacionalidad Como Caracter;
	
	Escribir "Quien es el autor de 100 años de soledad? (en minusculas por favor)";
	Leer nombre;
	
	Si nombre = "gabriel garcia marquez" Entonces
		Escribir "Muy bien!! ahora dinos su nacionalidad";
		Leer nacionalidad;
		Si nacionalidad = "colombiano" Y nombre = "gabriel garcia marquez" Entonces
			Escribir "Wao, eres muy listo";
		FinSi
	SiNo  
		Escribir "Es colombiano. no es muy dificil adivinar.";
		Leer nombre;
		Si nombre = "gabriel garcia marquez" Entonces
			Escribir "muy bien uwu";
		FinSi
	FinSi
	
FinAlgoritmo

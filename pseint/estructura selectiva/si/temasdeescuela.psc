Proceso TemasDeEscuela
	
	// La fecha es de cuando le puse la info
	
	Escribir "------------------------------------";
	Escribir "Programador: Said Jesús Sánchez Vega";
	Escribir "Boleta: 2025121073";
	Escribir "Fecha: 2/11/2025";
	Escribir "------------------------------------";
	Escribir "";
	
	Definir temas, libro Como Caracter;
	Definir a, b, resultado Como Entero;
	
	Escribir "Elije alguno de los dos temas: matematicas o literatura";
	Leer temas;
	
	Si temas = "matematicas" o temas = "Matematicas" Entonces
		Escribir "Excelente eleccion, ingresa ahora un numero";
		Leer a;
		Escribir "Ahora ingresa otro numero";
		Leer b;
		resultado <- a * b;
		Si resultado >= 35 Entonces
			Escribir "los numeros que multiplico son mayores";
		Sino
			Escribir "los numeros que ingreso son menores que 10";
		FinSi
	Sino 
		Si temas = "literatura" o temas = "Literatura" entonces
			Escribir "Que libro escribio el escritor juan rulfo";
			Leer libro; 
			Si libro = "pedro paramo" entonces
				Escribir "omaigad, sabes mucho de literatura";
			Sino
				Escribir "mal, reprobado por nuv, el libro es pedro paramo";
			FinSi
		FinSi
	FinSi
FinProceso

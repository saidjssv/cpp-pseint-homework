Proceso eleccion
	
	// La fecha es de cuando le puse la info
	
	Escribir "------------------------------------";
	Escribir "Programador: Said Jesús Sánchez Vega";
	Escribir "Boleta: 2025121073";
	Escribir "Fecha: 2/11/2025";
	Escribir "------------------------------------";
	Escribir "";
	
	Definir num Como Entero;
	Definir color Como Caracter;
	
	Escribir "ingresa un numero";
	Leer num;
	
	Si num = 1 Entonces
		Escribir "Ingrese su color fav"; 
		Leer color;
		Escribir "su color fav es: ", color;
	Sino
		si num = 2 Entonces
			Escribir "Usted viajara a europa";
		Sino
			si num = 3 entonces
				Escribir "Usted vivira 300 años";
			sino 
				si num = 4 Entonces
					Escribir "Usted ganara la loteria";
				Sino
					si num > 4 o num < 1 Entonces
						Escribir "Ese numero no existe twin";
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
	
FinProceso

Algoritmo listadeautos
	
	// La fecha es de cuando le puse la info
	
	Escribir "------------------------------------";
	Escribir "Programador: Said Jesús Sánchez Vega";
	Escribir "Boleta: 2025121073";
	Escribir "Fecha: 2/11/2025";
	Escribir "------------------------------------";
	Escribir "";
	
	definir letra Como Caracter;
	escribir "Elije alguna de estas opciones para conocer el precio del modelo del auto";
	escribir "a) Chevrolet s10 max";
	escribir "b) Nissan versa advance";
	escribir "c) Honda odissey touring";
	escribir "d) Ford explorer st-line";
	escribir "e) BYD king";
	escribir "f) Toyota Yaris Sedan Base MT";
	
	Leer letra;
	segun letra hacer
		"A" o "a":
			Escribir "Chevrolet s10 max";
			Escribir "$367,600 mxn";
		"B" o "b": 
			Escribir "Nissan Versa Advance";
			Escribir "$292900 mxn";
		"C" o "c":
			escribir "Honda Odissey Touring";
			Escribir "$1182900 mxn";
		"D" o "d":
			escribir "Ford Explorer ST-Line";
			Escribir "$1469100 mxn";
		"E" o "e":
			Escribir "BYD King";
			Escribir "$499800 mxn";
		"F" o "f":
			Escribir "Toyota Yacis Sedan Base MT";
			Escribir "$321700 mxn";
		De Otro Modo:
			Escribir "elije solo los incisos brindados";
	FinSegun
FinAlgoritmo

Algoritmo tablasDeMultiplicacion
	
	Escribir "------------------------------------";
	Escribir "Programador: Said Jesús Sánchez Vega";
	Escribir "Boleta: 2025121073";
	Escribir "Fecha: 22/10/2025";
	Escribir "------------------------------------";
	Escribir "";
	
	definir num, i, r como entero;
	definir input Como Caracter;
	definir peti Como Logico;
	
	peti <- Verdadero;
	
	mientras peti = Verdadero Hacer
		escribir "ingresa un numero";
		leer num;
		mientras i <= 10 Hacer
			r <- i * num
			Escribir num, " x ", i, " = ", r; 
			i <- i + 1;
		FinMientras
		escribir "quieres hacer otra tabla? y/n";
		leer input;
		si input = "y" o input = "Y" Entonces
			
			peti <- Verdadero;
			
		sino 
			
			peti <- Falso;
			
		FinSi
	FinMientras

FinAlgoritmo

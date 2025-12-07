Algoritmo multiplode7Para
	Escribir "------------------------------------";
	Escribir "Programador: Said Jesús Sánchez Vega";
	Escribir "Boleta: 2025121073";
	Escribir "Fecha: 2/11/2025";
	Escribir "------------------------------------";
	Escribir "";
	
	definir i, r como entero;
	
	para i <- 7 hasta 160 con paso 1 Hacer
		r <- i % 7;
		Si r = 0 Entonces
			escribir "Su numero es multiplo de 7! su numero es:", i;
		FinSi
	FinPara
FinAlgoritmo

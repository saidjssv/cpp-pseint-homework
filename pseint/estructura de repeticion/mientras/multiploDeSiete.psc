Algoritmo multiploDeSiete
	// algoritmo: obtener los multiplos de 7 en 160, con la estructura de repeticion mientras
	Escribir "------------------------------------";
	Escribir "Programador: Said Jesús Sánchez Vega";
	Escribir "Boleta: 2025121073";
	Escribir "Fecha: 22/10/2025";
	Escribir "------------------------------------";
	Escribir "";
	
	definir i, r Como Entero;
	i <- 7;
	
	mientras i <= 160 Hacer
		r <- i % 7;
		Si r = 0 Entonces
			Escribir "Su numero es multiplo de 7!! su numero es: ", i;
			i <- i + 1;
		SiNo
			i <- i + 1;
		FinSi
	FinMientras
FinAlgoritmo

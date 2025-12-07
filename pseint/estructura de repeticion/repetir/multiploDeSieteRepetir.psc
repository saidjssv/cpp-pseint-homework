Algoritmo multiploDeSieteRepetir
	
	definir i, r Como Entero
	
	i <- 7;
	
	Repetir
		r <- i % 7;
		si r = 0 entonces 
			escribir "Su numero es multiplo de 7! su numero es: ", i;
			i <- i + 1;
		SiNo
			i <- i + 1;
		FinSi
	Hasta Que i >= 160
	
FinAlgoritmo

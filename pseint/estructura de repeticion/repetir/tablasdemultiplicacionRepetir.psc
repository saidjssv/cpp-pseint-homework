Algoritmo tablasdemultiplicacionRepetir
	
	Escribir "------------------------------------";
	Escribir "Programador: Said Jesús Sánchez Vega";
	Escribir "Boleta: 2025121073";
	Escribir "Fecha: 22/10/2025";
	Escribir "------------------------------------";
	Escribir "";
	
	definir num, i, r como entero;
	definir input Como Caracter;
	definir peti como logico;
	
	peti <- Verdadero
	
	Repetir
		escribir "ingresa un numero";
		leer num;
		repetir 
			r <- i * num;
			escribir num, " x ", i , " = ", r;
			i <- i + 1;
		Hasta Que i > 10
		
		escribir "quieres hacer otra tabla? y/n";
		leer input;
		si input = "y" o input = "Y" Entonces
			peti <- Verdadero;
		sino 
			peti <- Falso;
		FinSi
		
	Hasta Que peti = Falso
	
FinAlgoritmo

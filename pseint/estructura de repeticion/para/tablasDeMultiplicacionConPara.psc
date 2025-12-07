Algoritmo tablasDeMultiplicacionConPara
	
	Escribir "------------------------------------";
	Escribir "Programador: Said Jesús Sánchez Vega";
	Escribir "Boleta: 2025121073";
	Escribir "Fecha: 2/11/2025";
	Escribir "------------------------------------";
	Escribir "";
	
	definir num, i, r como entero;
	definir input como caracter;
	definir peti como logico;
	
	peti <- Verdadero;
	
	// EL CODIGO NO PUEDE SER SOLO CON EL BUCLE PARA, POR LO Q USE REPETIR TAMBIEN.
	
	
	Repetir
		Escribir "ingresa un numero";
		leer num;
		
	para i <- 1 hasta 10 con paso 1 Hacer
		r <- i * num
		Escribir num, " x ", i, " = ", r; 
	FinPara
	
	Escribir "Quieres hacer otra tabla? y/n";
	leer input;
	
	si input = "y" o input = "Y" entonces
		peti <- Verdadero
	SiNo
		peti <- falso
	FinSi
	
	Hasta que peti = Falso
	
FinAlgoritmo

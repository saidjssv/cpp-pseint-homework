Algoritmo gastoDescuento
	
	// La fecha es de cuando le puse la info
	
	Escribir "------------------------------------";
	Escribir "Programador: Said Jesús Sánchez Vega";
	Escribir "Boleta: 2025121073";
	Escribir "Fecha: 2/11/2025";
	Escribir "------------------------------------";
	Escribir "";
	
	Definir gasto, descuento, total Como Entero;
	
	Escribir "Introduce el total de tu gasto";
	Leer gasto;
	Escribir "Introduce tu descuento";
	Leer descuento;
	
	Si descuento > 100 Entonces
		Escribir "Dato Invalido";
	Sino
		total <- ((gasto * descuento) / 100);
		Escribir "Tu descuento fue: ", + total;
	FinSi
FinAlgoritmo

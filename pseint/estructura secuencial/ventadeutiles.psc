Proceso Ventas
	
	// La fecha es de cuando le puse la info
	
	Escribir "------------------------------------";
	Escribir "Programador: Said Jesús Sánchez Vega";
	Escribir "Boleta: 2025121073";
	Escribir "Fecha: 2/11/2025";
	Escribir "------------------------------------";
	Escribir "";
	
	Definir cant_libs, cant_cuads, cant_plumas, total Como Entero;
	
	Escribir "Cuantos libros quieres?";
	Leer cant_libs;
	Escribir "Cuantos cuadernos quieres?";
	Leer cant_cuads;
	Escribir "Cuantas plumas quieres?";
	Leer cant_plumas;
	
	total <- (cant_libs * 100) + (cant_cuads * 50) + (cant_plumas * 10);
	
	Escribir "El total de su compra es: ", total;
	
FinProceso

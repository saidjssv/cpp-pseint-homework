Proceso ejerciciorepetir
	
	// Se muestra la siguiente linea 12 veces con la estructura repetir
	
	Escribir "------------------------------------";
	Escribir "Programador: Said Jesús Sánchez Vega";
	Escribir "Boleta: 2025121073";
	Escribir "Fecha: 22/10/2025";
	Escribir "------------------------------------";
	Escribir "";
	
	definir i como entero;
	i <- 1;
	
	repetir
		Escribir i, ".-", "la junta de entrega de boleta del grupo 3iv13 es hoy.";
		i <- i + 1;
	Hasta Que i > 12
	
	escribir "";
	escribir "";
	escribir "Ahora con mientras.";
	escribir "";
	escribir "";
	
	i <- 0;
	
	Mientras i <= 12 hacer
		Escribir i, ".-", "la junta de entrega de boleta del grupo 3iv13 es hoy.";
		i <- i + 1;
	FinMientras
	
FinProceso

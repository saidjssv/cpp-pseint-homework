Proceso calificacion2
	
	// La fecha es de cuando le puse la info
	
	Escribir "------------------------------------";
	Escribir "Programador: Said Jesús Sánchez Vega";
	Escribir "Boleta: 2025121073";
	Escribir "Fecha: 2/11/2025";
	Escribir "------------------------------------";
	Escribir "";
	
	Definir calif1, calif2, calif3, promedio Como Entero;
	
	Escribir "Vamos a determinar si pasaste o no el semestre! Ingresa tu calificacion del primer parcial";
	Leer calif1;
	Escribir "Ingresa tu calificacion del segundo parcial";
	Leer calif2;
	Escribir "Ingresa tu calificacion del tercer parcial";
	Leer calif3;
	
	promedio <- (calif1 + calif2 + calif3) / 3;
	
	Si promedio >= 6 Entonces
		Escribir "Esoo, aprobaste!!";
	Sino
		Escribir "Que mal, reprobaste :(";
	FinSi
	
FinProceso

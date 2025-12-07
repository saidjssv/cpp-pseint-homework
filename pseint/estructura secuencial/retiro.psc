Proceso retiro
	
	// La fecha es de cuando le puse la info
	
	Escribir "------------------------------------";
	Escribir "Programador: Said Jesús Sánchez Vega";
	Escribir "Boleta: 2025121073";
	Escribir "Fecha: 2/11/2025";
	Escribir "------------------------------------";
	Escribir "";
	
	Definir NIP, monto Como Entero;
	Escribir "Hienvenido al banco del chicharito! Ingrese su nip para continuar.";
	Leer NIP;
	Si NIP No Es Igual A 2363 Entonces
		Escribir "NIP incorrecto, ingrese de nuevo";
		Leer NIP;
		Escribir "Nah, increible, cerrando programa.";
	Sino 
		Escribir "Elija la cantidad a retirar.";
		Leer monto;
		Escribir "Dinero a retirar: ", monto;
	FinSi
FinProceso

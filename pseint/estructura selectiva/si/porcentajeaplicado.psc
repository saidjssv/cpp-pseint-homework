// Algoritmo 1: Se solicita que el usuario ingrese 2 numeros para sumarlos, si la suma es más de 25 se aplicará un 5% (este 5% debe mostrarse en la acción verdadera junto a la operacion aritmetica), si es menos de 25 se le invita a que ingrese más numeros

Algoritmo porcentaje
	Definir a, b, c, suma Como Entero;
	Definir total como real
	
	Escribir "Nombre del programador: Sánchez Vega Said Jesus";
	Escribir "Número de boleta: 2025121073";
	Escribir "Fecha: 03/10/2025";
	
	// Codigo
	
	Escribir "Ingresa tu primer número";
	Leer a;
	Escribir "Ingresa tu segundo número";
	Leer b;
	
	suma <- a + b;
	
	Si suma >= 25 Entonces
		Escribir "A tu operación se le agregara el 5% de valor agregado";
		total <- (suma * 5) / 100;
		Escribir "El resultado de tu operacion es: ", total + suma;
	sino
		Escribir "Tu operación es menor a 25, por favor, agrega otro número";
		Leer c;
		total <- ((suma + c) * 5) / 100;
		Escribir "El resultado de tu operación es: ", total + suma + c;
	FinSi
	
FinAlgoritmo

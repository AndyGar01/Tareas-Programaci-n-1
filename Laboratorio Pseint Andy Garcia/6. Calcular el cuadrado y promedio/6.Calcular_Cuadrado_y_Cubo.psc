Algoritmo Calcular_Cuadrado_y_Cubo
	//Bievenida al usuario
	Escribir ".....Bienvenido usuario....."
	Escribir "A continuacion se le pedira ingresar el valor y que desea elevar si al cuadrado o al cubo"
	
	
	
	//Inicio de la estructura Repetir 
	Repetir
		
		//Pedir datos al usuario
		Escribir "Ingresar el numero que desea elevar: "
		Leer V1
		
		Escribir "Ingresar el numero de la opcion que desea realizar (1. Elevar al Cuadrado / 2. Elevar al Cubo)"
		leer Op
		
		//Inicio de la estructura segun
	    Segun Op Hacer
		1:
			Op= V1^2;
			Escribir "El resultado de la operacion es: ", Op 
			
		2:
			Op= V1^3;
			Escribir "El resultado de la operacion es: ", Op 
			
		De Otro Modo:
			Escribir "ERROR: Ingresar una opcion valida"
			
	Fin Segun
	
	Escribir "Desea volver a ingresar otro valor: "
	
	leer Condicion
	
    Hasta Que Condicion = 'No' o Condicion = 'NO'
	
	//Despedida
	Escribir "Finalizado ejecucion, feliz tarde/Noche'

FinAlgoritmo

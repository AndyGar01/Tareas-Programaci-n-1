Algoritmo calcularSalario
	
    Definir nombre Como Caracter
    Definir Horas_trabajadas Como Entero
    Definir Tarifa, Salario Como Real
	
    Escribir "Por favor ingresar su nombre: "
    Leer nombre
	
    Escribir "Bienvenido ", nombre, ", a continuacion se le pedira ingresar las horas trabajadas para mostrar el sueldo bruto"
	
    Escribir "Introduzca las horas trabajadas (-1 para salir): "
    Leer Horas_trabajadas
	
    Mientras Horas_trabajadas <> -1 Hacer
        Si Horas_trabajadas <= 40 Entonces
            Escribir "Introduzca la tarifa por horas del empleado ($00.00): "
            Leer Tarifa
			
            //Calcular salario
            Salario = Horas_trabajadas * Tarifa
			
            Escribir "El salario es $", Salario
        Sino
            Escribir "Introduzca la tarifa por horas del empleado ($00.00): "
            Leer Tarifa
			
            //Calcular salario
            Salario = Horas_trabajadas * Tarifa + 5
			
            Escribir "El salario es $", Salario
        FinSi
		
        //PEDIR NUEVOS DATOS SI EL USUARIO LO DESEA
        Escribir "Introduzca las horas trabajadas (-1 para salir): "
        Leer Horas_trabajadas
    FinMientras
	
    Escribir "Finalizando ejecucion feliz dia ", nombre
FinAlgoritmo

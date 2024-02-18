Algoritmo calcularLimiteCredito
    Definir nombre Como Caracter
    Definir Numero_Cuenta Como Entero
    Definir Saldo_Inicial, Total_Articulos_Cargados, Total_Creditos_Aplicados, Nuevo_Saldo, Limite_Credito Como Real
	
    Escribir "Porfavor ingresar su nombre: "
    Leer nombre
	
    Escribir "Bienvenido, ", nombre, " a continuacion se le pedira ingresar los siguientes datos para calcular si ha llegado al limite del credito"
	
    Escribir "Introduzca su numero de cuenta (o -1 para salir): "
    Leer Numero_Cuenta
	
    Mientras Numero_Cuenta <> -1 Hacer
        Escribir "Introduzca su saldo inicial: "
        Leer Saldo_Inicial
		
        Escribir "Introduzca los cargos totales: "
        Leer Total_Articulos_Cargados
		
        Escribir "Introduzca los creditos totales: "
        Leer Total_Creditos_Aplicados
		
        Escribir "Introduzca el limite de credito: "
        Leer Limite_Credito
		
        //CALCULANDO NUEVO SALARIO
        Nuevo_Saldo = Saldo_Inicial + Total_Articulos_Cargados - Total_Creditos_Aplicados
		
        Si Nuevo_Saldo >= Limite_Credito Entonces
            Escribir "El nuevo saldo es: ", Nuevo_Saldo
            Escribir "Cuenta: ", Numero_Cuenta
            Escribir "Limite de credito: ", Limite_Credito
            Escribir "Saldo: ", Nuevo_Saldo
            Escribir "se excedio el limite de credito"
        Sino
            Escribir "El nuevo saldo es: ", Nuevo_Saldo
        FinSi
		
        Escribir "Introduzca su numero de cuenta (o -1 para salir): "
        Leer Numero_Cuenta
    FinMientras
	
    Escribir "Ejecucion finalizada, feliz dia ", nombre
FinAlgoritmo


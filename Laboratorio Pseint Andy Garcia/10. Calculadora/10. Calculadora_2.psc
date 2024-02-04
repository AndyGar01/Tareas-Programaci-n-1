Algoritmo Calculadora_2
	Escribir 'Bienvenido usuario, a continuacion se le pedira ingresar los valores y elegir la operacion que quiera realizar.'
	Repetir
		Escribir 'Ingresar la operacion a realizar: (+, -, *, /)'
		Leer Op
		Escribir 'Ingresar el primer valor: '
		Leer V1
		Escribir 'Ingresar el segundo valor: '
		Leer V2
		Si Op='+' Entonces
			Resul <- V1+V2
		SiNo
			Si Op='-' Entonces
				Resul <- V1-V2
			SiNo
				Si Op='*' Entonces
					Resul <- V1*V2
				SiNo
					Si Op='/' Entonces
						Si V2=0 Entonces
							Escribir 'ERROR, no se puede dividir entre 0, porfavor volver a ingresar nuevamente el valor'
						SiNo
							Resul <- V1/V2
						FinSi
					SiNo
						Escribir 'ERROR operacion no es valida'
					FinSi
				FinSi
			FinSi
		FinSi
		Escribir 'El resultado de la operacion ingresada es: ', Resul
		Escribir 'Desea finalizar la ejecucion otra operacion, Si/No'
		Leer Op
	Hasta Que Op='No' O Op='no'
FinAlgoritmo

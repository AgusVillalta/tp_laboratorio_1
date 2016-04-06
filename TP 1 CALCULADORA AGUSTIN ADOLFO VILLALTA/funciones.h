#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#endif // FUNCIONES_H_INCLUDED

/**
*\brief Agarra los datos del 1er operando y del 2do operando, y calcula la Suma
*\param Operacion Suma
*\return Retorna la Suma de A y B
**/
float CalculateSum(float x, float y)
{
    float ResultSum;

    ResultSum= x+y;
    return ResultSum;
}

/**
*\brief Agarra los datos del 1er operando y del 2do operando, y calcula la Resta
*\param Operacion Resta
*\return Retorna la Resta de A y B
**/
float CalculateRest(float x, float y)
{
    float ResultRest;

    ResultRest= x-y;
    return ResultRest;
}


/**
*\brief Agarra los datos del 1er operando y del 2do operando, y calcula la Division
*\param Operacion Division con validacion de numero
*\return Retorna la Division de A y B
**/
float CalculateDivision(float x, float y)
{
    if(y == 0 && x == 0)
    {
        return printf("Ingrese otro numero nuevamente");
    }
    else
    {
        float ResultDivision;

        ResultDivision= x/y;
        return ResultDivision;

    }

}

/**
*\brief Agarra los datos del 1er operando y del 2do operando, y calcula la Multiplicacion
*\param Operacion Multiplicacion
*\return Retorna la Multiplicacion de A y B
**/
float CalculateMultiplication(float x, float y)
{
    float ResultMultiplication;

    ResultMultiplication= x*y;
    return ResultMultiplication;
}


/**
*\brief Agarra los datos del 1er operando y realiza el Factorial de ese
*\param Operacion Factorial
*\return Retorna el resultado de Factorial de A
**/
float CalculateFactorial(float x)
{
    float ResultFactorial=1;
    int Counter=1;
    while(Counter <=x)
    {
        ResultFactorial = Counter * ResultFactorial;
        Counter++;

    }
    return ResultFactorial;
}

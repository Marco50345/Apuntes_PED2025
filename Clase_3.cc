#include <iostream>
#include <ctime>
#include <string>

std::string GenerarCupon(std ::string prefijo);

void VerificarCupon(std::string identificador_cupon);

int main()
{
    srand(time(0));
    std::string letras;
    std::cout << "Ingrese los caracteres";
    std::cin >> letras;

    std::string cupon = GenerarCupon(letras);


    VerificarCupon(cupon);

    return 0;
}

std::string GenerarCupon(std::string prefijo)
{
    // Validar entrada del prefijo = 3 caracteres

    if (prefijo.length() != 3)
    {
        std ::cout << "No cumple el estandar de letras";
    }
    else
    {
        int randomNum = rand() % 100 + 999;

        return prefijo + std::to_string(randomNum);
    }

    // Generar el aleatorio 100 -199

    // Convertir int a string

    // Unir el aleatorio generado + el prefijo
}

void VerificarCupon(std::string identificador_cupon)
{
    // Extraer los numeros
    std::string numeros = identificador_cupon.substr(3, 4);

    int conversion = std::stoi(numeros);

    if (conversion % 2 == 0)
    {
        std::cout << conversion << "\n"<< "Tiene premio";
    }
    else
    {
        std::cout << "No tiene premio";
    }

    // Convertir string a entero

    // Verficar si es par  o no
}

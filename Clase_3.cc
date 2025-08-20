#include <iostream>
#include <ctime>
#include <string>
#include <vector>

// Uso de libreria Vector

std::string GenerarCupon(std::string prefijo); // ¿Porque se escribe de esta manera?

std::string SolicitarDatos();
void VerificarCupon(std::string identificador_cupon);

int main()
{
    // Solicitar los datos

    srand(time(0));
    int cant_cupones = 0;
    // std::string cupones_generados[cant_cupones];
    std::vector<std::string> cupones_generados_vector;

    // ¿Cuantos cupones quiere generar
    std ::cout << "Ingresa cantidad de cupones a generar:";
    std ::cin >> cant_cupones;

    for (int i = 0; i < cant_cupones; i++)
    {
        // cupones_generados[i] = GenerarCupon(SolicitarDatos());
        // std ::cout << "Cupon generado" << cupones_generados[i];

        std::string cupon = GenerarCupon(SolicitarDatos());
        cupones_generados_vector.push_back(cupon);

        std:: cout << cupones_generados_vector[i] << "\n"; 
    }


    return 0;
}

std::string GenerarCupon(std::string prefijo) // ¿Por que se escribe el std :: string al inicio de la funcion , cuando solo se puede escribir string + nombre de la funcion
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
    std::string numeros = identificador_cupon.substr(3, 4); // 3 indica el subindice en que inica , 4 inidica el total de letras o elementos queremos extraer ;

    int conversion = std::stoi(numeros);

    if (conversion % 2 == 0)
    {
        std::cout << "El cupon completo es : " << identificador_cupon << " " << conversion << "\n"
                  << "Tiene premio";
    }
    else
    {
        std::cout << "El cupon completo es : " << identificador_cupon << " " << conversion << "\n"
                  << "No tiene premio";
    }

    // Convertir string a entero

    // Verficar si es par  o no
}

std::string SolicitarDatos()
{
    std::string prefijo_cupon;
    do
    {
        std::cout << "Ingrese 3 letras del cupon: ";
        std::cin >> prefijo_cupon;

        if (prefijo_cupon.length() != 3)
        {
            std::cout << "Error. Debe tener exactamente 3 caracteres.\n";
        }
    } while (prefijo_cupon.length() != 3);

    return prefijo_cupon;
}

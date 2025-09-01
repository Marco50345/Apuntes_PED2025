
#include <iostream>
#include <ctime>
#include <string>
#include <vector>
#include <utility>

struct Cantante
{
    std::string nombre_cantante;
    std::string nacionalidad_cantante;
};

struct Albumes
{
    int lanzamiento_album;
    std::string antiguedad_album;
    std::string nombre_album;
    std::vector<std::pair<std::string, int>> vector_canciones; // Titulo , numero de pista
    Cantante inf_cantante;
};

std::vector<Albumes> info_vector_albumes;

Albumes SolicitarDatos();
void Imprimir(const std::vector<Albumes> &vector_albumes);
std::string CalcularAntiguedad();
void BuscarCantante();

int main()
{

    Albumes info_album = SolicitarDatos();
    info_vector_albumes.push_back(info_album);
    Imprimir(info_vector_albumes);

    return 0;
}

Albumes SolicitarDatos()
{

    Albumes i_album;

    std::string seleccion;
    std::string titulo_cancion;
    int numero_pista;

    std::cout << "Ingrese fecha lanzamiento: " << std::endl;
    std::cin >> i_album.lanzamiento_album;

    std::cout << "Ingrese nombre album : " << std::endl;
    std::cin >> i_album.nombre_album;

    std::cout << "Ingrese nombre del cantante : " << std::endl;
    std::cin >> i_album.inf_cantante.nombre_cantante;

    std::cout << "Ingrese la nacionalidad del cantante : " << std::endl;
    std::cin >> i_album.inf_cantante.nacionalidad_cantante;

    std::string antiguedad = CalcularAntiguedad();

    i_album.antiguedad_album = antiguedad;
    do
    {

        std::cout << "Ingrese el titulo de la cancion : " << std::endl;
        std::cin >> titulo_cancion;

        std::cout << "Ingrese el numero de pista : " << std::endl;
        std::cin >> numero_pista;

        i_album.vector_canciones.push_back({titulo_cancion, numero_pista});

        std::cout << "Desea ingresar otra cancion , Si = S , No = N " << std::endl;
        std::cin >> seleccion;
    } while (seleccion == "S");

    return i_album;
}

void Imprimir(const std::vector<Albumes> &vector_albumes)
{

    for (auto i : vector_albumes)
    {
        std::cout << "=============================================================================" << std::endl;
        std::cout << "Nombre del cantante:" << i.inf_cantante.nombre_cantante << std::endl;
        std::cout << "Nacionalidad del cantante: " << i.inf_cantante.nacionalidad_cantante << std::endl;

        std::cout << "Lanzamiento:" << i.lanzamiento_album << std::endl;
        std::cout << "Nombre album: " << i.nombre_album << std::endl;
        std::cout << "Antiguedad album: " << i.antiguedad_album << " años" << std::endl;

        std::cout << "Canciones:\n";

        for (auto c : i.vector_canciones)
        {
            std::cout << "Titulo: " << c.first << std::endl;
            std::cout << "Pista:  " << c.second << std::endl;
        }
    }
}

std::string CalcularAntiguedad()
{
    int fecha_actual = 2025;
    int fecha_lanzamiento;
    int antiguedad;

    std::cout << "Ingrese de nuevo fecha lanzamiento" << std::endl;
    std::cin >> fecha_lanzamiento;

    antiguedad = (fecha_actual - fecha_lanzamiento);

    return std::to_string(antiguedad);
}

void BuscarCantante()
{
    Albumes inf_album;
    std::string buscado;

    std::cout << "Ingrese el nombre del cantante a buscar :" << std::endl;
    std::cin >> buscado;

    if (inf_album.inf_cantante.nombre_cantante == buscado)
    {
        std::cout << "Album : " << std::endl;

        for (auto c : inf_album.)
        {
            std::cout << "Nombre album: " << c.nombre_album << std::endl;
            std::cout << "Fecha lanzamiento album: " << c.lanzamiento_album << std::endl;
        }
    }
    else
    {
        std::cout << "Album no encontrado" << std::endl;
    }
}

#include <iostream>
#include <ctime>
#include <string>
#include <vector>
#include <utility>

struct Cantante
{
    std::string nombre_cantante;
    std::string nacionalidad_cantante;

} i_cantante;

struct Albumes
{
    int lanzamiento_album;
    std::string nombre_album;
    std::vector<std::pair<std::string, int>> vector_canciones; // Titulo , numero de pista
    Cantante inf_cantante;

} albumes;

Albumes SolicitarDatos();
void ImprimirDatos(); 

int main()
{
   
        SolicitarDatos();
        ImprimirDatos();

        
    return 0;
}

Albumes SolicitarDatos()
{

    std::string titulo_cancion;
    int numero_pista;

    std::cout << "Ingrese fecha lanzamiento: " << std::endl;
    std::cin >> albumes.lanzamiento_album;

    std::cout << "Ingrese nombre album : " << std::endl;
    std::cin >> albumes.nombre_album;

    std::cout << "Ingrese el titulo de la cancion : " << std::endl;
    std::cin >> titulo_cancion;

    std::cout << "Ingrese el numero de pista : " << std::endl;
    std::cin >> numero_pista;

    std::cout << "Ingrese nombre del cantante : " << std::endl;
    std::cin >> albumes.inf_cantante.nombre_cantante;

    std::cout << "Ingrese la nacionalid del cantante : " << std::endl;
    std::cin >> albumes.inf_cantante.nacionalidad_cantante;

    albumes.vector_canciones.push_back({titulo_cancion, numero_pista});

    return albumes;
}

void ImprimirDatos()
{
    std::cout << "                     Informacion:                         " << std::endl;

    std::cout << "=============================================================================" << std::endl;
    std::cout << "Nombre del cantante:" << albumes.inf_cantante.nombre_cantante << std::endl;
    std::cout << "Nacionalidad del cantante: " << albumes.inf_cantante.nacionalidad_cantante << std::endl;

    std::cout << "Lanzamiento:" << albumes.lanzamiento_album << std::endl;
    std::cout << "Nombre album: " << albumes.nombre_album << std::endl;

    for (auto c : albumes.vector_canciones)
    {
        std::cout << "Titulo: " << c.first << std::endl;
        std::cout << "Pista:  " << c.second << std::endl;
    }

}


#include<iostream>
#include<foco.hpp>

int main(int argc, char const *argv[])
{
    Foco foco1;
    Foco foco2;

    std::cout<<"Encendiendo foco"<<std::endl;
    std::cout<<"Apagando foco"<<std::endl;

    foco1.Encender();
    foco1.Apagar();   
    foco1.encendido = false;

    return 0;
}

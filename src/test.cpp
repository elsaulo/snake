#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/terminal.hpp>
#include <iostream>
#include <thread>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    std::string reset_position;
    int frame1 = 5;
   
    while (true)
    {
    auto can = Canvas(350,350);
    can.DrawPointEllipse(50,20,50,frame1);
    can.DrawPointCircleFilled(50,20,frame1);
        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
        Element lienzo = bgcolor(Color::Blue,canvas(&can));
        Render(pantalla, lienzo);
        std::cout << reset_position;
        pantalla.Print();
        reset_position = pantalla.ResetPosition(true);
        this_thread::sleep_for(0.1s);
        frame1++;
        while(frame1 == 20) 
        {
              
        frame1=frame1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1;
        
    }
    }

    return 0;
}
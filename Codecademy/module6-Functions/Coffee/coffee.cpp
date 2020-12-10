#include <string>

std::string make_coffee(bool milk = false, bool sugar = false)
{
    std::string coffee = "Here's your coffee";
    if (milk and sugar)
    {
        coffee += " with milk and sugar";
    }
    else if (milk)
    {
        coffee += " with milk";
    }
    else if (sugar)
    {
        coffee += " with sugar";
    }
    return coffee + ".\n";
}
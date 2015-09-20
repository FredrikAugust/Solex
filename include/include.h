#ifndef INCLUDE_H
#define INCLUDE_H
#include <SFML/Graphics.hpp>

using namespace sf;

const double pi = 3.1415926535897;
const double G  = 6.6754e-17; // e-17 so kilometers can be used for r

struct PlanetData
{
    double mass;
    int aphelion;
    int perihelion;
    double radius;
    double orbitalSpeed;
    Vector2i orbitCenter;
    int orbitalPeriod;
    int x;
    int y;
    Color color;
};


struct DrawData
{
    RenderWindow* window;
    double zoom;
    Vector2i viewPos;
};

struct GravData
{
    double mass;
    int x;
    int y;
};

#endif // INCLUDE_H

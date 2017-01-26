#ifndef CUBE_H
#define CUBE_H
#include <vector>

#include <parametrics/gmpplane>
#include <parametrics/gmpsphere>
#include <parametrics/gmpcylinder>

#include <memory.h>

class Cube{
public:
  //using PPlane::PPlane;

    // 6 planes
    std::vector <GMlib::PPlane<float>> planes;
    // 12 edges
    std::vector <GMlib::PCylinder<float>> cylinders;
    // 8 vertices
    std::vector <GMlib::PSphere<float>> spheres;

    double x;
    double y;
    double z;

    Cube(double, double, double);
   ~Cube();

    void create();

protected:
 // void localSimulate(double dt) override;

private:
//  std::unique_ptr<Cube>    _cube {nullptr};

}; // END class Cube


#endif // CUBE_H
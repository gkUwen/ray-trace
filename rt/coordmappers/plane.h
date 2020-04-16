#ifndef CG1RAYTRACER_COORDMAPPERS_PLANE_HEADER
#define CG1RAYTRACER_COORDMAPPERS_PLANE_HEADER

#include <rt/coordmappers/coordmapper.h>
#include <core/vector.h>
#include <core/matrix.h>
#include <core/point.h>
#include <rt/intersection.h>

namespace rt {

class Intersection;
class Vector;

class PlaneCoordMapper : public CoordMapper{
public:
    PlaneCoordMapper(const Vector& e1, const Vector& e2);
    virtual Point getCoords(const Intersection& hit) const;
private:
    Vector e1;
    Vector e2;
    Matrix transform;
};

}

#endif
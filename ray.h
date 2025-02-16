//
// Created by robert on 2/4/25.
//

#ifndef RAY_H
#define RAY_H

#include "vec3.h"
#include <iostream>

class ray {
  public:
    ray() {}
    ray(const point3& origin, const vec3& direction) : orig(origin), dir(direction) {}

    const point3& origin() const  { return orig; }
    const vec3& direction() const { return dir; }
    point3 at(double t) const;

private:
    point3 orig;
    vec3 dir;
};


#endif //RAY_H
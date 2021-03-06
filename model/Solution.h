//
// Created by camil on 30/03/2019.
//

#ifndef LOCATION_PROBLEM_SOLUTION_H
#define LOCATION_PROBLEM_SOLUTION_H

#include <vector>
#include "Place.h"
#include <algorithm>

class Solution {
public:
    const std::vector<float> &getDistance() const;

    void setDistance(const std::vector<float> &distance);

    const std::vector<Place> &getPlaces() const;

    void setPlaces(const std::vector<Place> &places);

    const Place &getSolution() const;

    void setSolution(const Place &solution);

    Place get_place_by_indice(int ind);

    float &get_dist_by_indice(int ind);

    void add_distance(float f);

    void supp_place(Place pl);

    bool is_in(std::vector<Place> pls, Place pl);

    bool operator==(const Solution &rhs) const {
        return rhs.getSolution().getM_num_ville() == getSolution().getM_num_ville() && rhs.getPlaces() == getPlaces();
    }

private:
    std::vector<float> distance;
    std::vector<Place> places;
    Place solution;
};


#endif //LOCATION_PROBLEM_SOLUTION_H

#ifndef IBM_MUTUALISM_H
#define IBM_MUTUALISM_H
#include <vector>
#include <random>
#include "individual.h"
// struct with default parameters for the class constructor
// this is a great post why to use a struct rather than
// function arguments:
// https://stackoverflow.com/questions/58859201/why-pass-structure-to-function-instead-of-separate-parameters
struct IBM_parameters {
    double d[2] = {0.5,0.3}; // dispersal rates of species 1 and 2
    int ngenerations = 10; // number of generations the simulation is supposed to last
    int npatches = 500; // number of patches
    int npp[2] = {2,2}; // number of individuals per patch
};

class IBM_Mutualism
{
    private:
        IBM_parameters par;
        std::uniform_real_distribution<double> uniform;

        // (npp1 + 1) x (npp2 +1) combinations of patches
        std::vector < std::vector <Individual> > patches;

    public:
        IBM_Mutualism(const IBM_parameters &params);
}; // end class IBM_Mutualism

#endif

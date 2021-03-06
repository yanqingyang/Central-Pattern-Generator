#ifndef __central_pattern_generator__Neuron__
#define __central_pattern_generator__Neuron__

#include <iostream>
#include <vector>
#include <string>

#include "Chromosome.h"

enum NEURON_TYPE {
    MOTO, INTER, BRAINSTEM
};


class Neuron {
public:
    Neuron();
    Neuron(std::vector<double>&, double m=1.0, double x=1.0, NEURON_TYPE n=INTER, std::string name="UNASSIGNED");
    double getM();
    double getX();
    void setM(double m);
    void setX(double x);
    std::string& getName();
    NEURON_TYPE getType();
    std::vector<double>& getWeights();
private:
    Chromosome m_chromosome;
    std::string m_name;
    std::vector<double> m_weights;
    double m_m;
    double m_x;
    NEURON_TYPE m_ntype;

};

#endif /* defined(__central_pattern_generator__Neuron__) */

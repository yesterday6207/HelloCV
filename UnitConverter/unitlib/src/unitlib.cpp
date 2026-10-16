#include"unitlib.h"

double szh(double s){
    return s * (9.0/5.0) + 32; 
}
double hzs(double h){
    return (h - 32) * (5.0/9.0); 
}

double mzy(double m){
    return m/0.3048; 
}
double yzm(double y){
    return y * 0.3048; 
}

double qzb(double q){
    return q * 2.20462262; 
}
double bzq(double b){
    return b * 0.45359237; 
}
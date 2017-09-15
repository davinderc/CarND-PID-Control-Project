#include "PID.h"
#include <iostream>

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_in, double Ki_in, double Kd_in) {
  this->Kp = Kp_in;
  this->Ki = Ki_in;
  this->Kd = Kd_in;
  this->p_error = 0;
  this->i_error = 0;
  this->d_error = 0;
}

void PID::UpdateError(double cte) {
  this->d_error = p_error - cte;
  this->p_error = cte;
  this->i_error += cte;
}

double PID::TotalError() {
  return (-Kp*p_error - Ki*i_error + Kd*d_error);
}


#include "PID.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>


using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {
	memset(this,0,sizeof(PID));
	p_error=DBL_MAX;
}

PID::~PID() {}

void PID::Init(double Kp0, double Ki0, double Kd0) {
  Kp = Kp0;
  Ki = Ki0;
  Kd = Kd0;
}

void PID::UpdateError(double cte) {
	d_error=(p_error==DBL_MAX)?0.0:(cte-p_error);
	p_error=cte;
	i_error+=cte;

}

double PID::TotalError() {
	return -Kp * p_error - Kd * d_error - Ki * i_error; 
}


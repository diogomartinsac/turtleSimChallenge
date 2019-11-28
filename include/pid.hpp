#include<iostream>
class PID {
 public:
        double max, min,
               kp, ki, kd,
               setpoint, error, error_prev, error_integral,
               pv, mv;
        PID(double max, double min, double kp, double ki, double kd);

        double calculate(double time, double setpoint, double pv);
};

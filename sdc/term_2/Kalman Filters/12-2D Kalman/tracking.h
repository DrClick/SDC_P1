//
// Created by Watson, Thomas (VWoA-ERL) on 9/23/17.
//

#ifndef KALMAN_TRACKING_H
#define KALMAN_TRACKING_H

#include "measurement_package.h"
#include <vector>
#include <string>
#include <fstream>
#include "kalman_filter.h"

class Tracking{
public:
    Tracking();
    virtual ~Tracking();
    void ProcessMeasurement(const MeasurementPackage &measurement_pack);
    KalmanFilter kf_;

private:
    bool is_initialzed_;
    int64_t previous_timestamp_;

    //acceleration noise components
    float noise_ax;
    float noise_ay;

};

#endif //KALMAN_TRACKING_H

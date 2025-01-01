#ifndef RUNNER_H
#define RUNNER_H

#include "TimeSeries.h"
#include "Strategy.h"

namespace stratest {

class Runner {
public:
    Runner(const TimeSeries&, const Strategy&);
};

}

#endif
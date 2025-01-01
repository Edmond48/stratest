#ifndef TIME_SERIES_H
#define TIME_SERIES_H

#include <vector>
#include <string>
#include <unordered_map>

namespace stratest {

enum FileType {
    CSV_TICK,
    CSV_OHLC
};

class TimeSeries {
public:
    //TimeSeries(std::vector<float>);
    TimeSeries(FileType, const std::string&);
private:
    std::unordered_map<std::string, std::vector<float>> data;
};

}

#endif
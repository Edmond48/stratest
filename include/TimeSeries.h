#ifndef TIME_SERIES_H
#define TIME_SERIES_H

#include <vector>
#include <string>
#include <unordered_map>

namespace stratest {

class TimeSeries {
    public:
        enum FileType {
        CSV_TICK,
        CSV_OHLC
    };
    //TimeSeries(std::vector<float>);
    TimeSeries(FileType, const std::string&);
private:
    std::unordered_map<std::string, std::vector<float>> data;
    constexpr std::vector<std::string> getSchema(FileType);
};

}

#endif
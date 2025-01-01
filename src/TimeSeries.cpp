#include "TimeSeries.h"
#include <fstream>
#include <sstream>

namespace stratest {

TimeSeries::TimeSeries(FileType ft, const std::string& filename) {
    this->data = std::unordered_map<std::string, std::vector<float>>();

    std::ifstream csv(filename);
    std::string line;
    switch (ft) {
    case CSV_TICK:
        
        while (std::getline(csv, line)) {
            std::stringstream lineStream(line);

        }

    }
}

}
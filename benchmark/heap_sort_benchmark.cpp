//
// Created by Семен Соколов on 08.05.2021.
//
#include <fstream>
#include <iostream>
#include <string>       // string
#include <string_view>  // string_view
#include <chrono>       // high_resolution_clock, duration_cast, nanoseconds
#include <vector>
#include <sstream>
#include "heap_sort.hpp"

// подключаем вашу структуру данных

using namespace std;
//using namespace itis;

// абсолютный путь до набора данных и папки проекта
static constexpr auto kDatasetPath = string_view{PROJECT_DATASET_DIR_HEAP_SORT};
static constexpr auto kProjectPath = string_view{PROJECT_SOURCE_DIR};

int main() {

}
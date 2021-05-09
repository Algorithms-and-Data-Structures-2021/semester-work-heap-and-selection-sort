#include <fstream>      // ifstream, ofstream
#include <iostream>     // cout
#include <sstream>      // stringstream
#include <string>       // string, getline
#include <string_view>  // string_view
#include <random>       // mt19937_64, random_device
#include <chrono>       // system_clock

using namespace std;

// абсолютный путь до набора данных
static constexpr auto kDatasetPathHeapSort = string_view{PROJECT_DATASET_DIR_HEAP_SORT};
static constexpr auto kDatasetPathSelection = string_view{PROJECT_DATASET_DIR_SELECTION_SORT};

int main() {
  const auto pathToSelectionSort = string(kDatasetPathSelection);
  const auto pathToHeapSort = string(kDatasetPathHeapSort);
  cout << "Dataset path To Data Heap Sort: " << pathToHeapSort << endl;
  cout << "Dataset path To Data SelectionSort: " << pathToSelectionSort << endl;

  vector<string> output_streams;
  output_streams.emplace_back("/100.csv");
  output_streams.emplace_back("/500.csv");
  output_streams.emplace_back("/1000.csv");
  output_streams.emplace_back("/5000.csv");
  output_streams.emplace_back("/10000.csv");
  output_streams.emplace_back("/50000.csv");
  output_streams.emplace_back("/100000.csv");
  output_streams.emplace_back("/500000.csv");
  output_streams.emplace_back("/1000000.csv");


  vector<int> integers = {100, 500, 1000, 5000, 10000, 50000, 100000, 500000, 1000000};

  while (!integers.empty()) {
    auto outputStreamSelectionSort01 = ofstream(pathToSelectionSort + "/01" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamSelectionSort02 = ofstream(pathToSelectionSort + "/02" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamSelectionSort03 = ofstream(pathToSelectionSort + "/03" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamSelectionSort04 = ofstream(pathToSelectionSort + "/04" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamSelectionSort05 = ofstream(pathToSelectionSort + "/05" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamSelectionSort06 = ofstream(pathToSelectionSort + "/06" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamSelectionSort07 = ofstream(pathToSelectionSort + "/07" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamSelectionSort08 = ofstream(pathToSelectionSort + "/08" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamSelectionSort09 = ofstream(pathToSelectionSort + "/09" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamSelectionSort10 = ofstream(pathToSelectionSort + "/10" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamHeapSort01 = ofstream(pathToHeapSort + "/01" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamHeapSort02 = ofstream(pathToHeapSort + "/02" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamHeapSort03 = ofstream(pathToHeapSort + "/03" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamHeapSort04 = ofstream(pathToHeapSort + "/04" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamHeapSort05 = ofstream(pathToHeapSort + "/05" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamHeapSort06 = ofstream(pathToHeapSort + "/06" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamHeapSort07 = ofstream(pathToHeapSort + "/07" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamHeapSort08 = ofstream(pathToHeapSort + "/08" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamHeapSort09 = ofstream(pathToHeapSort + "/09" + output_streams.front(), ios::ios_base::trunc);
    auto outputStreamHeapSort10 = ofstream(pathToHeapSort + "/10" + output_streams.front(), ios::ios_base::trunc);

    const auto seed = chrono::system_clock::now().time_since_epoch().count();
    auto engine = mt19937(seed);  // без seed`а генератор будет выдавать одни и те же значения
    auto dist = uniform_int_distribution(0, 10000000);  // равновероятное распределение генерируемых чисел

    if (outputStreamSelectionSort01) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamSelectionSort01 << dist(engine) << ',';
      }
      outputStreamSelectionSort01 << dist(engine) << '\n';
    }

    if (outputStreamSelectionSort02) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamSelectionSort02 << dist(engine) << ',';
      }
      outputStreamSelectionSort02 << dist(engine) << '\n';
    }

    if (outputStreamSelectionSort03) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamSelectionSort03 << dist(engine) << ',';
      }
      outputStreamSelectionSort03 << dist(engine) << '\n';
    }

    if (outputStreamSelectionSort04) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamSelectionSort04 << dist(engine) << ',';
      }
      outputStreamSelectionSort04 << dist(engine) << '\n';
    }

    if (outputStreamSelectionSort05) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamSelectionSort05 << dist(engine) << ',';
      }
      outputStreamSelectionSort05 << dist(engine) << '\n';
    }

    if (outputStreamSelectionSort06) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamSelectionSort06 << dist(engine) << ',';
      }
      outputStreamSelectionSort06 << dist(engine) << '\n';
    }

    if (outputStreamSelectionSort07) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamSelectionSort07 << dist(engine) << ',';
      }
      outputStreamSelectionSort07 << dist(engine) << '\n';
    }

    if (outputStreamSelectionSort08) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamSelectionSort08 << dist(engine) << ',';
      }
      outputStreamSelectionSort08 << dist(engine) << '\n';
    }

    if (outputStreamSelectionSort09) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamSelectionSort09 << dist(engine) << ',';
      }
      outputStreamSelectionSort09 << dist(engine) << '\n';
    }

    if (outputStreamSelectionSort10) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamSelectionSort10 << dist(engine) << ',';
      }
      outputStreamSelectionSort10 << dist(engine) << '\n';
    }

    if (outputStreamHeapSort01) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamHeapSort01 << dist(engine) << ',';
      }
      outputStreamHeapSort01 << dist(engine) << '\n';
    }

    if (outputStreamHeapSort02) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamHeapSort02 << dist(engine) << ',';
      }
      outputStreamHeapSort02 << dist(engine) << '\n';
    }

    if (outputStreamHeapSort03) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamHeapSort03 << dist(engine) << ',';
      }
      outputStreamHeapSort03 << dist(engine) << '\n';
    }

    if (outputStreamHeapSort04) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamHeapSort04 << dist(engine) << ',';
      }
      outputStreamHeapSort04 << dist(engine) << '\n';
    }

    if (outputStreamHeapSort05) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamHeapSort05 << dist(engine) << ',';
      }
      outputStreamHeapSort05 << dist(engine) << '\n';
    }

    if (outputStreamHeapSort06) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamHeapSort06 << dist(engine) << ',';
      }
      outputStreamHeapSort06 << dist(engine) << '\n';
    }

    if (outputStreamHeapSort07) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamHeapSort07 << dist(engine) << ',';
      }
      outputStreamHeapSort07 << dist(engine) << '\n';
    }

    if (outputStreamHeapSort08) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamHeapSort08 << dist(engine) << ',';
      }
      outputStreamHeapSort08 << dist(engine) << '\n';
    }

    if (outputStreamHeapSort09) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamHeapSort09 << dist(engine) << ',';
      }
      outputStreamHeapSort09 << dist(engine) << '\n';
    }

    if (outputStreamHeapSort10) {
      for (int counter = 0; counter < integers.front() - 1; counter++) {
        outputStreamHeapSort10 << dist(engine) << ',';
      }
      outputStreamHeapSort10 << dist(engine) << '\n';
    }

    integers.erase(integers.begin());
    output_streams.erase(output_streams.begin());
  }

  return 0;
}
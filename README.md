# Heap and Selection sort

[![CMake](https://github.com/Algorithms-and-Data-Structures-2021/semester-work-heap-and-selection-sort/actions/workflows/cmake.yml/badge.svg)](https://github.com/Algorithms-and-Data-Structures-2021/semester-work-heap-and-selection-sort/actions/workflows/cmake.yml)

## Краткое описание семестрового проекта:

- _Heap and Selection sort_
- _HeapSort - это усовершенствованный SelectionSort, но работающей с кучей (heap). Selection Sort - простой и примитивный алгоритм сортировки. Суть алгоритма достаточно проста, мы берем первый элемент массива, и бегаем по всему оставшемуся массиву в поисках числа меньше нашего первого элемента. Когда мы пробегаем весь массив, если меньшее число найдено — меняем его местами с первым элементом. После этого мы вибраем второй элемент, и все повторяется, пока для каждого элемента мы не пройдем оставшуюся часть массива._
- _Selection Sort не имеет обширного применения из-за медленной работы, но его улучшенная версия (Heap Sort) активно применяется в ядре Linux._
- _Heap Sort в худшем времени работает за `O(Nlog(N)`. Selection Sort в худшем случае работает за `O(N^2)`._
- _Интересный факт: Пирамидальная сортировка была предложена Дж. Уильямсом в 1964 году._



## _Имя команды и единственный участник_:

### 本物の忍

| Фамилия Имя           | Вклад (%)       | Титул                 |
| :---:                 |   :---:         |  :---:                |
| Semyon Sokolov        | 100             |  火影                  |

**Девиз команды**
> Сильнейшая боль — это когда никто не нуждается в тебе.

## Структура проекта

**Проект состоит из следующих частей:**

- [`src`](src)/[`include`](include) - реализация алгоритмов сортировки (исходный код и заголовочные файлы);
- [`benchmark`](benchmark) - контрольные тесты производительности алгоритмов сортировки
- [`dataset`](dataset) - наборы данных для запуска контрольных тестов и их генерация;

## Системные требования
**Рекомендованные системные требования:**

_1. С++ компилятор c поддержкой стандарта C++17 (например, _GNU GCC 8.1.x_ и выше)._

_2. Система автоматизации сборки _CMake_ (версия _3.12.x_ и выше)._

_3. Рекомендуемый объем оперативной памяти - не менее 12 ГБ._

_4. Свободное дисковое пространство объемом ~ 1,5 ГБ (набор данных для контрольных тестов)._

## Сборка и запуск

_Инструкция по сборке проекта, генерации тестовых данных, запуска контрольных тестов и примеров работы._

### Пример (Windows)

#### Сборка проекта

Склонируйте проект к себе на устройство через [Git for Windows](https://gitforwindows.org/) (либо используйте
возможности IDE):

```shell
git clone https://github.com/Algorithms-and-Data-Structures-2021/semester-work-heap-and-selection-sort.git
```

#### Генерация тестовых данных

Генерация тестового набора данных в
формате [comma-seperated values (CSV)](https://en.wikipedia.org/wiki/Comma-separated_values):

Инструкция по запуску скрипта:

| Номер шага                                                                            | Папки и файлы                  |
| :---                                                                                  | :---                           |
| 1) Перейдите в папку генерации набора данных.                                         | `dataset`                      |
| 2) Откройте файл.                                                                     | `generate_csv_dataset.cpp`     |
| 3) Запустите метод.                                                                   | `main()`                       |
| 4) В папке dataset есть папка data                                                    | `data`                         |
| 5) После запуска скрипта, в этих папках появятся папки, внутри которых будут наборы данных для контрольного тестирования. | `heap_sort`, `selection_sort`, `01`, `02`, `03`, и т.д.`                         |


Тестовые данные представлены в CSV формате (см.
[`dataset/data/dataset-example.csv`](dataset/data/dataset-example.csv)):

```csv
623,24,35,231,2,10,64,463,4,893
```

По названию папок, например: `/dataset/data/heap_sort`, можно понять, что здесь хранятся наборы данных для контрольного тестирования пирамидальной сортировки. В папке есть дополнительные папки: `01,02,03 и т.д.`, в каждой из них лежат наборы для контрольного тестирования.
Названия файлов `100.csv`, `100000.csv`, `1000000.csv` и т.д. хранят информацию о размере набора данных (т.е. количество элементов).

#### Контрольные тесты

Для запуска контрольных тестов необходимо предварительно сгенерировать или скачать готовый набор тестовых данных.

**Примечание**. Если вы не хотите "захламлять" проект большим объёмом данных, вы можете скачать наборы данных для контрольного тестирования, перейдя по ссылке
на [Google Drive](https://drive.google.com/drive/folders/1mg_DmqhdkrtKUdoVOUDAT9cI-Wi18Pyi).

##### Список контрольных тестов:

| Название                        | Описание                                               | Метрики         |
| :---                            | ---                                                    | :---            |
| `heap_sort_benchmark`           | сортировка массива определенного размера                            | _время_         |
| `selection_sort_benchmark`      | сортировка массива определенного размера                | _время_         |


##### Инструкция по запуску контрольных тестов:

| Номер шага                                                                                                                                                                      | Папки и файлы                                                                                                  |
| :---                                                                                                                                                                            | :---                                                                                                           |
| 1) Перейдите в папку с контрольными тестами.                                                                                                                                    | `benchmark`                                                                                                    |
| 2) В папке есть 2 файла с контрольными тестами, по названию понятно, какую сортировку они тестируют. Откройте один из них.                                                           | `heap_sort_benchmark.cpp`, `selection_sort_benchmark.cpp`                                                      |
| 3) Запустите метод                                                                                                                                                              | `main()`. Из-за большого объема данных, метод выполняется довольно долго, пожалуйста, подождите какое-то время.|
| 4) В папке result есть 2 файла с метриками. После прогона одного из контрольных тестов, файл, который привязан к определенному бенчмарку, отобразит результаты тестирования.    | `result`, `heapSortResults.csv`, `selectionSortResults.csv`                                                    |  

_В файлы записываются 4 числа через запятую:_
1) Номер набора данных (от 01 до 10)
2) Количество данных в наборе (от 100 до 1 млн)
3) Номер прогона на наборе данных (от 1 до 10)
4) Затраченное время (измеряется в наносекундах)

## Источники

[Википедия (Heap Sort)](https://ru.wikipedia.org/wiki/Пирамидальная_сортировка)

[Информативная англоизычная статья (Heap Sort)](https://www.programiz.com/dsa/heap-sort)

[Статья на русском языке (Heap Sort)](https://medium.com/@dimko1/алгоритмы-сортировки-heapsort-796ba965018b)

[Википедия (Selection Sort)](https://ru.wikipedia.org/wiki/Сортировка_выбором)

[Информативная англоизычная статья (Selection Sort)](https://www.geeksforgeeks.org/selection-sort/)




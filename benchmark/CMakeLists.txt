# Здесь вы можете создавать свои исполняемые файлы (executables)
# исполянемый файл = контрольный тест

# Пример создания контрольного теста (исполняемого файла) под названием demo_benchmark.
# Исходный код предоставлен в файле demo_benchmark.cpp текущей директории.
add_executable(heap_sort_benchmark heap_sort_benchmark.cpp)
add_executable(selection_sort_benchmark selection_sort_benchmark.cpp)

# Примечание: Не забываем подключить (прилинковать) библиотеку ${PROJECT_NAME} с реализацией структуры данных.
target_link_libraries(heap_sort_benchmark PRIVATE project_paths project_warnings ${PROJECT_NAME})
target_link_libraries(selection_sort_benchmark PRIVATE project_paths project_warnings ${PROJECT_NAME})

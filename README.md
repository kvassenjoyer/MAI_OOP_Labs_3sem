## Описание репозитория
В данном репозитории представлены мои решения лабораторных работ курса Объектно-ориентированного программирования МАИ

Мои решения задач не претендуют на clean code, оптимальность по времени или по памяти. Они просто хорошо работают и выполняют поставленную задачу

Прошу не злоупотреблять содержимым данного репозитория, если вы проходите аналогичный курс лабораторных работ в МАИ

## Сборка лабораторных работ
Для сборки проектов всех выполненных лабораторных работ, Вам понадобится исполнить следующие команды из корневой папки репозитория `MAI_OOP_Labs_3sem/` :

```
cd build
cmake ..
make
sudo make install
```

Для сборки проекта лишь N-ой лабораторной  работы, Вам понадобится закомментировать или удалить строки вида 
`add_subdirectory(labK)` для всех K != N в файле `MAI_OOP_Labs_3sem/CMakeLists.txt`  

## Проверка работы лабораторных работ

Для запуска бинарного файла N-ой лабораторной работы, Вам понадобится:
1) Произвести сборку N-ой лабораторной работы в соответствии с инструкцией из предыдущей главы 
2) Исполнить следующую команду из папки `MAI_OOP_Labs_3sem/build/` :

```
./labN/labN_exe
```

Для запуска бинарного файла тестов Google Test N-ой лабораторной работы, Вам понадобится:
1) Произвести сборку N-ой лабораторной работы в соответствии с инструкцией из предыдущей главы 
2) Исполнить следующую команду из папки `MAI_OOP_Labs_3sem/build/`:

```
./labN/labN_tests
```


## Материалы лабораторных работ

<details>

<summary>
Лабораторная работа №1
</summary>

- [Условие (вариант 15)](https://drive.google.com/file/d/1IL5MEZCluRGTYTdhtJik5vJMmG_sDyi9/view?usp=sharing)
- [Решение](https://github.com/kvassenjoyer/MAI_OOP_Labs_3sem/blob/main/lab1/src/lab1.cpp)
- [Тесты](https://github.com/kvassenjoyer/MAI_OOP_Labs_3sem/blob/main/lab1/tests/test_lab1.cpp)
- [Отчет](https://github.com/kvassenjoyer/MAI_OOP_Labs_3sem/blob/main/lab1/report.md)

</details>

<details>

<summary>
Лабораторная работа №2
</summary>

- [Условие]()
- [Решение]()
- [Тесты]()
- [Отчет]()

</details>

<details>

<summary>
Лабораторная работа №3
</summary>

- [Условие]()
- [Решение]()
- [Тесты]()
- [Отчет]()

</details>

<details>

<summary>
Лабораторная работа №4
</summary>

- [Условие]()
- [Решение]()
- [Тесты]()
- [Отчет]()

</details>

<details>

<summary>
Лабораторная работа №5
</summary>

- [Условие]()
- [Решение]()
- [Тесты]()
- [Отчет]()

</details>

<details>

<summary>
Лабораторная работа №6
</summary>

- [Условие]()
- [Решение]()
- [Тесты]()
- [Отчет]()

</details>

<details>

<summary>
Лабораторная работа №7
</summary>

- [Условие]()
- [Решение]()
- [Тесты]()
- [Отчет]()

</details>

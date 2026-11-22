# Academy C++ Lab · CP01

**Тема:** функции, условия, циклы и векторы. Сначала выполните создание ветки по инструкции в Academy Hub. Все решения сохраняются в отдельной ветке практической работы.

## 1. Запуск

Из корня репозитория в терминале Codespaces:

```bash
cmake -S academy-lab -B academy-lab/build
cmake --build academy-lab/build
./academy-lab/build/academy_demo
ctest --test-dir academy-lab/build --output-on-failure
```

Заготовка компилируется. Тест `smoke` уже проходит. Три теста упражнений ожидаемо не пройдут до реализации функций.

## 2. Практика

Редактируйте `academy-lab/src/exercises.cpp`. Сигнатуры находятся в `include/exercises.hpp`.

| Функция | Задание | Пример |
|---|---|---|
| `sum_positive` | Сумма строго положительных элементов, результат `int64_t` | `{-3,5,0,2}` → `7` |
| `count_even` | Количество чётных элементов; учитывайте ноль и отрицательные числа | `{-4,3,0,8}` → `3` |
| `clamp_value` | Ограничение числа диапазоном `[lower, upper]`, где `lower <= upper` | `(19,0,10)` → `10` |

Запускайте тесты после каждого изменения. Проверьте пустой вектор, отрицательные значения и границы диапазона. Не меняйте тесты и workflow.

## 3. Сдача

```bash
git branch --show-current
git add academy-lab/src/exercises.cpp
git commit -m "Complete CP01"
git push
git rev-parse HEAD
```

Скопируйте полный SHA коммита в Academy Hub. GitHub Actions проверит текущий коммит. Учитель увидит ссылку на снимок решения и результаты тестов. Остановите Codespace после работы, чтобы экономить выделенные часы.

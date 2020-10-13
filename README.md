

2 лабораторная. Тема: Создание базовых объектов.

Вариант 4: Создать класс «Автомобиль» со следующими данными: id – уникальный номер, name – ФИО владельца, mileage – пробег. Создать дружественный класс «СТО», в котором реализовать метод установки пробега автомобиля.

Общие требования к выполнению работы:

1. Создать проект консольной программы.

2. Создать базовый класс согласно заданию. Все данные класса описать в закрытой секции, все методы класса реализовать как открытые. Создать конструктор по умолчанию и конструктор инициализации. Создать деструктор.

3. Вне класса должна быть создана дружественная функция, предназначенная для вывода данных объекта на экран.

4. Для задания значений уникальных номеров использовать или статические члены класса или особую инициализацию членов класса.

5. Установка значений переменных должна иметь проверку на реальный диапазон значений.

6. В головной функции создать несколько одиночных экземпляров базового класса. Обработать все экземпляры базового класса с помощью заданного метода дружественного класса. Вывести содержимое переменных экземпляров классов на экран до и после этой обработки.

7. В головной функции создать массив экземпляров базового класса. Обработать все элементы массива с помощью заданного метода дружественного класса. Вывести содержимое переменных элементов массива на экран до и после этой обработки.


3 лабораторная

Тема: Перегрузка функций и операторов. Динамическое создание объектов и массивов объектов.

Общие требования к выполнению работы

1. Создать проект консольной программы.

2. Создать базовый класс согласно заданию. Все данные класса описать в закрытой секции, все методы класса реализовать как открытые.

3. Создать конструктор по умолчанию, конструктор инициализации и конструктор копирования. Конструкторы должны выделять память для данных динамически с использованием оператора new.

4. Создать деструктор, который будет освобождать динамически выделенную память с помощью оператора delete.

5. Создать в классе методы доступа к одиночному элементу данных объекта (по чтению и записи), отображения данных на экран, преобразования данных объекта (например, сортировки).

6. Перегрузить операторы-члены класса (согласно варианту):

сравнения (> или <), причем только для однотипных операндов,сложение строки и объекта +=;

7. Перегрузить дружественные функции-операторы (согласно варианту)::

-- унарные арифметические (--);

8. В головной функции создать несколько экземпляров базового класса. Провести вызовы перегруженных функций и операторов. Вывести результаты на экран.

9. В головной функции динамически создать и проинициализировать экземпляр базового класса. Динамически создать его копию. Выполнить преобразование данных экземпляра базового класса. Вывести содержимое обоих экземпляров на экран. Удалить экземпляры.

10. В головной функции динамически создать массив экземпляров класса. Каждый из них проинициализировать. Выполнить доступ к элементам данных экземпляров классов. Удалить массивы.

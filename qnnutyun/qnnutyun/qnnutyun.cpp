// qnnutyun.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <string>

class Cell {

private:
    std::string m_value;

public:
    int toInt()
    {
      int INT;
      INT =  stoi(m_value);
      return INT;
    }
    double toDouble()
    {
        double DOUBLE;
        DOUBLE = stod(m_value);

        return DOUBLE;
    }
    std::string toString()
    {
        return m_value;
    }
    void set_value_(int value)
    {
        m_value = value;
    }
    void set_value(double value)
    {
        m_value = value;
    }
    void set_value(std::string value)
    {
        m_value = value;
    }
};


class Spreadsheet {

private:
    Cell** m_cell;
   

public:
    void setCellAt(int row, int col, std::string str)
    {
        Cell cell_obj;
        cell_obj.set_value(str);
        m_cell[row][col] = cell_obj;

        std::cout << m_cell <<" ";
    }
    void setCellAt(int row, int col, Cell* c) {  
        //for (int i = 0; i < col; ++i)
        //{
            m_cell[row] = c;
            std::cout << m_cell[row] << " ";
        //}
    }
    Cell getCellAt(int row, int col)
    {
        return m_cell[row][col];
    }
    Spreadsheet(int r, int c) {
        m_cell = (Cell**)new Cell*[r];
        for (int i = 0; i < r; ++i)
        {
            m_cell[i] = (Cell*)new Cell[c];
        }
    }
   

};


int main()
{
    Spreadsheet sp(2,2);
    sp.setCellAt(0, 0, "yyy");
    sp.setCellAt(0, 1, "4");
   
 
}

















// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

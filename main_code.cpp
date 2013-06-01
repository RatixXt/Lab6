/** 
\file main_code.cpp 

@brief ќчередь с приоритетом
Ќиже приведен интерфейс класса очереди с приоритетами, который функционирует следующим образом.

¬ очередь могут быть добавлены элементы, каждому элементу при добавлении присваиваетс€ один из трех уровней приоритета (low, normal, high)

Ёлементы из очереди извлекаютс€ в соответствии с их приоритетами (сначала извлекаютс€ элементы с приоритетом high, потом normal, потом low), элементы с одинаковыми приоритетами извлекаютс€ из очереди в пор€дки их поступлени€.

 */
#include <iostream>
#include <cstdlib>

#include "Queuewithpriority.h"

using namespace std;

int main(void)
{
    cout << "Test class" << endl;
    QueueWithPriority queue;
    QueueElement qe("l_nya1", LOW);
    queue.putElement(qe);
    queue.putElement(QueueElement("n_nya1", NORMAL));
    queue.putElement("n_nya2", NORMAL);
    queue.putElement("h_nya1", HIGH);
    queue.putElement("h_nya2", HIGH);
    queue.putElement("n_nya3", NORMAL);
    queue.putElement("h_nya3", HIGH);
    queue.putElement("l_nya2", LOW);

    queue.print_queue();
	cout <<"\nFirst element"<< endl;
    cout << queue.getElement() << endl;

	return 0;
}
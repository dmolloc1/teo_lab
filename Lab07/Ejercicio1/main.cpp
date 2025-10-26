#include <QCoreApplication>
#include <QVector>
#include <algorithm>
#include <ctime>
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QVector<int> num_list;//En este vector se almacenara los números creados

    srand(time(NULL));
    for(int i = 0; i < 20; i++){
        num_list.push_back(rand()%50);
    }
    fprintf(num_list);
    int impar = count_if(num_list.begin() , num_list.end(), [](int n){

        return n < 20 && (n % 2 != 0);
    });
    fprintf("\n %d", n);
    return a.exec();
}

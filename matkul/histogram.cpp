#include <iostream>

using namespace std;
 
class Histogram{
    private:
        int *array;
        int size;
    public:
        Histogram(int *array, int size){
            this->array = array;
            this->size = size;
        }
        void print(){
            for (int i = 0; i < this->size; i++){
                cout << this->array[i] << " ";
            }
            cout << endl;
        }
        void printHistogram(){
            int biggest = 0;
            for (int i = 0; i < this->size; i++){
                if (this->array[i] > biggest){
                    biggest = this->array[i];
                }
            }
            for (int i = 0; i < this->size; i++){
                for (int j = 0; j < this->array[i]; j++){
                    if (j == this->array[i] - 1){
                        cout << "#";
                    } else {
                        cout << "#  ";
                    }
                }
                cout << endl;
            }
            for (int i = 1; i <= biggest; i++){
                if ( i <= 9){
                    cout << i << "  ";
                } else {
                    cout << i << " ";
                }
            }
        }
};

int main() {
    int array[] = {20,13,2,32,8,10};
    int size = sizeof(array)/sizeof(array[0]);
    Histogram histogram(array, size);
    histogram.print();
    histogram.printHistogram();
    cout << endl;
    system("pause");
    return 0;
}
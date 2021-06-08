private:
int real1;
int imaginary1;

public:
//void number(int real1,int imaginary1){
ComplexNumbers(int real1, int imaginary1)
{
    this->real1 = real1;
    this->imaginary1 = imaginary1;
}
void plus(ComplexNumbers c)
{
    int sum1 = this->real1 + c.real1;
    int sum2 = this->imaginary1 + c.imaginary1;
    real1 = sum1;
    imaginary1 = sum2;
}

//   void plus(ComplexNumbers const &c2){

void multiply(ComplexNumbers c)
{

    int a = (this->real1 * c.real1) - (this->imaginary1 * c.imaginary1);
    int b = (this->real1 * c.imaginary1) + (this->imaginary1 * c.real1);
    this->real1 = a;
    this->imaginary1 = b;
}
void print()
{
    cout << this->real1 << " "
         << "+"
         << " "
         << "i" << this->imaginary1 << endl;
}

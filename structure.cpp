struct book
{
    int bookid;
    char title[20];
    float price;
};

void main()
{
    book b1={100,"c++ by shubham",450.0};
    book b2,b3;
    b2.bookid=101;
(b2.title,"c++ made easy");
    b2.price=300.0;

    b3=b2;
}
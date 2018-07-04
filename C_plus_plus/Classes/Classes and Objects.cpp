class Student
{
    int i,m[5];
    public:
    void input();
    int calculateTotalScore();
};
void Student :: input()
{
    for(i=0;i<5;++i)
    {
        cin>>m[i];
    }
}
int Student :: calculateTotalScore()
{int sum=0;
    for(i=0;i<5;++i)
    {
        sum=sum+m[i];
    }
 return sum;
}

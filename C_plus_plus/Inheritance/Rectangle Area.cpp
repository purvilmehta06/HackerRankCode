class Rectangle
{
    public:
    int l,b;
    void display();
};
class RectangleArea : public Rectangle
{
    public:
    void read_input();
    void display();
};
void RectangleArea :: read_input()
{
    cin>>l>>b;
} 
void Rectangle :: display()
{
    cout<<l<<" "<<b<<endl;
}
void RectangleArea :: display()
{
cout<<l*b;    
}

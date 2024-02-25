
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle{
    public:
    int height,width;
    virtual void display(){
        cout<<height<<" "<<width<<endl;
    }
};
class RectangleArea:public Rectangle{
    public:
     void read_input()
     {
         cin>>Rectangle::height;
         cin>>Rectangle::width;
     }
     void display() override
     {
         cout<<width*height<<endl;
     }
};

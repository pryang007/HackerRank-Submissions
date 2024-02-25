

// Write your Student class here
class Student{
    int scores[5];
    public:
    void input()
    {
        for(int i=0;i<5;i++)
            cin>>this->scores[i];
    }
    int calculateTotalScore(){
        int sum=0;
        for(int i=0;i<5;i++)
        {
            sum+= this->scores[i];
        }
        return sum;
    }
};



const int MAX_SIZE=20;
using namespace std;

template<typename T> class stack
{
    private:
    T data[MAX_SIZE];
    int size;
    
    
    public:
    stack()
    {
        size=0;
    };
    
    void push(T val)
    {
        try
        {
            if(size==MAX_SIZE) throw overflow_error("Called push on full stack");
            data[size]=val;
            size++;
        }
        catch(overflow_error &exp){cout<<exp.what();}
    }

    void pop()
    {
        try
        {
            if(size==0) throw out_of_range("Called pop on empty stack");
            size--;
        }
        catch(out_of_range &exp)
        {
            std::cerr << exp.what() << '\n';
        }
        
    }

    void pop_two()
    {
        // try
        // {
            if(size==0) throw out_of_range("Called pop_two on empty stack");
            else if(size==1) throw out_of_range("called pop_two on a stack of size 1");
            else {size-=2;}
        // }
        // catch(out_of_range &exp){std::cout<<exp.what();}
    }

    T top()
    {
        if(size==0) throw underflow_error("Called top on empty stack");
        return data[size-1];
    }

    bool empty()
    {
        if(size==0) return true;
        else return false;
    }


};
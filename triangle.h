
class Triangle
{
  public:
        Triangle();
        Triangle(int s, char bdchar = '#', char fchar = '*');

        int GetSize();
        int Perimeter();
        double Area();

        void Grow();
        void Shrink();

        void SetBorder(char bdchar);
        void SetFill(char fchar);


        void Draw();
        void Summary();

private:
        int size;
        char bordchar;
        char fillchar;
};


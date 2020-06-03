/*
  Source: https://www.hackerrank.com/challenges/classes-objects/problem
*/



// Write your Student class here

class Student
{
public:

    Student()
    {
        my_id = obj_counter;
        obj_counter++;
        scores.resize(obj_counter);
    }

    // read scores from stdin and save them to your scores
    void input()
    {
        int tmp;
        for( int i = 0; i < 5; ++i)
        {
            cin >> tmp;
            scores[my_id].push_back(tmp);
        }
    }

    int calculateTotalScore()
    {
        int sum = 0;
        for( auto& num: scores[my_id] )
        {
            sum += num;
        }
        return sum;
    }

private:
    vector<vector<int>> scores;
    static int obj_counter;
    int my_id;
};

int Student::obj_counter = 0;

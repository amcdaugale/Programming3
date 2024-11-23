/**
 * author: Alec McDaugale
 * 
 * This program uses 2 threads to count up to 100 then counts back down to 0.
 */

// Max number.
#define MAX  20

#include <iostream>
#include <thread>

using namespace std;

/**
 * Function to count up from 0 to MAX.
 */
void t_count_up()
{
    for (int i = 0; i <= MAX;  i++)
    {
        cout << "Thread: " << this_thread::get_id() << " Value: " << i << endl;
    }
}

/**
 * Function to count down from MAX to 0.
 */
void t_count_down()
{
    for (int i = MAX; i >= 0;  i--)
    {
        cout << "Thread: " << this_thread::get_id() << " Value: " << i << endl;
    }
}

int main()
{
    // Create two threads.
    thread t1(t_count_up);
    thread t2(t_count_down);
    // Join the threads to this thread.
    t1.join();
    t2.join();

    // Return success.
    return 0;
}
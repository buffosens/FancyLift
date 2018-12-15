#include <iostream>

#include "House.h"
#include "Lift.h"
#include "Command.h"

#include <unordered_map>
#include <unistd.h>

int main()
{
    /*
    Lift fancyLift;

    unsigned int level = fancyLift.getCurrentLevel();

    House pentHouse(fancyLift, 4);

    while(1)
    {
        // lift process
        unsigned int ( = 1000000;

        usleep(microseconds);
        std::cout << "The current level is: " << level << std::endl;
    }
    */

    std::unordered_map<unsigned int, Command*> mymap;
    Command cmd1(function::IRIS_ON, readWrite::READ, 1);
    Command cmd2(function::IRIS_OFF, readWrite::READ, 2);
    Command cmd3(function::SET_UART, readWrite::WRITE, 3);

    mymap = {{1, &cmd1}, {2, &cmd2}, {3, &cmd3}};

  //  std::unordered_map<std::string,std::string> mymap;
  //  mymap = {{"Australia","Canberra"},{"U.S.","Washington"},{"France","Paris"}};

//    std::cout << "mymap contains:";
 //   for ( auto it = mymap.begin(); it != mymap.end(); ++it )
 //       std::cout << " " << it->first << ":" << it->second;
 //   std::cout << std::endl;

    std::cout << "mymap contains:";
    for ( auto it = mymap.begin(); it != mymap.end(); ++it )
        std::cout << " " << it->first << ":" << it->second->index;
    std::cout << std::endl;

    /*
     * std::cout << "mymap's buckets contain:\n";
    for ( unsigned i = 0; i < mymap.bucket_count(); ++i) {
        std::cout << "bucket #" << i << " contains:";
        for ( auto local_it = mymap.begin(i); local_it!= mymap.end(i); ++local_it )
            std::cout << " " << local_it->first << ":" << local_it->second;
        std::cout << std::endl;
    }
*/

    return 0;
}
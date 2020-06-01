#Graph Search Based Path Planner for 2D grid

This is a helper project for a larger project being compiled. 

check the main.cpp in test for the execution.
The input hard coded is the vector of coordinates of obstacles that would be generated by a sensor such as LIDAR, RADAR or depth camera, using which a discretized 2D occupancy grid is generated on which Graph Search is done currently by Dijkstra's algorithm. A* search will be implemented in the final project. 

## Usage
To get the program working, run the build script after cloning the repo. 

```bash
chmod +x build.sh
./build.sh
```

## Test
To test the code, add a vector of coordinates in test/main.cpp and build again. 
TO run the binary,
```bash
bin/check
```
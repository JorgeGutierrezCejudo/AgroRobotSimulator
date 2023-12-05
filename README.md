# Agro robots simulators ( AgroSim+Gazebo)

In this branch you will find the Agro_SIM package integrated with Gazebo. All maps avalaible in the main menu are genereted the Gazeboś version. 

To use this repository you should note that you need to install Gurobi Optimizer.
If you already have Guroby installed and licensed, you must clone the repository and compolite with catkin_make

The simulations have been performed with the following software features:
-	Ubuntu 20.04
-	ROS Noetic
-	Python 3.7
-	C++ 17
-	Gurobi 9.3
-	Unity 2023.1.11f1

To start a simulation:

```
   roscd patrolling_sim;python3 start_experiment.py
```
To simulate with Gazebo you need to select Gazebo as simulator.

It is important that is not a final version, there are some features and thing that we are developing rigth now.

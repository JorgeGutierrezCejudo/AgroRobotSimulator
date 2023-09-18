# Agro robots simulators ( Unity-Integration)

In this branch you will find the Agro_SIM package integrated with Unity, through the package designed by Unity Tecnology ROS- TCP-Endpoint. To configure Unity correctly and to integrate the necessary packages see: [Unity-Robotics-Hub](https://github.com/Unity-Technologies/Unity-Robotics-Hub.git).


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
To start a the conexion with Unity:

```
   roslaunch ros_tcp_endpoint endpoint.launch tcp_ip:=127.0.0.1 tcp_port:=10000
```

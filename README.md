# Agro robots simulators 

We present a distributed multi-agent architecture for an autonomous fleet route coordination of AMRs (autonomous vehicles) called “AGROBOTS”. AGROBOTS system will be composed of AMR route coordination units (RGU) designed as collaborative agents. These agents will collaboratively and dynamically (re)assign tasks and optimize their routes in a distributed way through real-time inter-RGU local information exchange and cooperation. Such a multi-agent system (MAS) is scalable, has fewer levels of authority, and does not suffer from the “single point of failure” problem seen in centralized systems

We base our work on this package: [Patrolling_Sim](https://github.com/davidbsp/patrolling_sim.git).

![Captura de pantalla 2023-04-27 a las 11 14 17](https://user-images.githubusercontent.com/129373210/234817280-e5cc1ea9-c68b-4ca5-8256-cfc70bc539ce.png)

The simulations have been performed with the following software features:
-	Ubuntu 20.04
-	ROS Noetic
-	Python 3.8
-	C++ 17
-	Gurobi 9.3

To start a simulation:

```
   roscd patrolling_sim;python3 start_experiment.py
```

## Possible failures during installation 
### 1-Ros packages
This ros package makes use of the **move_base**, **amcl** and **map_server** packages, so if you don't have them installed, you can install them through: 

```
   sudo apt install ros-noetic-move-base
```
```
   sudo apt install ros-noetic-amcl
```
```
   sudo apt install ros-noetic-map-server
```
As a side note, this simulator is developed by installing the ros noetic desktop full version. In case another type of installation was used, other ros packages may be required.

### 2-Pythom 3.8
It seems that in the pythom3.8 installation there is some problem with the includes. If during the installation there is a bug about them, check these issues: [initconfig.h](https://bugs.python.org/issue40642)



To use this repository you should note that you need to install Gurobi Optimizer.
If you already have Guroby installed and licensed, you must clone the repository and compolite with catkin_make

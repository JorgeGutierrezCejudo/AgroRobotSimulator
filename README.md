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

## Algorithms included

Included in this package is the ATA algorithm, which is included in a completely different way from the others. This is only a pythom script (named solver.py) , which uses Gurobi as an optimiser. The communication between the simulator and the algorithm is shown in the following image:

![Captura de pantalla de 2023-10-02 10-41-10](https://github.com/JorgeGutierrezCejudo/AgroRobotSimulator/assets/129373210/3489c25d-2619-443c-9ac3-97a2e813992f)


The GrafoCostInfo.txt file will give the algorithm information about the number of tasks, the number of robots and the cost of reaching each task. On the other hand, the file solution.txt gives the solution to the problem, i.e. the route to be taken by each robot.We must take into account that for ATA node 0 is the deposit or zone where the robots end and start, so we have to take this fact into account when generating the graphs.Moreover, this algorithm is designed for the Grid map.

To use this repository you should note that you need to install Gurobi Optimizer.If you already have Guroby installed and licensed, you can use ATA algortihm.



## Rviz textured quads

This ROS package has only been used for the Grid map. This package adds a plugin to RVIZ to be able to include an image. For more information: [rviz_textured_quads](https://github.com/lucasw/rviz_textured_quads.git)

If you want to start it, open a terminal and enter:
```
roscd rviz_textured_quads/tests; python3 display_images_test.py
```
## AgROS1.5 Review Summary 

- **Innovative Integration**: Integrates Agrobots SIM, Unity-3D, ROS, SPADE3, and FIVE frameworks. `{r, echo=TRUE} # Innovative Integration Analysis` 

- **Dynamic Task Allocation**: Showcases capability for dynamic allocation and environmental responsiveness. `{r, echo=TRUE} # Dynamic Task Allocation Analysis` 

- **Real-World Applicability**: Strong commitment to real-world scenarios evidenced in vineyard use-case. `{r, echo=TRUE} # Real-World Applicability Analysis` 

- **Comprehensive Component Integration**: Well-integrated system with detailed explanations of key components. `{r, echo=TRUE} # Component Integration Analysis` 

### Enhancing AgROS1.5: Steps Towards Greater Usability and Efficiency 

 

**Key Strengths**: 

- **Integration and Realism**: AgROS1.5's integration of advanced frameworks enhances simulation realism. `{r integration_analysis()}` 

- **Dynamic Adaptability**: Proficient in real-time task allocation and environmental responsiveness. `{r dynamic_adaptability_check()}` 

- **Practical Application**: Commitment to real-world scenarios demonstrated in vineyard use-case. `{r real_world_applicability_study()}` 

 

  

 

**Areas for Improvement**: 

- **Simplification for Accessibility**: Streamline technical content for broader audience comprehension. `{r content_simplification('AgROS1.5')}` 

- **User Interface Enhancement**: Focus on user-friendly interfaces for diverse technological expertise. `{r ui_enhancement('rural_technology')}` 

- **Resource Optimization**: Address Unity3D's high resource demands for wider usability. `{r resource_optimization('Unity3D')}` 

- **Community Support for Unity3D**: Develop comprehensive resources for Unity3D integration in robotics. `{r create_community_support('Unity3D')}` 

- **Scalability Testing**: Validate system performance under various environmental conditions. `{r scalability_tests('environmental_conditions')}` 

- **Integration with Agricultural Systems**: Enhance compatibility with existing agricultural technologies. `{r system_integration('agricultural_technologies')}` 

- **ROS2 Integration Roadmap**: Plan for ROS2 integration to improve system robustness. `{r roadmap_creation('ROS2_integration')}` 

- **Real-World Testing**: Emphasize field testing with agricultural practitioners. `{r real_world_testing('agrirobot_fleets')}` 

**Conclusion**: AgROS1.5 marks a significant advancement in agrirobot fleet simulation, with potential for substantial impact in sustainable agriculture. 

Number of literals: 49
Constructing lookup tables: [10%] [20%] [30%] [40%] [50%] [60%] [70%] [80%] [90%] [100%]
Post filtering unreachable actions:  [10%] [20%] [30%] [40%] [50%] [60%] [70%] [80%] [90%] [100%]
Have identified that bigger values of (battery robot1) are preferable
Have identified that bigger values of (battery robot2) are preferable
[01;34mNo analytic limits found, not considering limit effects of goal-only operators[00m
None of the ground temporal actions in this problem have been recognised as compression-safe
Initial heuristic = 26.000
b (24.000 | 12.002)b (23.000 | 12.002)b (22.000 | 12.002)b (21.000 | 12.002)b (20.000 | 14.002)
Resorting to best-first search
b (25.000 | 12.002)b (24.000 | 12.002)b (23.000 | 12.002)b (22.000 | 12.002)b (21.000 | 12.002)b (20.000 | 14.002)b (19.000 | 14.002)b (17.000 | 20.003)b (14.000 | 22.003)b (13.000 | 22.003)b (11.000 | 28.004)b (8.000 | 30.004)b (7.000 | 30.004)b (5.000 | 36.005)b (4.000 | 38.005)b (3.000 | 38.005)b (2.000 | 38.006)b (1.000 | 38.006)
; Plan found with metric 38.006
; States evaluated so far: 1528
; Time 1.02
0.000: (undock robot1 wp_dock1)  [2.002]
0.000: (undock robot2 wp_dock1)  [38.006]
0.001: (goto_waypoint robot1 wp_dock1 wp_dock1)  [2.000]
0.001: (goto_waypoint robot2 wp_dock2 wp1)  [2.000]
2.001: (dock robot1 wp_dock1)  [0.001]
2.002: (greet_person robot2 wp1 person3)  [10.000]
2.002: (greet_person robot2 wp1 person2)  [10.000]
2.002: (greet_person robot2 wp1 person1)  [10.000]
12.002: (goto_waypoint robot2 wp1 wp4)  [2.000]
14.003: (guide_person robot2 wp1 wp4 person3)  [6.000]
20.003: (goto_waypoint robot2 wp4 wp3)  [2.000]
22.004: (guide_person robot2 wp1 wp3 person2)  [6.000]
28.004: (goto_waypoint robot2 wp3 wp2)  [2.000]
30.005: (guide_person robot2 wp1 wp2 person1)  [6.000]
36.005: (goto_waypoint robot2 wp2 wp_dock1)  [2.000]
38.005: (dock robot2 wp_dock1)  [0.001]

 * All goal deadlines now no later than 38.006

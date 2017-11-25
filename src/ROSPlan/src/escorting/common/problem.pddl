(define (problem testdomain_task)
(:domain testdomain)
(:objects
    person1 person2 person3 - person
    robot1 robot2 - robot
    wp_dock1 wp_dock2 wp1 wp2 wp3 wp4 wp5 - waypoint
)
(:init
    (allowed_goto_waypoint robot1)
    (allowed_goto_waypoint robot2)
    (arrived person1)
    (arrived person2)
    (arrived person3)
    (destination_waypoint wp2)
    (destination_waypoint wp3)
    (destination_waypoint wp4)
    (dock_at wp_dock1)
    (dock_at wp_dock2)
    (docked robot1)
    (docked robot2)
    (free_person person1)
    (free_person person2)
    (free_person person3)
    (general_waypoint wp_dock1)
    (general_waypoint wp_dock2)
    (general_waypoint wp1)
    (general_waypoint wp2)
    (general_waypoint wp3)
    (general_waypoint wp4)
    (general_waypoint wp5)
    (greeting_waypoint wp1)
    (person_at person1 wp1)
    (person_at person2 wp1)
    (person_at person3 wp1)
    (robot_at robot1 wp_dock1)
    (robot_at robot2 wp_dock2)
    (= (battery robot1) 100)
    (= (battery robot2) 100)
    (= (charging-rate robot1) 1.05)
    (= (charging-rate robot2) 1.05)
    (= (consumption-rate robot1) 0.9)
    (= (consumption-rate robot2) 0.9)
    (= (velocity robot1) 3)
    (= (velocity robot2) 2)
)
(:goal (and
    (person_guided person1)
    (person_guided person2)
    (person_guided person3)
    (person_greeted person1)
    (person_greeted person2)
    (person_greeted person3)
    (person_at person1 wp2)
    (person_at person2 wp3)
    (person_at person3 wp4)
    (docked robot1)
    (docked robot2)
)))

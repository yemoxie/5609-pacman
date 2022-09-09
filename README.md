<strong>1 Player Control Scheme</strong>

Building the control scheme for the game is an important task. A great control scheme can make or break a game, and the following describes the control scheme of our game:

Arrow keys to navigate Pac-Man.

Through X and Y coordinates to achieve character control. Pressing "(↑)" changes Pac-Man's position to (X, y-1). Similarly, press down (↓), left (←) and right (→) to perform corresponding operations. Second, control Pac-Man's movements so that he moves automatically. We used the same judgment method, when Pac-Man's north =1 and there is no obstacle in the up (north) direction, Pac-Man moves one unit forward. Similarly, when south, west, and east each have a value of "1", Pac-Man moves one unit forward in the corresponding direction.

<strong>2 Unique Scripting Implementations</strong>

Ghosts are random actions that first detect a moving direction and then randomly generate one within the moving direction.

Firstly, the direction of the ghost is judged, and the integer variable Vychody is used to record the direction of the ghost. A ghost can only advance if there are no obstacles in its current direction. Depending on the size of the variable Vychody, one, two, or three of the four directions are determined. If there are two or more directions, one of them will be randomly generated. If there is only one direction, select that direction.

Motion Regulation of Ghosts

Just like Pac-Man

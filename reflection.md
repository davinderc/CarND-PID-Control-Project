In this project, I implemented parts of a rudimentary PID controller. Without taking into account all the aspects of controller design, the system performance was very poor.
Two controllers were implemented here: one was a PI controller to maintain speed using the throttle control; the other was a PID controller to steer the car.

The appropriate way to implement a controller would be to use system performance requirements and implement the controller according to these.
This could include settling time, steady state error, peak overshoot percentage, and other characteristics. In fact, one of the fundamentals
of controller design is choosing an appropriate sampling rate, which could not be easily accomplished in this project, due to the simulator's implementation.

However, I intend to attempt to use the computer system's timestamps to redesign the controller in the future and make it robust to
being simulated on other computer systems.

The PID gains were chosen in the following fashion:

* The proportional gain was chosen first to have reasonably fast response, without too much oscillation. This was apparent to me from
working with the root locus method in my control theory class, since a proportional controller will begin to present overshoot 
and eventually oscillate once the gain is set too high. 

* The derivative gain was set next, by trial and error, slowly increasing to stop any overshoot. This is due to the fact that the derivative gain
acts on sudden changes in the error (output - reference).

* The integrator gain was not absolutely necessary, but it's addition decreases steady state error to zero, and in this case it
helped smooth out performance a bit and decrease the risk of potential off-roading. It was chosen to be really small.

Twiddle was not used to obtain the PID parameters, since I felt it was highly inappropriate to use pure trial and error for a controller that has significant
amounts of math and theory behind it.

The speed was kept low at 20 MPH, since increasing the set speed would require retuning all of the PID parameters again. However,
with appropriate tuning methods, one can achieve significantly better results, even at high speeds.

It is notable that at some points in the track, there appeared to be errors in the reference line, which caused the car to veer off
dangerously towards the edge of road. It is possible that this was intenionally programmed to create some difficulties for the controller designer.

A video of the controller operating on the simulator is available here: 
https://youtu.be/xa6czOAuU98

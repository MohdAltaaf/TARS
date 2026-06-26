# TARS
# Making It Real: TARS from interstellar
## Why : 
Ever since i watched interstellar, this particular robot has stuck with me. Its ability to make light of dire situations with its "sarcasm" setting 😭. There are a lot of other robots that i find cool, for instance Tony Stark's robotic arm named "Dummy" Thats on my To do list too, But coming back to TARS I thought it would be better to make it as im only starting out, a robotic arm with AI would be quite a bold choice for a first hardware project.
## How :
So originally TARS has 4 segment as you should be able to see in the images below, but having 4 segments is really complex, like say i want to rotate the rightmost segment, for that i would need a motor in the segment next to it , and when the motor rotates, it will not only rotate the rightmost segment, but would also rotate the segment that it is in, depending on which segment is heavier/ harder to rotate.
- So im Simplifying TARS a LOT (Upgrades incoming in future for sure), like only having 3 segments (combining the middle two segments) and having all the components in it, so that when the motors try to rotate the left or right segment, they are rotated easily, also while TARS was autonomous my version would be running via remote control from a phone (with bluetooth or wifi connectivity).
- I thought it would be cool to have a PID controller for its balancing so theres that too, I deliberately placed the accelerometer at the bottom of the middle section as **velocity = angular velocity* radius from point of rotation** .
- thus the reading of accelrometer would be the Least amplified when its closest to the point of rotation i.e. the ground.
## What will be used : 
- I would be using foam sheets for the body so that its all lighweight and easy to make too, I dont have a 3D printer ( that would be sooo convinient omg) 
- two metal gear Servos.
- an Accelerometer
- An Arduino nano 
- two 18650 li-ion batteries
- two Oled Screens for basic prewritten dialogues and emotes.
- Wiring Obviously
- A soldering kit would be a blessing. 
- 5V buck convertor
## The challenges :
What I feel is that this project is more mechanically challenged that it is in terms of coding and electronics.
TARS had a lot of ways to traverse, it would either start rolling by becoming sort of a wheel, or would have a pull itself forward by first lifting the outermost segments then placing them forward and then pulling them back.
To achieve that type of motion i would need one linear actuator per servo , to lift the outer segments up and then place them down when needed, that would make it unecessarily complicated.
- **what I did to dodge that is I Made the Legs slightly longer than the main middle segment.**
With that in rest position to be stable the segments should either be forward or behind the main segment. 
- I Pull both segments back slowly and the main segment moves forward ( due to high static friction between the legs and ground the main albiet heavier body is forced to move), then to have another stroke both the legs are SNAPPED foward VERY FAST, this causes the legs to go back in front while pushing the main segment back minimally as the kinetic friction is less and not strong enough to push back the main body. 
- Then I pull back to move forward again, and so the loop continues. 
- For Turning its the same stick-slip mechanism BUT only one leg at a time , thus TARS pivots about the resting leg!
I found that pretty elegant. Although **I DO plan to fully recreate TARS with Raspberry Pi and a custom AI agent and make it fully autonomous**, It would have to wait until i first make this proof of concept.
### Thank you for reading, Support me if you too find TARS cool and would like to help me start.
### Peace OUT ✌

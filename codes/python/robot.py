from cs1robots import *
create_world()
edit_world()
a = Robot()
a.set_pause(.1)

while a.front_is_clear():
    while a.on_beeper():
        a.pick_beeper()
    a.move()

while a.carries_beepers():
    a.drop_beeper()

from cs1graphics import *
world1 = Canvas(w = 600, h = 400, title = "Straight Lines?", bgColor = (250, 220,220))
cons = 80

def circles(body):
    rad = cons/2
    for i in range(5):
        y = 2 * i * rad + rad
        for j in range(8):
            x = 2 * j * rad + rad
            this_rad = rad
            for k in range(6):
                cir = Circle(this_rad, Point(x,y))
                cir.setFillColor((250, 220 - k*20,220 - k*20))
                body.add(cir)
                this_rad -= 7

def diagonal1(body):
    a = -35
    b = a + cons
    c = 365
    d = c + cons
    for i in range(10):
        a += cons
        c +=  cons
        x = Point(a,400)
        y = Point(c,0)
        line = Path(x,y)
        line.setBorderColor('red')
        line.setBorderWidth(2)
        body.add(line)

        b -= cons
        d -=  cons
        x = Point(b,400)
        y = Point(d,0)
        line = Path(x,y)
        line.setBorderColor('red')
        line.setBorderWidth(2)
        body.add(line)

def diagonal2(body):
    a = 600
    b = a - cons
    c = 200
    d = c - cons
    for i in range(10):
        a -= cons
        c -=  cons
        x = Point(a,400)
        y = Point(c,0)
        line = Path(x,y)
        line.setBorderColor('red')
        line.setBorderWidth(2)
        body.add(line)

        b += cons
        d +=  cons
        x = Point(b,400)
        y = Point(d,0)
        line = Path(x,y)
        line.setBorderColor('red')
        line.setBorderWidth(2)
        body.add(line)

circles(world1)
diagonal1(world1)
diagonal2(world1)

#world2 = Canvas(w = 600, h = 400, title = "Straight Lines?", bgColor = (250, 220,220))
#circles(world2)
#diagonal1(world2)
#diagonal2(world2)

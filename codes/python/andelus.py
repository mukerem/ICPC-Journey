from cs1graphics import *
from time import sleep

Andelus=Canvas()
Andelus.setTitle("አንደሉስ አለም")

# variables -------------------------------------------------------------

direct = 'right'
right = None
left = None
Marvel = None
gon = 0
kum = 0
hapi = None
kuami=[]
agdim=[]
beeperContainer = {}
beepers=0
mar={}
muz=0
rem=None
time=0.1

# colours -----------------------------------------------------------

color=['khaki',"tomato","chartreuse3","cyan","Khaki1","firebrick2",
       "paleturquoise3","aquamarine4","brown","skyblue","blanchedalmond",
       "gray","blanchedalmond","goldenrod","sienna"]

# size --------------------------------------------------------------------

def canvas(w=10,h=10):
    hor=(w+2)*40
    ver=(h+2)*40
    Andelus.setWidth(hor)
    Andelus.setHeight(ver)
    grid(w,h)
    wall(hor,ver)
    numbers(w,h)

# load canvas -------------------------------------------------------------

def loadCanvas(w=10,h=10):
    go()
   
# create Mar----------------------------------------------------------
def createMar(n):
    global beeperContainer,beepers
    beepers=Layer()
    p=Point(gon,kum)
    b=Circle(12,p)
    b.setFillColor(color[n%15])
    b.setBorderColor(color[n%15])
    beepers.add(b)
    text=str(n)
    t=Text(text,10,p)
    beepers.add(t)
    Andelus.add(beepers)
    beeperContainer[(gon,kum)]=beepers


# delete mar ----------------------------------------------------------
def deleteMar():
    rem=beeperContainer[(gon,kum)]
    Andelus.remove(rem)

# check on mar ----------------------------------------------------------
def onMar():
    key = searchMar()
    if key == 0:
        return False
    else:
        return True

# check carry mar ----------------------------------------------------------
def carryMar():
    if muz==0:
        return False
    else:
        return True

#pick Mar ----------------------------------------------------------
def pickMar(n=1):
    for i in range(n):
        pick()

def pick():
    global muz
    key = searchMar()
    if onMar():
        deleteMar()
        if key==1:
            del mar[(gon,kum)]
        else:
            createMar(key-1)
            mar[(gon,kum)]=key-1

        muz+=1
    else:
        raise RuntimeError('ሃሃሃ... የለማ ምኑን ታነሳለህ')

        
#drop Mar ----------------------------------------------------------
def dropMar(n=1):
    for i in range(n):
        drop()

def drop():
    global muz
    if carryMar():
        key = searchMar()
        if key!=0:
            deleteMar()
        mar[(gon,kum)]=key+1
        createMar(key+1)
        muz-=1
    else:
       raise RuntimeError('ሳታሸክመኝ ልታስጥለኝ ያምርሃል ')

        
    
# search Mar position ---------------------------------------------------------- 
def searchMar():
    for i in mar:
        if i==(gon,kum):
            return mar[i]
    return 0
        

# wall ----------------------------------------------------------
def wall(hor,ver):
    wall=Layer()
    p=Polygon(Point(40,40),Point(hor-40,40),Point(hor-40,ver-40),Point(40,ver-40))
    p.setBorderWidth(5)
    p.setBorderColor((0,150,100))
    wall.add(p)
    Andelus.add(wall)
    wallList(hor,ver)
    

# numbers ----------------------------------------------------------
def numbers(w,h):
    hor=(w+2)*40
    ver=(h+2)*40
    horizontalNumbers=Layer()
    for i in range(1,w+1):
        num=str(i)
        p=Point(20+40*i,ver-20)
        t=Text(num,12,p)
        horizontalNumbers.add(t)
        
    Andelus.add(horizontalNumbers)
     
    verticalNumbers=Layer()
    for i in range(1,h+1):
        num=str(i)
        p=Point(20,ver-40*i-20)
        t=Text(num,12,p)
        verticalNumbers.add(t)
        
    Andelus.add(verticalNumbers) 

# lines or grids ----------------------------------------------------------
def grid(w,h):
    hor=(w+2)*40
    ver=(h+2)*40
    horizontalGrid=Layer()
    for i in range(1,w+1):
        p=Point(20+40*i,ver-40)
        q=Point(20+40*i,40)
        t=Path(p,q)
        t.setBorderColor((50,250,250))
        horizontalGrid.add(t)
        
    Andelus.add(horizontalGrid)
     
    verticalGrid=Layer()
    for i in range(1,h+1):
        p=Point(40,ver-40*i-20)
        q=Point(hor-40,ver-40*i-20)
        t=Path(p,q)
        t.setBorderColor((50,250,250))
        verticalGrid.add(t)
        
    Andelus.add(verticalGrid) 

#man ----------------------------------------------------------
def rim():
    dorm35=Layer()
    idq=Ellipse(10,13,Point(0,0))
    idq.setFillColor("chocolate")
    dorm35.add(idq)
    cascade=Rectangle(12,15,Point(0,15))
    cascade.setFillColor("gray2")
    dorm35.add(cascade)
    bigo=Path(Point(-2,25),Point(-2,35))
    bigo.setBorderWidth(3)
    dorm35.add(bigo)
    harmonic=Path(Point(2,25),Point(2,35))
    harmonic.setBorderWidth(3)
    dorm35.add(harmonic)
    return dorm35    

# left hand ----------------------------------------------------------
def leftHand():
    left=Path(Point(-7,10),Point(-10,15),Point(-7,20))
    left.setBorderWidth(2)
    return left

#right hand  ----------------------------------------------------------
def rightHand():
    right=Path(Point(7,10),Point(10,15),Point(7,20))
    right.setBorderWidth(2)
    return right
    


# anis ----------------------------------------------------------
def anis(x=1,y=1,direction='right',beepers=0):
    
    global direct
    global left
    global right
    global Marvel
    global hapi
    global gon,kum,muz
    
    w=Andelus.getWidth()
    h=Andelus.getHeight()

    gon = 40*x+20
    kum = h-20-40*y
    muz += beepers
    
    Marvel=Layer()
    
    Napi=rim()
    Marvel.add(Napi)
    left=leftHand()
    right=rightHand()
    if  direction=='right':
        direct='right'
        Marvel.add(right)
    elif  direction=='left':
        Marvel.add(left)
        direct='left'
    elif direction=='up':
        direct='up'
    else:
        direct='down'
        Marvel.add(left)
        Marvel.add(right)

    Marvel.setDepth(40)
    Andelus.add(Marvel)

    Marvel.moveTo(40*x+20,h-40-40*y)
    hapi=Marvel
    return Marvel

#direction left ----------------------------------------------------------
def directionLeft():
    Marvel.rotate(180)

#direction up ----------------------------------------------------------
def directionUp():
    Marvel.rotate(-90)

#direction down ----------------------------------------------------------
def directionDown():
    Marvel.rotate(90)


# move ----------------------------------------------------------
def go(n=1):
    for i in range(n):
        hid()
        

def hid():
    global gon,kum,time

    v=10+int(100*time)
    s =40.0/v
    if not frontClear():
        raise RuntimeError('እውር እያየህ አትሄድም')
        return 
    if direct=='right':
        for i in range(v):
            Marvel.move(s,0)
        gon+=40
    elif direct=='left' :
        for i in range(v):
            Marvel.move(-s,0)
        gon-=40
    elif direct=='up':
        for i in range(v):
            Marvel.move(0,-s)
        kum-=40
    else:
        for i in range(v):
            Marvel.move(0,s)
        kum+=40

#turn left ----------------------------------------------------------
def turnleft():
    global direct,Marvel
    if direct=='right':
        Marvel.remove(right)
        direct='up'
    elif direct=='left':
        Marvel.add(right)
        direct='down'
    elif direct=='up':
        Marvel.add(left)
        direct='left'
    else:
        Marvel.remove(left)
        direct='right'
    

#turn right ----------------------------------------------------------
def turnright():
    global direct,Marvel
    if direct=='right':
        Marvel.add(left)
        direct='down'
    elif direct=='left':
        Marvel.remove(left)
        direct='up'
    elif direct=='up':
        Marvel.add(right)
        direct='right'
    else:
        Marvel.remove(right)
        direct='left'

#turn around ----------------------------------------------------------
def turnaround():
    global direct,Marvel
    if direct=='right':
        Marvel.add(left)
        Marvel.remove(right)
        direct='left'
    elif direct=='left':
        Marvel.remove(left)
        Marvel.add(right)
        direct='right'
    elif direct=='up':
        Marvel.add(right)
        Marvel.add(left)
        direct='down'
    else:
        Marvel.remove(right)
        Marvel.remove(left)
        direct='up'
    

# wall list ----------------------------------------------------------
def wallList(hor,ver):
    global kuami,agdim
    length=hor/40-2
    for i in range(length):
        agdim.append((60+i*40,40))
        agdim.append((60+i*40,ver-40))

    length=ver/40-2
    for i in range(length):
        kuami.append((40,60+i*40))
        kuami.append((hor-40,60+i*40))

# front is clear ----------------------------------------------------------
def frontClear():
    global kuami,agdim
    if direct=='right':
        for i in kuami:
            if (gon+20,kum)==i:
                return False
        return True
    elif direct=='left':
        for i in kuami:
            if (gon-20,kum)==i:
                return False
        return True 
    elif direct=='up':
        for i in agdim:
            if (gon,kum-20)==i:
                return False
        return True
    else:
        for i in agdim:
            if (gon,kum+20)==i:
                return False
        return True


# right is clear ----------------------------------------------------------
def rightClear():
    global kuami,agdim
    if direct=='up':
        for i in kuami:
            if (gon+20,kum)==i:
                return False
        return True
    elif direct=='down':
        for i in kuami:
            if (gon-20,kum)==i:
                return False
        return True 
    elif direct=='left':
        for i in agdim:
            if (gon,kum-20)==i:
                return False
        return True
    else:
        for i in agdim:
            if (gon,kum+20)==i:
                return False
        return True



# left is clear ----------------------------------------------------------
def leftClear():
    global kuami,agdim
    if direct=='down':
        for i in kuami:
            if (gon+20,kum)==i:
                return False
        return True
    elif direct=='up':
        for i in kuami:
            if (gon-20,kum)==i:
                return False
        return True 
    elif direct=='right':
        for i in agdim:
            if (gon,kum-20)==i:
                return False
        return True
    else:
        for i in agdim:
            if (gon,kum+20)==i:
                return False
        return True


# delay -------------------------------------------------------------------
def pause(t):
    global time
    time=t
        


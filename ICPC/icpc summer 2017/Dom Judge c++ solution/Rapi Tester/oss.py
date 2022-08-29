from os import system
import sys
import os.path
import time

def end():
    again=input('\n\nDo you want test again [y/n]')
    if again=='y' or again=='Y':
        test()
    else:
        sys.exit()
        

def test():
    input_file=[]
    file=open("samples.txt",'r')
    for i in file:
        s=i.strip()
        sample=s.split()
        input_file.append(sample)
    file.close()
    file_name=input('Enter a file name : ')
    if (file_name[-4:]!='.cpp'):
        file_name+='.cpp'

    if os.path.exists (file_name):
        system("g++ "+file_name+" -o tester.exe")
    else:
        print ('file doesnot exist')
        end()

    time_file=open("time.txt",'r')
    time_limit=int (time_file.read())
    
    for i in input_file:
        _in='../'+i[0]
        _out='../'+i[1]


        
        initial_time=time.clock()
        system("tester.exe<"+_in+">user_solution.txt")
        final_time=time.clock()
        
        if final_time-initial_time > time_limit:
            print ('Time Limit')
            system("rm user_solution.txt")
            system("rm tester.exe")
            end()
        
        correct_answer=open(_out,'r')
        user_answer=open('user_solution.txt','r')

        correct_answer_list=[]
        user_answer_list=[]
    
        for j in correct_answer:
            correct_answer_list.append(j)
        for j in user_answer:
            user_answer_list.append(j)
            
        correct_answer.close()
        user_answer.close()
        
        
        if correct_answer_list==user_answer_list:
            continue
        else:
            print('Wrong')
            system("rm user_solution.txt")
            system("rm tester.exe")
            end()
    print('correct')
    system("rm user_solution.txt")
    system("rm tester.exe")
    end()

    
test()


import os
import shutil 
import random


_dir = "A/"

def get_random_color():
	random_number = random.randint(0,16777215)
	hex_number = str(hex(random_number))
	hex_number ='#'+ hex_number[2:]

	return hex_number

def get_info(name, time_limit=1):
	cl = get_random_color()
	s_name = name[:3]
	s = f"title={name}\nshort_name={s_name}\ntime_limit={time_limit}"+ f"\nballon={cl}"
	return s

for i in os.listdir(_dir):
	c_dir = _dir + i
	_name = i.split("_")[1]
	with open(c_dir+"/info.ini", "w") as f:
		print(get_info(_name), file=f)
	try:
		os.unlink(c_dir+"/testcase/info")
	except FileNotFoundError:
		pass
	try:
		os.rename(c_dir+"/testcase", c_dir+"/secret")
	except FileNotFoundError:
		pass
	shutil.make_archive(_name, 'zip', c_dir)

a = open("country.txt")
country_tuple = open("coubtry_tup.txt", 'w')
country_dict = open("coubtry_dict.txt", 'w')


x = a.readlines()
for i in x:
    b = i.split()
    country_tuple.write("'%s', " % b[3])
    country_dict.write("'%s': '%s', " % (b[3], b[1]))
country_tuple.close()
country_dict.close()
    

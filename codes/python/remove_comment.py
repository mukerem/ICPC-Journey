def removeComment(name):
    file_code = open(name, 'r')
    code = file_code.read()
    file_code.close()
    file_code = open("comment_free_code", 'w')
    # print code
    again = True
    while again:
        if "//" in code:
            index = code.index('//')
            reserve_code = list(code)
            while 1:
                if reserve_code[index] == '\n':
                    code = ''.join(reserve_code)
                    break
                else:
                    reserve_code[index] = ''
                index += 1
        elif "/*" in code and '*/' in code and code.find('/*') < code.find('*/') - 1:
            
            first_index = code.index('/*')
            last_index = code.index('*/') + 2
            reserve_code = list(code)
            for index in range(first_index, last_index):
                reserve_code[index] = ''
            code = ''.join(reserve_code)
        else:
            again = False
    file_code.write(code)
    file_code.close()
    # print code
"""
name="input"#name = raw_input()
removeComment(name)
"""

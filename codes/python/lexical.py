from remove_comment import removeComment
name="input"#name = raw_input()
removeComment(name)
file_code = open("comment_free_code", 'r')
code = file_code.read()
line = len(code.split('\n'))
code = code.split()
#print code
#code = code.replace("\n", ' ').split()
keyword_file = open("keywords_list", 'r')
keyword_list = [i.strip() for i in keyword_file]
constant = open("constant", 'w')
keyword = open("keyword", 'w')
identifier = open("identifier", 'w')
special_character = open("special_character", 'w')

def keyword_or_identifier(text):
    if text in keyword_list:
        keyword.write("%s " % text)
    else:
        identifier.write("%s " % text)
for text in code:
    try:
        float(text)
        constant.write("%s " % text)
    except ValueError:
        word= ''
        for ch in text:
            if ch=='$' or ch=='_' or ch.isalnum():
                word += ch
            else:
                special_character.write("%s " % ch)
                if unicode(word, 'utf-8').isnumeric():
                    constant.write("%s " % word)
                else:
                    keyword_or_identifier(word)
                word = ''
        if not word == '':
            if unicode(word, 'utf-8').isnumeric():
                constant.write("%s " % word)
            else:
                keyword_or_identifier(word)
                    
constant.close();keyword.close();identifier.close();special_character.close()
constant = open("constant", 'r')
keyword = open("keyword", 'r')
identifier = open("identifier", 'r')
special_character = open("special_character", 'r')
print "constants are:"

print ' '.join(set(constant.read().split()))
print "\n\nkeywords are:"
print ' '.join(set(keyword.read().split()))
print "\n\nidentifiers are:"
print ' '.join(set(identifier.read().split()))
print "\n\nspecial characters are:"
print ' '.join(set(special_character.read().split()))


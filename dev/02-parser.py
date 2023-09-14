# -*- coding: utf-8 -*-
# https://realpython.com/python-sqlite-sqlalchemy/

with open('files/dogs.txt', 'r') as reader:
    dogs = reader.readlines()
    for dog in dogs:
        print(dog)

#with open('files/dogs_write.txt', 'w') as writer:
#    for dog in reversed(dogs):
#        writer.write(dog)

with open('files/dogs_write.txt', 'a') as fl_end:
    fl_end.write('\nhello0!')



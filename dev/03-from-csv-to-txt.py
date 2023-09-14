# -*- coding: utf-8 -*-
import csv

dataset_path = 'datasets/df_arabica_clean.csv'
to_file = 'datasets/arabica.txt'

with open(dataset_path) as ds, open(to_file, 'w') as to_f:
    data = csv.reader(ds, delimiter=',')
    line_count = 0
    title = 'Информация о марках кофе\r\n\r\n'
    to_f.write(title)
    for row in data:
        if line_count:
            content = 'Кофе марки {} произрастает на высоте {} м.\r\n'.format(row[3], row[8])
            content = content + 'Изготавливается методом: {}\r\n'.format(row[19])
            content = content + 'Имеет цвет: {}\r\n\r\n'.format(row[-6])
            to_f.write(content)
        else:
            for r in row:
                print('Column: ' + r)
        line_count = line_count + 1
    to_f.write('\r\nОбработано (' + str(line_count) + ') строк\r\n')

# -*- coding: utf-8 -*-
# https://realpython.com/beautiful-soup-web-scraper-python/
# https://realpython.com/why-close-file-python/
# https://realpython.com/read-write-files-python/
# https://realpython.com/python-sqlite-sqlalchemy/
# https://realpython.com/python-requests/
# https://scrapingclub.com/exercise/detail_basic/
# https://docs.python-guide.org/
# https://runebook.dev/ru/docs/sqlite/cli
# https://pythonru.com/osnovy/sqlite-v-python
# https://dbeaver.io/
# https://realpython.com/python-sockets/
# https://www.sqlitetutorial.net/sqlite-sample-database/
# 7qa-tQn-K2g-mAb pass for free account to this site

import requests
from bs4 import BeautifulSoup as bs


url = 'https://realpython.github.io/fake-jobs/'

page = requests.get(url)
page.encoding = 'utf-8'

soup = bs(page.content, 'html.parser')

results = soup.find(id='ResultsContainer')

job_elements = results.find_all('div',
    class_='card-content')

python_jobs = results.find_all('h2',
    string=lambda text: 'python' in text.lower())

python_job_element = [
    h2_element.parent.parent.parent for h2_element in python_jobs
]

"""

for job_element in job_elements:
    title = job_element.find('h2', class_='title')
    company = job_element.find('h3',
        class_='company')
    location = job_element.find('p',
        class_='location')
    print('Vacancy: ' + title.text.strip())
    print('Company: ' + company.text.strip())
    print('Location: ' + location.text.strip())
    print('\n')
"""
with open('files/python-jobs.txt', 'a') as writer:
    writer.write('\nList of Python vacancies\n')
    for job_element in python_job_element:
        title = job_element.find('h2',
            class_='title').text.strip()
        link_url = job_element.find_all('a')[1]['href'].strip()
        
        line_end = '\n'
        s = line_end + 'Vacancy: ' + title + line_end + 'URL: ' + link_url + line_end + line_end
        
        writer.write(s)


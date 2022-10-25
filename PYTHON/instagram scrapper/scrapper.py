from selenium import webdriver
from selenium.webdriver.firefox.service import Service as FirefoxService
from webdriver_manager.firefox import GeckoDriverManager
from selenium.webdriver.firefox.options import Options as FirefoxOptions
from bs4 import BeautifulSoup
import requests
import time
import uuid

def get_content(link, driver):
    driver.get(link)
    time.sleep(4)
    content = driver.page_source
    return content

def get_content_links(contents):
    links=[]
    soup = BeautifulSoup(contents, 'lxml')
    print(soup.a)
    posts = soup.findAll("div",{"class": "_aabd _aa8k _aanf"})
    for post in posts:
        dict={}
        dict["link"] = "https://www.instagram.com/"+post.a['href']
        dict["imgsrc"] = post.img['src']
        links.append(dict)
    return links
    
def get_post_images(link):
    with open(str(uuid.uuid4())+".png", "wb") as f:
            f.write(requests.get(link["imgsrc"]).content)

    

def main(driver):
    contents = get_content("https://www.instagram.com/ieeesctsb/", driver)
    content_links = get_content_links(contents)
    print(content_links)
    for content_link in content_links:
        get_post_images(content_link)



if __name__ == "__main__":
    options = FirefoxOptions()
    options.headless = True
    driver = webdriver.Firefox(service=FirefoxService(GeckoDriverManager().install()))

    main(driver)
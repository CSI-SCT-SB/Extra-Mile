# python script showing battery details
import psutil
from notifypy import Notify         #to show notification
import time
import os

from sklearn.preprocessing import power_transform

#to get the current path
curr_path=os.getcwd()

#notification params initialisiing
notification = Notify()
notification.title = "Intelligent battery monitor"
print(curr_path+"/pics/icon.png")
notification.icon = "/home/user/Desktop/Battery-monitor/pics/icon.png"



  
# function returning time in hh:mm:ss
def convertTime(seconds):
    minutes, seconds = divmod(seconds, 60)
    hours, minutes = divmod(minutes, 60)
    return "%d:%02d:%02d" % (hours, minutes, seconds)
  



while(True):
    # returns a tuple
    # put inside the while loop to ensure that the current value gets stored in the tuple
    battery = psutil.sensors_battery()
    #temp = psutil.sensors_temperatures()
    #print(temp['acpitz'][0])
    if(battery.percent<25 and battery.power_plugged==False):
        notification.message = "Batery percentage down than set limit!\n Plug in for better battery life."
        notification.audio ="/home/user/Desktop/Battery-monitor/audio/mixkit-wrong-answer-fail-notification-946.wav"
        notification.send()
        time.sleep(300)
    elif(battery.percent>80 and battery.power_plugged==True):
        notification.message = "Batery percentage higher than set limit!\n Plug out for better battery life."
        notification.audio = "/home/user/Desktop/Battery-monitor/audio/mixkit-positive-notification-951.wav"
        notification.send()
        time.sleep(300)
    print("Battery percentage : ", battery.percent)
    print("Power plugged in : ", battery.power_plugged)
    #converting seconds to hh:mm:ss
    print("Battery left : ", convertTime(battery.secsleft))
    time.sleep(2)

import cv2  #opencv 
import numpy #numpy array image is always will be returned in numpy form 
import dlib 

camera =cv2.VideoCapture(0)
face_detector = dlib.get_frontal_face_detector()
facial_points = dlib.shape_predictor("shape_predictor_68_face_landmarks.dat")
is_smiling ="Not smiling"
#face_detector(grayscale)
while True:
    objs,get_web_camera=camera.read() # -> (True/False,[])
    grayscale_img =cv2.cvtColor(get_web_camera,cv2.COLOR_BGR2GRAY)
    face=face_detector(grayscale_img)

    for i in face:
        x1=i.left()
        y1=i.top()
        x2=i.right()
        y2=i.bottom()
        points =facial_points(grayscale_img,i)
        for j in points.parts():
            cv2.circle(get_web_camera,(j.x,j.y),3,(200,0,0),-1)
        lips=abs(points.part(48).x-points.part(54).x)
        jaw=abs(points.part(1).x-points.part(15).x)
        ratio = lips/jaw 
        if ratio >=0.50:
            is_smiling="Smiling"
        else:
            is_smiling="Not smiling"
        cv2.putText(get_web_camera,is_smiling,(50,50),cv2.FONT_HERSHEY_PLAIN,5,(0,0,200),1,cv2.LINE_AA)  
        cv2.rectangle(get_web_camera,(x1,y1),(x2,y2),(0,0,200),3)
    cv2.imshow("Webcapture",get_web_camera)
    if cv2.waitKey(1)==0:
        break

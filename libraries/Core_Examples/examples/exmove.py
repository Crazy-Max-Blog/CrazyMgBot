import os
import shutil
dir_list = os.listdir()
for directory in dir_list:
    if os.path.isdir(directory):
        for dir in os.listdir(directory + "/examples"):
            if os.path.isdir(directory + "/examples/" + dir):
                shutil.move(directory + "/examples/" + dir, directory)
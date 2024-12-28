import os
import shutil
dir_list = os.listdir()
for directory in dir_list:
    dir = directory + "/examples"
    if os.path.isdir(dir):
        shutil.move(dir, "Core_Examples/" + dir)
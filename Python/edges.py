from PIL import Image , ImageFilter

before = Image.open("grass.jpeg")
after = before.filter(ImageFilter.FIND_EDGES)
after.save("edges.jpeg")

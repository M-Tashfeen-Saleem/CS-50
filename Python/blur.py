from PIL import Image , ImageFilter

before = Image.open("grass.jpeg")
after = before.filter(ImageFilter.BoxBlur(10))
after.save("blur.jpeg")

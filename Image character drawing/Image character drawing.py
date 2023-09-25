from PIL import Image
serarr = ['@', '#', '$', '%', '^', '&','*','(',')', '=', ';','!','<','~','>','o','/','-', '+','_','.']
count = len(serarr)

def toText(image_file):
    asd = ''
    for h in range(0, image_file.size[1]):
        for w in range(0, image_file.size[0]):
            r,g,b = image_file.getpixel((w, h))
            gray = int(r*0.299+g*0.587+b*0.114)
            asd = asd + serarr[int(gray/(255/(count-1)))]
        asd = asd + '\r\n'
    return asd

image_file = Image.open(input("Image:"))
image_file = image_file.resize((int(image_file.size[0]*0.9),
    int(image_file.size[1]*0.5)))

tmp = open('tmp.txt', 'a')
tmp.write(toText(image_file))
tmp.close()

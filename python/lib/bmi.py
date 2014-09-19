weight = float(raw_input("Weight(Kg):"))
height = float(raw_input("Height(m):"))
#gender = int(raw_input("You are a (Girl:1/Boy:2):"))

bmi = weight / height ** 2

if bmi < 18.5:
	print "You are too light,gain weight!"
elif 18.5 <= bmi and bmi < 24.0:
	print "Good statue!"
elif 24.0 <= bmi and bmi < 27:
	print "I`m going to call you fatty!"
elif 27.0 <= bmi and bmi < 30.0:
	print "Fatty!"
elif 30.0 <= bmi and bmi < 40.0:
	print "You are too fat!"
else:
	print "ni bu neng pang de geng duo!!!"

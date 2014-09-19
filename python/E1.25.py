while 0 < 1:
	inputInt = int(raw_input("Please input:"))
	if inputInt < 0 or inputInt > 86400:
		print "Please check your input!"
		continue
	else:
		break;

hours = inputInt / 3600
minutes = (inputInt - hours * 3600) / 60
seconds = inputInt - hours * 3600 - minutes * 60

print hours,minutes,seconds


dict={117:["Sricharan","95","5"],115:["Zaid","96.5","3"],130:["Balaji","97","2"],91:["Akash","99","1"],90:["Mayaank","96","4"],121:["Ravi","93","6"],95:["Kalyan","91","7"]}
for rollno,details in sorted(dict.items()):
    # sorted function is used to sord the key values from ascending to descending
    print(rollno, ':', details)
s=0;r=0;
for rollno, details in dict.items():
    r=r+int(details[2])
print("Average rank of students is" , r/7)
for rollno, details in dict.items():
    s=s+float(details[1])
k=round(s/7,2)
print("Average percentage of students is" , k)
# appending new key values to dictionary
dict[119]=["Ganesh","93","8"]
for rollno, details in sorted(dict.items()):
    # sorted function is used to sord the key values from ascending to descending
    print(rollno, ':', details)
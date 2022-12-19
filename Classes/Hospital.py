class Patient:
    def __init__(self, name, age, diagnosis):
        self.name = name
        self.age = age
        self.diagnosis = diagnosis

    def accept(self):
        print(f'patient {self.name} is {self.age} years old')

    def treat(self, name, diagnosis):
        print(f'patient {self.name} with {self.diagnosis} diagnosis is treating')



class Doctor:
    def __init__(self, doctor_name, profession, decide):
        self.doctor_name = doctor_name
        self.profession = profession
        self.decide = decide


    def examine_the_patient(self):
        name = self.doctor_name
        print(f'doctor {name} is examining the patient')

    def treat(self):
        if self.decide == 'o':
            print("do operation ")
        elif self.decide == 'a':
            print("appointing drug ")
        else:
            pass


p = Patient("Jack", 26, "fracture")
p.accept()
s = Doctor('Sahak', 'surgery', 'o')
s.treat()
s.examine_the_patient()


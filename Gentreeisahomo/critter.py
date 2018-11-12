#Gentree Sorrells
#Critter caretaker
#last edited 11/1/2018


class Doggo(object):

    """A virtual pet"""
    def __init__(self, name, hunger = 0, bored = 0):
        self.name = name
        self.hunger = hunger
        self.bored = bored

    def __pass_time(self):
        self.hunger += 1
        self.bored += 1


    #mood
    @property
    def mood(self):
        unhappiness = self.hunger + self.bored
        if unhappiness < 5:
            m = "happy"
        elif 5 <= unhappiness <= 10:
            m = "okay"
        elif 11 <= unhappiness <= 15:
            m = "frustrated"
        else:
            m = "mad"
        return m


#in order to know how it feels


    def talk(self):
        print("I'm", self.name, "and I feel", self.mood, "now.\n")
        self.__pass_time()


#in order to feed it

    def eat(self, food =0):
        food = int(input("How much would you like to feed your pet? "))
        print("Brrrrrp.")
        if 0< food <10:
            food = -1
        elif 10<= food <20:
            food = -2
        elif 20<= food <50:
            food = -3
        else:
            food = -10
        self.hunger += food
        if self.hunger < 0:
            self.hunger = 0
            self.__pass_time()


#in order to play with it

    def play(self, fun =0):
        fun = int(input("How much would you like to play with your pet? "))
        print("Wheee thank you for playing with me!")
        if 0< fun <10:
            fun = -1
        elif 10<= fun <20:
            fun = -2
        elif 20<= fun <50:
            fun = -3
        else:
            fun = -10
        self.bored += fun
        if self.bored < 0:
            self.bored = 0
            self.__pass_time()

#game itself
    def main():
        dog_name = input("What do you want to name your Doggo?: ")
        dog = Doggo(dog_name)
        choice = None
        while choice != "0":
            print \
            ("""
            Dog Caretaker
            0 - Quit
            1 - Listen to your Dog
            2 - Feed your Dog
            3 - Play with your Dog
            """)

            choice = input("Choice: ")
            print()
    
           # exit
            if choice == "0":
                print("Good-bye.")
       # listen to your critter
            elif choice == "1":
                dog.talk()
       # feed your critter
            elif choice == "2":
                dog.eat()
       # play with your critter
            elif choice == "3":
                dog.play()
       # some unknown choice
            else:
                print("\nSorry, but", choice, "isn't a valid choice.")


#run it
    main()


input("\n\nPress the enter key to exit.")

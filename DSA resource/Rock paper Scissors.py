from tkinter import *
from tkinter import messagebox
import random
# For Calculation
def calculate():
    global play
    global user
    global computer
    play.withdraw()
    computer = random.choice(['Rock', 'Paper', 'Scissors'])
    if(user==computer):
        messagebox.showinfo('TIE','IT\'S A TIE')
        main_play()
    elif(user=='Rock' and computer=='Scissors')or(user=='Scissors' and computer=='Paper')or(user=='Paper' and computer=='Rock'):
        messagebox.showinfo('WON','YOU WON ●◡●')
        main_play()
    else:
        messagebox.showinfo('LOST','YOU LOST ಥ_ಥ')
        main_play()

def play_rock():
    global user
    user = "Rock"
    calculate()

def play_paper():
    global user
    user = "Paper"
    calculate()
    
def play_scissors():
    global user
    user = "Scissors"
    calculate()

def play_exit():
    global main
    global play
    play.withdraw()
    main_screen()
    
#Selection Screen
def main_play():
    global main
    global computer
    global play
    main.withdraw()
    play = Tk()
    play.title("SELECT")
    play.geometry("385x500")
    play.configure(bg='lightblue')
    play.resizable(False, False)
    rock_button = Button(play, text= "ROCK",font=("Algerian","35"),padx=55, pady=1,bg="RosyBrown2",command=play_rock)
    rock_button.grid(padx=53,pady=18)
    paper_button = Button(play,text="PAPER",font=("Algerian","35"),padx=38, pady=1,bg="RosyBrown2",command=play_paper)
    paper_button.grid(pady=15)
    scissor_button = Button(play,text="SCISSORS",font=("Algerian","35"),padx=12,pady=1,bg="RosyBrown2",command=play_scissors)
    scissor_button.grid(pady=15)
    exit_button = Button(play,text="EXIT",font=("Algerian","35"),padx=63,pady=1,bg="RosyBrown2",command=play_exit)
    exit_button.grid(pady=15)
    
#Quit Command
def main_quit():
    global main
    quit()

#Main Screen
def main_screen():
    global main
    main = Tk()
    main.title("ROCK PAPER SCISSORS")
    main.geometry("385x500")
    main.configure(bg='lightblue')
    main.resizable(False, False)
    heading_main = Label(main, text= "MAIN MENU",font=("Algerian","38"),anchor="center",bg="lightblue")
    heading_main.grid(padx=50,pady = 25)
    play_button = Button(main,text="PLAY",font=("Algerian","35"),padx=60, pady=20,bg="RosyBrown2",command=main_play)
    play_button.grid(pady=30)
    exit_button = Button(main,text="EXIT",font=("Algerian","35"),padx=69,pady=20,bg="RosyBrown2",command=main_quit)
    exit_button.grid(pady=30)
    main.mainloop()

main_screen()
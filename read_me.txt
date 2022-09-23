- download espeak synthesizer - converts text to speech 

STEP 1
install espeak -> program files -> espeak -> command line -> copy the exe file to your project folder

creatprocess - only works with .exe files
use // in paths wherever single / is present

to get path
open notepad -> open task manager -> right click notepad in it -> file location -> properties -> copy path

to open image ,pdf , and almost any type of file
ShellExecute

to open google
system(); command will be used , put url
OR
make a string, then use shellexecute

NOTE - study all there shell execute , createprocess functions from gfg or somewhere

close browser with TASKKILL command

to play mp3 
mciSendString , but shellexecute should also work
there is play mp3 , pause mp3 ,close mp3 so we can make a small side application , mp3 player


CREATING THE PROGRAM

1. create functions - greetings(with if elses for different times of the day) and datetime
2. create do while loop in main()
3. add if elses with command== conditions
4. ShellExecute
5. createProcess

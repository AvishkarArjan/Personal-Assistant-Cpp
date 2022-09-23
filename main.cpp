#include<iostream>
#include<bits/stdc++.h>
#include<stdlib.h>
#include<ctime>
#include<string.h>
#include<cstdlib>
#include<windows.h>
using namespace std;

void greeting(){
    // time_t tm = time(0);
    // char *dt = ctime(&tm);  not the same thing - check why

    time_t t = time(0);
    tm *dt = localtime(&t);

    if(dt->tm_hour <12){
        cout<<"Good Morning my lord"<<endl;

        string phrase = "Good Morning my lord";     // same as what is being printed
        string command = "espeak \""+ phrase +"\"";
        const char *charCommand = command.c_str();
        system(charCommand);
        //always write these 4 lines whenever you want play it in text to speech format 
    }

    else if(dt->tm_hour>=12 && dt->tm_hour<16){
        cout<<"Good Afternoon my lord"<<endl;
        string phrase = "Good Afternoon my lord";
        string command = "espeak \""+ phrase +"\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (dt->tm_hour>=16 && dt->tm_hour<24){
        cout<<"Good Evening my lord"<<endl;
        string phrase ="Good Evening my lord";
        string command = "espeak \""+ phrase +"\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
}

void datetime(){
    time_t t = time(0);
    char *dt = ctime(&t);

    cout<<"The date and time is : "<<endl<<dt<<endl;
}


int main() 
{

    system("cls");    // aparently it clears the console

    cout<<"PERSONAL ASSISSTANT STATUS : Active"<<endl<<endl;

    string password;
    string command;

    do
    {
        cout<<"****************************************"<<endl;
        cout<<"Enter Password : "<<endl;
        cout<<"****************************************"<<endl;
        string phrase = "enter password to confirm identity";
        string command = "espeak \"" + phrase + "\"";    // maintain space between espeak and backslash
        const char *charCommand = command.c_str();
        system(charCommand);

        getline(cin,password);

        STARTUPINFO startInfo = {0};  // these 2 lines deal with OS , opening browsers apps
        PROCESS_INFORMATION processInfo = {0}; // just remember them

        if(password=="avishkar"){

            cout<<"****************************************"<<endl;
            greeting();

            //NOTE - create a guide to all the command inputs
            do
            {
                cout<<"\nHow can i help you my lord \n\n";
                string phrase = "How can i help you my lord";
                string command = "espeak \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);

                cout<<"Enter Command"<<endl;
                getline(cin,command);
                cout<<endl;

                if(command=="hello" || command=="hi"){
                    cout<<"\n Hello ! \n\n";
                    string phrase = "Hello !";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                else if(command=="date" || command=="time" || command =="what is the time" || command== "what is the date" || command=="date and time"){
                    datetime();
                }

                else if(command=="who are you" || command=="what are you"){
                    cout<<"I am a personal assisstant whose sole purpose is to serve my lord"<<endl;
                    string phrase = "I am a personal assisstant whose sole purpose is to serve my lord";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                else if(command=="open notepad"){
                    cout<<"opening notepad"<<endl;
                    string phrase = "opening notepad";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Windows\\notepad.exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
                }

                else if(command=="open word"){
                    cout<<"opening word"<<endl;
                    string phrase = "opening word";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\\root\\Office16\\WINWORD.EXE"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
                }
                
                else if(command=="open excel"){
                    cout<<"opening excel"<<endl;
                    string phrase = "opening excel";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\\root\\Office16\\EXCEL.EXE"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
                }
                

                else if(command=="open google"){
                    cout<<"opening google"<<endl;
                    string phrase = "opening google";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.google.com");
                }
                
                else if(command=="open youtube"){
                    cout<<"opening youtube"<<endl;
                    string phrase = "opening youtube";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.youtube.com");
                }

                // else if(command=="open image"){
                //     cout<<"opening image"<<endl;
                //     string phrase = "opening image";
                //     string command = "espeak \"" + phrase + "\"";
                //     const char *charCommand = command.c_str();
                //     system(charCommand);
                //     ShellExecute(NULL,"open","sample_image.jpg",NULL,NULL,SW_NORMAL);
                    
                // }

                else if(command=="open image")
                {
                    cout<<"opening image"<<endl;
                    string phrase = "opening image";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL,"open","sampleimage.jpg",NULL, NULL, SW_NORMAL);
                }

                else if(command=="open pdf"){
                    cout<<"opening pdf"<<endl;
                    string phrase = "opening pdf";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand=command.c_str();
                    system(charCommand);
                    ShellExecute(NULL,"open","samplepdf.pdf",NULL,NULL,SW_NORMAL);
                }

                else if(command=="play video"){
                    cout<<"playing video"<<endl;
                    string phrase = "playing video";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand=command.c_str();
                    system(charCommand);
                    ShellExecute(NULL,"open","testvideo.mp4",NULL,NULL,SW_NORMAL);
                }

                else if(command=="play music"){
                    cout<<"playing music"<<endl;
                    string phrase = "playing music";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand=command.c_str();
                    system(charCommand);
                    ShellExecute(NULL,"open","Hotel California.mp3",NULL,NULL,SW_NORMAL);
                }

                else if(command == "guide" || command == "open guide"){
                    cout<<"opening guide"<<endl;
                    string phrase = "opening guide";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL,"open","guide.txt",NULL,NULL,SW_NORMAL);
                }

                else if(command=="exit" ||command=="quit" || command=="bye"){
                    cout<<"Bye bye"<<endl;
                    string phrase = "bye bye";
                    string command = "espeak \""+ phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
                }

                else{
                    cout<<"sorry, i could not understand that"<<endl;
                    string phrase = "sorry, i could not understand that";
                    string command = "espeak \""+ phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                
                
                
            } while (1);
            
            
        }
        
        else{
            cout<<"****************************************"<<endl;
            cout<<"Wrong password, enter correct password";
            cout<<"****************************************"<<endl;

            string phrase = "Wrong password, enter correct password";
            string command = "espeak \""+ phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            
        }

    } while (1);
    

    return 0;
}
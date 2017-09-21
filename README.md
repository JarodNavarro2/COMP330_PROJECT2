# COMP330_Project_1
Repository for Project 1 reagarding the class COMP330

Documentation for the app.
-Main program is called "main_app.cpp". The folder "main" is an archive of our past attempts and collaboration. Also contains previous libraries.
--Libraries and past attemps left there for references.

-To run the program, Cloud 9 is the best thing. The program runs differently if ran on Visual Studio or Xcode. 
--We had different operating systems, so we made the program depend on Cloud 9

*How to use the program*
-The program is a command line. We took inspiration from the git command line.

-Note topics first must be added by typing 'add'
--From there, endless amount of note topics can be added.

-When that is done, you may do what you want with these topics.

-To add notes to a topic, use the command 'add_notes', and then type the topic to write notes on
--This will create a text file that can be read later on.

-To find a topic, use the command '@' following the topic name. Eg. *@Computers*
--This will find the topic, and give you an option to view your notes. If no notes are entered, it will go back to the command line.
----If notes are entered, then it will read the text file. 

-To make a topic unique and make it un-findable with the '@' command, type '!'
--This will prompt you with a choice. To make a topic unique or to list unique topics. *This is the only way to list unique topics*
---To make a topic unique, simply type the topic. If it exists, it will become unique. If not, then it will go back to the command line.
----To list a unique topic again, type '!' one more time. It will then prompt you for the topic. Type the topic, and it will find said topic with the option to view the notes on that topic.

-To link subjects under a global theme, type '^' along with the topic name. 
--This will then show you all of the note topics you added in the beginning (besides unique topics). It will ask which topics you want to link together under a gloabl topic.
---When finished adding topics to a global theme, the '#' command can now be used.

-To list all topics relevant to a global theme use the '#' command along with the global topic name. Eg. *#Computer*
--It will then list all the topics you have put under that global theme.
---It is using the hashtag method that you see on twitter or tumblr. Creating relevance. 
---This makes a mention of a topic. The topic is created by *You*.

-To get a report of EVERYTHING you typed, use the command 'report'
--This will list ALL topics you created and ALl global topics ("#") you created.

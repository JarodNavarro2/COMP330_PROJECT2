# COMP330_Project_2
This is the repository for HootNotes, an application for Project 2 of class COMP 330-Software Development as developed by Team NPU, and this document is intended to act as instruction for running and using this application.

**Contents**
- Our Purpose
- Terms and Conditions
- Installing Qt
- Running HootNotes
- Using HootNotes - User’s Guide
- Issue Resolution

**Our Purpose**

HootNotes has been developed in the hopes of creating a more streamlined method of note-taking and organizing for students. To that end, this program hosts a simple, easy-to-use editor for creating, formatting, and accessing notes to make taking notes and studying from them faster and easier. The program boasts numerous formatting options that help students organize information, such as lists and color coding, and makes the process of formatting quick and easy. When paired alongside cross-platform access and calming music, HootNotes makes studying a hoot.

*Important*

HootNotes was developed with the cross-platform software Qt in the programming language C++. The application can be run on any computer, no matter the operating system, so long as it has Qt installed. Installation instructions are provided in a following section.

If Qt is not installed, or the user does not wish to install Qt, Windows users can instead use *.exe file to run the HootNotes application without Qt. Mac users can run the .dmg file of HootNotes. These are located in zip folders. Be sure to install the correct version. For now, only Mac and Windows users can enjoy HootNotes without Qt being installed.

**Terms and Conditions**

HootNotes is a work-in-progress build, currently at Final Beta. There might be bugs in the program.

**Installing Qt**

In order to run and use HootNotes, the cross-platform IDE Qt must be installed on the computer. In order to do so, complete the following steps:
- Navigate to the Qt website and set up a free account - this will be required to run the installer: https://login.qt.io/login 
- Navigate to the Qt download website: https://www.qt.io/download-qt-for-application-development?hsCtaTracking=f6495db3-4dd2-4b8a-a3d6-13842d799e11%7C742da1e6-34a8-4094-9326-675804775cfe
- From the download site, select either corporate or open-source download.  
  - Open-source is free, while corporate requires payment.
- This selection will direct you to another page with a link to download the installer that the Qt site has determined is most appropriate for your machine. Click the provided link to download the installer, or click the link below it to view all available installers and select the one you want to download.
- Once the installer has downloaded, navigate to it and run it.
- Login to your Qt account when prompted.
- Follow the instructions in the installer to set up where Qt will be stored.
- The installer will provide a list of programs to install. Select “build 5.9.0” from the “Qt” dropdown, “Qt creator” from the “tools” dropdown under the “Qt” dropdown, and an appropriate compiler from the “tools” dropdown under the “Qt” dropdown. 
  - An example compiler on a 32-bit Windows machine would be “minGw x86”
- Accept the terms and conditions.
- Begin the installation
- Please note that Qt is a large application and may take some time to download based on your connection speed

**Running HootNotes**

To run the HootNotes application, open Qt and select “new project”, then “import project” to import the application from the GitHub repository. If the application has been saved to your machine by an application like GitHub Desktop (available for download here: https://desktop.github.com/), open Qt and select “open project”, then navigate to where you stored the application and select it. Select the build kit which you wish to use, then click “run” once the application is opened.

*Important*

When you open the project you might get a warning saying "build directory needs to be in the same directory as source". If that's the case, do the following:
- Select “build”, then “clean all”.
- Select the wrench icon labelled “project” to bring up the build directory. Place the directory in the same folder as the .pro file.
- Select “build”, then “run qmake”.
  - This should make the error disappear.
- Select “build”, then “rebuild all”

When the application opens, a loading screen and a prompt will appear. This prompt will ask the user to accept the terms and conditions of the application, which are stated at the beginning of this document. If the user declines and selects “no”, the application will close. If the user accepts and selects “yes”, the application will finish opening.

**Using HootNotes - User’s Guide**

The following section details the functions of the application HootNotes and how to use them.

The application consists of a text editor topped by a menu bar and a text format bar. There are five options available on the menu bar - File, Edit, Tools, Stressed, and Help, and three options in the format bar - list, font, and font size. The functions of each of these options are detailed below.

File

This option contains basic file formatting tools. Clicking on this button on the menu bar will provide a dropdown menu of the available functions. These are:
- New
  - Keyboard shortcut: CTRL+N
  - This will open a new, blank note in the HootNotes text editor
- Open
  - Keyboard shortcut: CTRL+O
  - This will open the file explorer on the user’s machine and allow them to select a note to open in the HootNotes text editor. 
  - Please note that the application will search for HTML (.html .htm) files by default. Using a dropdown, the user can instead search for plain text (.txt .asc ,v) files
- Save
  - Keyboard shortcut: CTRL+S
  - This will save any changes the user has made to the note that is currently open
- Save As
  - Keyboard shortcut: CTRL+SHIFT+S
  - This will allow the user to choose which location on the machine to save the current note to, what kind of file type to save the note as, and to set the name of the note
  - Please note, it is recommended to save files as HTML (.html .htm) files, which are usually opened through an internet browser, because plain text (.txt .asc ,v) files will not save any type of formatting (color coding, bold, etc.)
  - Users can also save notes as plain text (.txt .asc ,v) files, which can be opened by many editors but do not save any formatting, or as ODT (.odt) files, a type of cross-platform document that may require a special file viewer to open
  - ODT file is the default file type when saving
- Print
  - Keyboard shortcut: CTRL+P
  - This will send the current note to a printer chosen by the user and prints it
- Print Preview
  - No Keyboard Shortcut
  - This will bring up a separate window displaying a preview of what the current note will look like when printed
- PDF
  - Keyboard shortcut: CTRL+SHIFT+P
  - This will save the current note as PDF (.pdf) file to a location and under a name of the user’s choice
- Quit
  - Keyboard Shortcut: CTRL+Q
  - This will exit and close the application. 
  - Please note that all unsaved data will be lost

*Important*

A note on file types. As mentioned above, HootNotes can save files as either plain text (.txt .asc ,v), HTML (.html .htm), or ODT (.odt) files. Plain text files opened in other text editors, like NotePad, are unlikely to display any formatting the user may have implemented when using HootNotes (examples of formatting include text alignment and italics). HTML files will display formatting, but are typically opened via an internet browser and may be difficult to edit outside of HootNotes. Users may need special file viewers to open ODT documents outside of HootNotes and formatting may be changed in the process.

Edit

This option hosts features to help the user when writing notes. Clicking on this button on the menu bar will provide a dropdown menu of the available functions. These are:
- Undo
  - Keyboard shortcut: CTRL+Z
  - This will undo the last action the user implemented. For example, the last few words typed or the last formating choice made
- Redo
  - Keyboard shortcut: CTRL+Y
  - This will restore the last few deleted words or negate the effects of the last use of the “undo” option
- Cut
  - Keyboard shortcut: CTRL+X
  - This will remove selected text from the note, and place the removed text onto the clipboard
- Copy
  - Keyboard shortcut: CTRL+C
  - This will make a copy of the selected text and place it onto the clipboard
- Paste
  - Keyboard shortcut: CTRL+V
  - This will place the latest addition to the clipboard at the location of the cursor or at a selected location
  - It can also be used to overwrite selected text with new text from the clipboard

Tools

This option hosts features to help the user edit their notes. Clicking on this button on the menu bar will provide a dropdown menu of the available functions. These are:
- Bold
  - Keyboard shortcut: CTRL+B
  - This will make any selected text bold, or if no text is selected anything typed after this is selected will be bolded
- Italics
  - Keyboard shortcut: CTRL+I
  - This will make any selected text italic, or if no text is selected anything typed after this is selected will be italicised
- Underline
  - Keyboard shortcut: CTRL+U
  - This will make any selected text underlined, or if no text is selected anything typed after this is selected will be underlined
- Left
  - Keyboard shortcut: CTRL+L
  - This will make any selected text aligned with the left margin, or if no text is selected anything typed after this is selected will be aligned with the left margin
- Right
  - Keyboard shortcut: CTRL+R
  - This will make any selected text aligned with the right margin, or if no text is selected anything typed after this is selected will be aligned with the right margin
- Center
  - Keyboard shortcut: CTRL+C
  - This will make any selected text aligned with the center of the note, or if no text is selected anything typed after this is selected will be aligned with the center of the note
- Justify
  - No keyboard shortcut
  - This will make any selected text aligned with both margins, or if no text is selected anything type after this is selected will be aligned with both margins
- Color
  - Keyboard shortcut: CTRL+J
  - This is used to change the color of text. Selecting it will open a color selection tool where the user can choose from a predetermined selection of colors or use the tool to create their own custom color(s)
Any selected text will be changed to the chosen color, or if no text is selected anything typed after the tool is used will be in the chosen color

Stressed

This option plays a soothing musical piece to calm the user’s nerves and help them focus when note-taking and studying.

How to operate:
- Start playlist - select “play” button
- Stop playlist - select “stop” button
- Pause song - select “pause” button
- Resume song - select “resume” button

*Important*

Currently, due to storage difficulties there is only one song available. More songs will be implemented in the future.

A bug has been encountered where the music may not play. This appears only to affect Windows machines, not Mac machines

Help

This option opens a text file containing an abridged version of this user’s guide, created using the HootNotes application. 

List

This is a dropdown menu in the text format bar. Selecting it allows users to choose to use standard text or create either a bulleted or numbered list and includes several options for each list. If text has been selected, that text will be reformatted. If not text has been selected, everything typed after the user makes a selection will be in the chosen format. Standard, non-list text is selected by default.

Font

This is a dropdown menu in the text format bar. Selecting it allows users to choose what font they wish to use in the current note. A large selection of fonts, comparable to the selection found in Microsoft Word, is available. If text has been selected, it will be changed to the chosen font. If no text has been selected, everything typed after the user has selected a font will be in the chosen font. The font “Arial” is selected by default.

Font Size

This is a dropdown menu in the text format bar. Selecting it allows users to choose what size text they wish to use in the current note. Available sizes have been selected from a range from 6 to 72 point font. If text has been selected, it will be changed to the chosen size. If no text has been selected, everything typed after the user has selected a size will be in the chosen size. The text is set to size 8 by default.

Text Editor

The application hosts a large text editor. This editor works very similarly to simple editors such as NotePad. Users can type into the space whatever they wish to, and use the menu options to edit, format, and save their work. Using the menu options the user can generate a new note to work in or open an existing note, whether that note was created in the HootNotes application or in a separate text editor.

Issue Resolution

The HootNotes application is still in a beta stage of development, meaning that not all bugs have necessarily been discovered or completely fixed. Bugs not that have discovered but not entirely resolved and which do not directly relate to any of the usage options described above can be found in this section, along with known fixes.

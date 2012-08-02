## UTFT - Library
This code is based on Henning Karlsen's work
http://henningkarlsen.com/electronics/library.php?id=51

    This library is the continuation of my ITDB02_Graph, ITDB02_Graph16
    and RGB_GLCD libraries for Arduino and chipKit.
    As the number of supported display modules and controllers started to
    increase I felt it was time to make a single,
    universal library as it will be much easier to maintain in the future.


I (Tony Ivanov) will be trying to adapt this library to work with Arudino Leonardo,
unless someone beats me to it.
Please refer to this post for more info: http://www.tonyivanov.se/posts/124

# UPDATE
I did it! Leonardo now supported!
Use this line to initialize UTFT with leonardo control pins:

    UTFT myGLCD(ITDB28,A5,A4,A3,A2); // Arduino Leonardo


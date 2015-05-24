Alarm
=====

A trivial alarm in C.

Usage
-----
* Compile the program

GCC: ```gcc alarm.c -o alarm -std=c99```

TCC: ```tcc alarm.c -o alarm```

* ```./alarm <time in hours>```

 ```./alarm 10``` would set an alarm after 10 hours.
 ```./alarm``` would set an alarm after 7 hours.

Assumptions
-----------
* VLC would be installed and the binary vlc should be available in the system PATH.
* The file alarm.wav should exist in the same location as the binary alarm.
* alarm.wav should be a valid audio file that VLC understands.

License
-------
This software is released under the MIT license. Please refer to LICENSE for more details.

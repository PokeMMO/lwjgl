[LEGACY] LWJGL - Lightweight Java Game Library
======

> **WARNING**
> 
> This is the repository of the original LWJGL, which is no longer actively maintained. Unless you have released a product that uses LWJGL 2.x, you should probably be looking at [LWJGL 3](https://github.com/LWJGL/lwjgl3).

The Lightweight Java Game Library (LWJGL) is a solution aimed directly at professional and amateur Java programmers alike to enable commercial quality games to be written in Java. 
LWJGL provides developers access to high performance crossplatform libraries such as OpenGL (Open Graphics Library), OpenCL (Open Computing Language) and OpenAL (Open Audio Library) allowing for state of the art 3D games and 3D sound.
Additionally LWJGL provides access to controllers such as Gamepads, Steering wheel and Joysticks.
All in a simple and straight forward API.

Website: [http://legacy.lwjgl.org](http://legacy.lwjgl.org)
Forum: [http://forum.lwjgl.org](http://forum.lwjgl.org)
Bugs/Suggestions: [https://github.com/LWJGL/lwjgl/issues](https://github.com/LWJGL/lwjgl/issues)

Compilation
-----------

LWJGL requires a JDK and Ant installed to compile, as well as your platforms native compiler to compile the JNI.

* ant generate-all
* ant compile
* ant compile_native

ARM Prerequisites
-----------
* Debian recommended over Ubuntu for multiarch
* `apt install gcc-arm-linux-gnueabi g++-arm-linux-gnueabi gcc-arm-linux-gnueabihf g++-arm-linux-gnueabihf gcc-aarch64-linux-gnu g++-aarch64-linux-gnu`
* `dpkg --add-architecture armel`
* `dpkg --add-architecture armhf`
* `dpkg --add-architecture arm64`
* `apt install openjdk-8-jdk-headless:armel libx11-dev:armel libxrandr-dev:armel libxext-dev:armel libxcursor-dev:armel libxxf86vm-dev:armel`
* `apt install openjdk-8-jdk-headless:armhf libx11-dev:armhf libxrandr-dev:armhf libxext-dev:armhf libxcursor-dev:armhf libxxf86vm-dev:armhf`
* `apt install openjdk-8-jdk-headless:arm64 libx11-dev:arm64 libxrandr-dev:arm64 libxext-dev:arm64 libxcursor-dev:arm64 libxxf86vm-dev:arm64`

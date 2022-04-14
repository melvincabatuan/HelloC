#include <stdio.h>

int main(int argc, char *argv[], char *env[])
{
    printf("Number of arguments to the main functions: %d\n", argc);
    int i = 0;
    while (env[i])
    {
        printf("env[%d] = %s\n", i, env[i]);
        i++;
    }
    return 0;
}

/*
$ ./MainArgumentsEnvironment
Number of arguments to the main functions: 1
env[0] = NDK=/home/cobalt/Android/adt-bundle-linux-x86-20131030/android-ndk-r10b
env[1] = SSH_AGENT_PID=3614
env[2] = GPG_AGENT_INFO=/tmp/keyring-Pcs6Uz/gpg:0:1
env[3] = ANDR_SDK=/home/cobalt/Android/adt-bundle-linux-x86_20131030/sdk
env[4] = TERM=xterm
env[5] = SHELL=/bin/bash
env[6] = PYTHON3_PACKAGES_PATH=/usr/local/bin
env[7] = XDG_SESSION_COOKIE=9248f470b1e37ec072ecf3ca0000000a-1420063536.345026-994651448
env[8] = OPCV=/home/cobalt/Android/adt-bundle-linux-x86-20131030/opencv
env[9] = WINDOWID=62914565
env[10] = GNOME_KEYRING_CONTROL=/tmp/keyring-Pcs6Uz
env[11] = ANT_HOME=/home/cobalt/src/apache-ant-1.9.2
env[12] = NDK_HOME=/home/cobalt/Android/adt-bundle-linux-x86-20131030/android-ndk-r10b
env[13] = USER=cobalt
env[14] = LS_COLORS=rs=0:di=01;34:ln=01;36:mh=00:pi=40;33:so=01;35:do=01;35:bd=40;33;01:cd=40;33;01:or=40;31;01:su=37;41:sg=30;43:ca=30;41:tw=30;42:ow=34;42:st=37;44:ex=01;32:*.tar=01;31:*.tgz=01;31:*.arj=01;31:*.taz=01;31:*.lzh=01;31:*.lzma=01;31:*.tlz=01;31:*.txz=01;31:*.zip=01;31:*.z=01;31:*.Z=01;31:*.dz=01;31:*.gz=01;31:*.lz=01;31:*.xz=01;31:*.bz2=01;31:*.bz=01;31:*.tbz=01;31:*.tbz2=01;31:*.tz=01;31:*.deb=01;31:*.rpm=01;31:*.jar=01;31:*.war=01;31:*.ear=01;31:*.sar=01;31:*.rar=01;31:*.ace=01;31:*.zoo=01;31:*.cpio=01;31:*.7z=01;31:*.rz=01;31:*.jpg=01;35:*.jpeg=01;35:*.gif=01;35:*.bmp=01;35:*.pbm=01;35:*.pgm=01;35:*.ppm=01;35:*.tga=01;35:*.xbm=01;35:*.xpm=01;35:*.tif=01;35:*.tiff=01;35:*.png=01;35:*.svg=01;35:*.svgz=01;35:*.mng=01;35:*.pcx=01;35:*.mov=01;35:*.mpg=01;35:*.mpeg=01;35:*.m2v=01;35:*.mkv=01;35:*.webm=01;35:*.ogm=01;35:*.mp4=01;35:*.m4v=01;35:*.mp4v=01;35:*.vob=01;35:*.qt=01;35:*.nuv=01;35:*.wmv=01;35:*.asf=01;35:*.rm=01;35:*.rmvb=01;35:*.flc=01;35:*.avi=01;35:*.fli=01;35:*.flv=01;35:*.gl=01;35:*.dl=01;35:*.xcf=01;35:*.xwd=01;35:*.yuv=01;35:*.cgm=01;35:*.emf=01;35:*.axv=01;35:*.anx=01;35:*.ogv=01;35:*.ogx=01;35:*.aac=00;36:*.au=00;36:*.flac=00;36:*.mid=00;36:*.midi=00;36:*.mka=00;36:*.mp3=00;36:*.mpc=00;36:*.ogg=00;36:*.ra=00;36:*.wav=00;36:*.axa=00;36:*.oga=00;36:*.spx=00;36:*.xspf=00;36:
env[15] = LD_LIBRARY_PATH=/usr/local/lib:
env[16] = XDG_SESSION_PATH=/org/freedesktop/DisplayManager/Session0
env[17] = XDG_SEAT_PATH=/org/freedesktop/DisplayManager/Seat0
env[18] = SSH_AUTH_SOCK=/tmp/keyring-Pcs6Uz/ssh
env[19] = SESSION_MANAGER=local/cobalt:@/tmp/.ICE-unix/3578,unix/cobalt:/tmp/.ICE-unix/3578
env[20] = DEFAULTS_PATH=/usr/share/gconf/gnome-fallback.default.path
env[21] = SYSROOT=/home/cobalt/Android/adt-bundle-linux-x86-20131030/android-ndk-r10b/platforms/android-14/arch-arm/
env[22] = XDG_CONFIG_DIRS=/etc/xdg/xdg-gnome-fallback:/etc/xdg
env[23] = SDK=/home/cobalt/Android/adt-bundle-linux-x86-20131030/sdk
env[24] = PATH=/home/cobalt/Android/adt-bundle-linux-x86-20131030/android-ndk-r10b:/home/cobalt/Android/adt-bundle-linux-x86-20131030/sdk/tools:/home/cobalt/Android/adt-bundle-linux-x86-20131030/sdk/platform-tools:/home/cobalt/src/apache-ant-1.9.2/bin:/usr/lib/jvm/java-7-oracle/bin:/usr/local/MATLAB/R2012a/bin:/home/cobalt/opencv/build/bin:/usr/lib/lightdm/lightdm:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games
env[25] = DESKTOP_SESSION=gnome-fallback
env[26] = PWD=/home/cobalt/HelloC
env[27] = JAVA_HOME=/usr/lib/jvm/java-7-oracle
env[28] = GNOME_KEYRING_PID=3567
env[29] = LANG=en_PH.UTF-8
env[30] = MANDATORY_PATH=/usr/share/gconf/gnome-fallback.mandatory.path
env[31] = UBUNTU_MENUPROXY=libappmenu.so
env[32] = GDMSESSION=gnome-fallback
env[33] = TOOLCHAIN=/home/cobalt/Android/adt-bundle-linux-x86-20131030/android-ndk-r10b/toolchains/arm-linux-androideabi-4.8/prebuilt/linux-x86
env[34] = SHLVL=1
env[35] = HOME=/home/cobalt
env[36] = MATLAB_ROOT_DIR=/usr/local/MATLAB/R2012a
env[37] = LANGUAGE=en_PH:en
env[38] = GNOME_DESKTOP_SESSION_ID=this-is-deprecated
env[39] = LOGNAME=cobalt
env[40] = XDG_DATA_DIRS=/usr/share/gnome-fallback:/usr/share/gnome:/usr/local/share/:/usr/share/
env[41] = DBUS_SESSION_BUS_ADDRESS=unix:abstract=/tmp/dbus-xtWvCiG1cn,guid=855c7f16a989fbb3c956676a00000049
env[42] = LESSOPEN=| /usr/bin/lesspipe %s
env[43] = PKG_CONFIG_PATH=:/usr/local/lib/pkgconfig:/usr/local/lib/pkgconfig
env[44] = DISPLAY=:0.0
env[45] = NDK_ROOT=/home/cobalt/Android/adt-bundle-linux-x86-20131030/android-ndk-r10b
env[46] = XDG_CURRENT_DESKTOP=GNOME
env[47] = LESSCLOSE=/usr/bin/lesspipe %s %s
env[48] = COLORTERM=gnome-terminal
env[49] = XAUTHORITY=/home/cobalt/.Xauthority
env[50] = _=./MainArgumentsEnvironment
env[51] = OLDPWD=/home/cobalt

*/

/*
$ ./MainArguments Melvin Kong Cabatuan
Number of arguments to the main functions: 4
Argument number 0 is ./MainArguments
Argument number 1 is Melvin
Argument number 2 is Kong
Argument number 3 is Cabatuan

*/

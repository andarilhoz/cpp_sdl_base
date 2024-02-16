FROM mcr.microsoft.com/devcontainers/cpp:0-debian-11

ARG REINSTALL_CMAKE_VERSION_FROM_SOURCE="none"

# Optionally install the cmake for vcpkg
#COPY ./reinstall-cmake.sh /tmp/

#RUN if [ "${REINSTALL_CMAKE_VERSION_FROM_SOURCE}" != "none" ]; then \
#        chmod +x /tmp/reinstall-cmake.sh && /tmp/reinstall-cmake.sh ${REINSTALL_CMAKE_VERSION_FROM_SOURCE}; \
#    fi \
#    && rm -f /tmp/reinstall-cmake.sh


# [Optional] Uncomment this section to install additional vcpkg ports.
# RUN su vscode -c "${VCPKG_ROOT}/vcpkg install <your-port-name-here>"

# [Optional] Uncomment this section to install additional packages.
 RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
     && apt-get -y install --no-install-recommends build-essential manpages-dev \
    git unzip dosfstools curl wget vim sudo ssh tzdata ca-certificates \
    dbus dbus-x11 alsa-utils pulseaudio pulseaudio-utils mesa-utils x11-apps \
    cmake clang clang-format clangd gdb nasm lldb\ 
    # python3 python-is-python3 python3-distutils python3-numpy python3-pip python3-tk \
    # nodejs \
    libsdl2-dev libsdl2-image-dev libsdl2-mixer-dev libsdl2-net-dev libsdl2-ttf-dev \
    libglu1-mesa-dev freeglut3-dev mesa-common-dev libglew-dev libglfw3-dev \
    # qtcreator qtbase5-dev qttools5-dev-tools qtbase5-examples qt5-qmake \
    # libgtk-4-bin libgtk-4-common libgtk-4-dev \
    && apt-get clean -y && rm -rf /var/lib/apt/lists
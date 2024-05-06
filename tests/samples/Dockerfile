FROM fedora:latest

ARG USERNAME=colonial
ARG USER_UID=1000
ARG USER_GID=$USER_UID

RUN groupadd --gid $USER_GID $USERNAME \
    && useradd --uid $USER_UID --gid $USER_GID -m $USERNAME \
    && echo $USERNAME ALL=\(root\) NOPASSWD:ALL > /etc/sudoers.d/$USERNAME \
    && chmod 0440 /etc/sudoers.d/$USERNAME

RUN dnf groupinstall -y "C Development Tools and Libraries"
RUN dnf install -y clang clang-tools-extra

USER $USERNAME
WORKDIR /home/colonial/
CMD /bin/bash -l
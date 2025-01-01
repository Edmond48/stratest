FROM ubuntu:20.04

# Set environment variables to prevent interactive prompts
ENV DEBIAN_FRONTEND=noninteractive

# Install dependencies
RUN apt-get update && apt-get install -y \
    # build-essential \
    cmake \
    git \
    g++

WORKDIR /app

# Copy the C++ project files into the container
COPY . /app

# Run CMake and make to build the project
RUN cmake -S . -B build/ && cmake --build build/

# Run the built executable
# CMD ["./build/helloworld"]
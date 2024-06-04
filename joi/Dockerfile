# Use an official GCC image as the base image
FROM gcc:latest

# Set the working directory in the container
WORKDIR /usr/src/app

# Copy the current directory contents into the container at /usr/src/app
COPY . .

# Compile the C++ program
RUN g++ -o my_program main.cpp

# Run the executable
CMD ["./my_program"]

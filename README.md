# About
Just a simple example on how to run c++ program in docker.

# Run example
1. git clone the repo
2. choose which one, and cd into it.
3. Build image and run container.

## Build Image
```
jun@b:~$ docker build . -t cpp_docker_example
```
## Run
```
jun@b:~$ docker run --rm -it cpp_docker_example
```

## stop
```
jun@b:~$ docker stop cpp_docker_example
```

## Remove Image
```
jun@b:~$ docker image rm cpp_docker_example
```
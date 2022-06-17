FROM gcc:latest

WORKDIR /usr/src/cpp_example

COPY ./src/ ./

RUN apt-get update && apt-get -y install cmake

RUN mkdir -p out/build

RUN cmake -S . -B out/build

RUN make -C out/build

CMD [ "./out/build/Meow" ]
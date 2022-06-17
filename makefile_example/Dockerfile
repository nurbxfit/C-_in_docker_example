FROM gcc:latest

WORKDIR /usr/src/cpp_example

COPY ./src/ ./

RUN make
RUN make clean

CMD [ "make","run" ]
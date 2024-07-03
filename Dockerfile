FROM ubuntu:latest

RUN apt-get update && apt-get install -y \
    build-essential \
    openssl \
    libssl-dev

WORKDIR /usr/src/app

COPY generate_key.c .

RUN gcc -o generate_key generate_key.c -lssl -lcrypto

CMD ["./generate_key"]

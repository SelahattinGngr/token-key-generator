# Token Key Generator

Bu proje, OpenSSL kullanarak access token ve refresh token için güvenli 256 bit anahtarlar oluşturur. Kod C dilinde yazılmıştır ve kolay kullanım ve taşınabilirlik için Docker konteyneri içinde çalışacak şekilde tasarlanmıştır.

## Özellikler

- Access token için 256 bit anahtar oluşturur
- Refresh token için 256 bit anahtar oluşturur
- Anahtarları hexadecimal formatında çıktı verir

## Gereksinimler

- Docker

## Başlarken

Bu talimatlar, projeyi yerel makinenizde nasıl çalıştıracağınızı gösterir.

### Ön Koşullar

Makinenizde Docker'ın kurulu olduğundan emin olun. Docker'ı [buradan](https://www.docker.com/get-started) indirebilirsiniz.

### Kurulum

1. Depoyu klonlayın:

   ```sh
   git clone https://github.com/SelahattinGngr/token-key-generator
   cd token-key-generator
   ```

2. Docker imajını oluşturun:

   ```sh
   docker build -t generate-key .
   ```

3. Docker konteynerini çalıştırın:

   ```sh
    docker run --rm generate-key
   ```

### Çıktı

Docker konteynerini çalıştırdıktan sonra, aşağıdakine benzer bir çıktı görmelisiniz:

   ```sh
      Generated Access Token Key: <your_access_token_key>
      Generated Refresh Token Key: <your_refresh_token_key>
   ```

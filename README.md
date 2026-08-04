# u3oko

Открытая кроссплатформенная децентрализованная масштабируемая система видеонаблюдения.

Описание в процессе.

Поддерживаемые операционные системы:

- Windows (x86/ARM)
- Android (ARM)
- Linux (x86/ARM)
- Darwin (x86/ARM)

Зависимости.

- all
  - perl https://strawberryperl.com/
  - git
  - wget
  - python https://www.python.org/
  - nasm https://www.nasm.us/
  - clang

- windows:
  - msys2 https://www.msys2.org/
  - cygwin https://www.cygwin.com/install.html

- orangepi:
- android:
- linux:
- raspberrypi:
  - meson
  - autoconf
  - automake
  - libtool
  - pkg-config

sudo apt-get update
sudo apt-get install autoconf automake libtool
sudo apt-get update && sudo apt-get install pkg-config


Сборка:

Пример для linux
Параметры конфигурации сборки в файле mmedia/build/cmake/vals/env-command-line-vals.cmake
git clone 
cd u3oko/mmedia/build/cmds/u3oko-linix-rel-lib-none-clang-ninja.sh


Предсобранные артефакты для ряда плафторм/конфигураций/архитектур/версий https://github.com/uuusoft/u3oko-3rd-artifacts
Пример использования
git clone https://github.com/uuusoft/u3oko-3rd-artifacts.git
cd u3oko-3rd-artofacts
python3 -m http.server 8011


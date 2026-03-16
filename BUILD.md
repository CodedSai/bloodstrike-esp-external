# Build Instructions

## CMake

1. Install CMake from [CMake Download](https://cmake.org/download/).
2. Clone the repository:
   ```bash
   git clone https://github.com/CodedSai/bloodstrike-esp-external.git
   cd bloodstrike-esp-external
   ```
3. Create a build directory:
   ```bash
   mkdir build
   cd build
   ```
4. Run CMake to generate the build files:
   ```bash
   cmake ..
   ```
5. Build the project:
   ```bash
   cmake --build .
   ```

## PlatformIO

1. Install [PlatformIO IDE](https://platformio.org/install/ide).
2. Open the project in PlatformIO.
3. Select the correct environment from `platformio.ini`.
4. Build the project using the PlatformIO build button or command.

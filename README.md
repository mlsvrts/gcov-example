# GCOVR JSON Filepath Example

## Build

```sh
mkdir -p build
cmake --preset debug
cmake --build --preset debug
```

## Run

```sh
./build/debug/example
```

## Coverage

```
python3 -m venv .venv
source .venv/bin/activate
python3 -m pip install gcovr==8.3
gcovr -v
```

Coverage is expected to pass with version of `gcov` that do not support a JSON format, and fail with versions that do support JSON.

# my-ts

`my-ts` is a small C program that prepends a timestamp to every line of its standard
input and writes back on its standard output.

## Compile

```bash
$ make my-ts
```

## Usage

```bash
$ your-program | my-ts
```

## Sample output

```
[2015:05:07 22:52:34] my line of output number 1
[2015:05:07 22:52:34] my line of output number 2
[2015:05:07 22:52:36] my line of output number 3
[2015:05:07 22:52:37] my line of output number 4
[2015:05:07 22:52:39] my line of output number 5
[2015:05:07 22:52:39] my line of output number 6
```

## License

The MIT License (MIT)

Copyright (c) 2015 Thomas Pelletier

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

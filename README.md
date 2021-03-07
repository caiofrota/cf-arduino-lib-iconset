![alt text](https://cftechsol.com/wp-content/uploads/2017/12/caiofrota-logo-300x171.png)

[![GitHub issues](https://img.shields.io/github/issues/caiofrota/cf-arduino-lib-iconset.svg)](https://github.com/caiofrota/cf-arduino-lib-iconset/issues)
[![Fork](https://img.shields.io/github/forks/caiofrota/cf-arduino-lib-iconset.svg)](#)
[![Stars](https://img.shields.io/github/stars/caiofrota/cf-arduino-lib-iconset.svg)](#)
[![License](https://img.shields.io/github/license/caiofrota/cf-arduino-lib-iconset.svg)](#)
[![Total Downloads](https://img.shields.io/github/downloads/caiofrota/cf-arduino-lib-iconset/total.svg)](https://github.com/caiofrota/cf-arduino-lib-iconset/releases)
[![Slack Chat](https://img.shields.io/badge/chat-slack-green.svg)](https://cftechsol.slack.com)
[![Website](https://img.shields.io/badge/website-cftechsol.com-green.svg)](https://cftechsol.com)

# CF Push Button for Arduino

Icon set of 8x8 pixels.

Version 1.0.0

## Quick Start

### Prerequisites

What things you need to install the software and how to install them

* [Arduino IDE](https://www.arduino.cc/) - Development IDE

### Installing

You can either install through the Arduino Library Manager or checkout the latest changes or a release from GitHub.

####  Checkout from github

- Checkout library to your Arduino libraries folder

### Using

- Include in your sketch.
```cpp
#include <CFIconSet.h>
```

- Use icons.
```cpp
void loop() {
    // ... YOUR CODE ...
    display.drawBitmap(0, 0, CFIconSet::NETWORK_HIGH_BARS_8X8, 8, 8, 1);
    // ... YOUR CODE ...
}
```

That's it!

### For more info about usage

- Please read our [Wiki](https://github.com/caiofrota/cf-arduino-lib-iconset/wiki).

## Support or Contact

Contact us at contact@cftechsol.com for questions and we'll help you sort it out.

## Issues

Find a bug or want to request a new feature? Please let us know by [submitting an issue](https://github.com/caiofrota/cf-arduino-lib-iconset/issues).

## Contributing

Please read [CONTRIBUTING.md](https://gist.github.com/caiofrota/6e65a17fd3bf100d058cb48dcc780b21) for details on our code of conduct, and the process for submitting pull requests to us.

## Authors

* **Caio Frota** - *Initial work* - [caiofrota](https://github.com/caiofrota) | [CF Technology Solutions](https://cftechsol.com)

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details
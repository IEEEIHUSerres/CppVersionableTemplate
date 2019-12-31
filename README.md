[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![MIT License][license-shield]][license-url]
[![LinkedIn][linkedin-shield]][linkedin-url]

<h2>C++ Versionable Template</h2>
<br />
<div>
  <div>
    A C++ Template Project with Versioning Feature
  </div>
</div>


<!-- TABLE OF CONTENTS -->
## Table of Contents

* [About the Project](#about-the-project)
* [Getting Started](#getting-started)
  * [Prerequisites](#prerequisites)
  * [Installation](#installation)
  * [Makefile](#makefile)
* [License](#license)


<!-- ABOUT THE PROJECT -->
## About The Project
A C++ Template Project with Versioning Feature


<!-- GETTING STARTED -->
## Getting Started

To get a local copy up and running follow these simple steps.


### Prerequisites

This is an example of how to list things you need to use the software and how to install them.
* Linux-based Operating System (for example, Ubuntu)
* Git


### Installation
1. Open a terminal
2. Clone the Cpp Versionable Template
```sh
git clone https://github.com/IEEEIHUSerres/CppVersionableTemplate.git
```
3. Open the Cpp Versionable Template project
```sh
cd CppVersionableTemplate
``` 
4. Make a new build (dev build)
```sh
make new-build
```
5. Make a new release (production build)
```sh
make new-release
```

### Makefile
Our Makefile contains 8 targets
* all (default), Makes a new build (dev build)
* new-build, Makes a new build (dev build)
* new-release, Makes a new release (production build)
* build, Makes a build without version changes (if it's already compiled, this does nothing)
* rebuild, Makes a build without version changes (if it's already compiled, this will remove the previous build)
* clean, Removes the previous build
* increment-build, Increments the build by one (example, 1->2, 5->6, etc)
* increment-version, Increments the version by one (example, 1->2, 5->6, etc)

<!-- LICENSE -->
## License

Distributed under the Mozilla Public License Version 2.0. See `LICENSE` for more information.


<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/IEEEIHUSerres/CppVersionableTemplate.svg?style=flat-square
[contributors-url]: https://github.com/IEEEIHUSerres/CppVersionableTemplate/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/IEEEIHUSerres/CppVersionableTemplate.svg?style=flat-square
[forks-url]: https://github.com/IEEEIHUSerres/CppVersionableTemplate/network/members
[stars-shield]: https://img.shields.io/github/stars/IEEEIHUSerres/CppVersionableTemplate.svg?style=flat-square
[stars-url]: https://github.com/IEEEIHUSerres/CppVersionableTemplate/stargazers
[issues-shield]: https://img.shields.io/github/issues/IEEEIHUSerres/CppVersionableTemplate.svg?style=flat-square
[issues-url]: https://github.com/IEEEIHUSerres/CppVersionableTemplate/issues
[license-shield]: https://img.shields.io/github/license/IEEEIHUSerres/CppVersionableTemplate?style=flat-square
[license-url]: https://github.com/IEEEIHUSerres/CppVersionableTemplate/blob/master/LICENSE
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=flat-square&logo=linkedin&colorB=555
[linkedin-url]: https://www.linkedin.com/company/ieee-ihuserres

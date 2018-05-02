# CarND-Controls-PID
Self-Driving Car Engineer Nanodegree Program

My last hyper parameter (P, I, D coefficient) (P = 0.2, I = 0.0002, D = 2.75) was obtained by the next trial.

  //i[1]:pid.Init(0.0, 1.0,  0.0);
  
  //i[2]:pid.Init(0.0, 0.1,  0.0);
  
  //i[3]:pid.Init(0.0, 0.01,  0.0);
  
  //i[4]:pid.Init(0.0, 0.001,  0.0);
  
  //i[5]:pid.Init(0.0, 0.0001,  0.0);
 
  //i[6]:pid.Init(0.0, 0.00001,  0.0);
 
  //pid.Init(0.0, 0.0001,  0.0);

  //p[1]:pid.Init(1.0, 0.0001,  0.0);
 
  //p[2]:pid.Init(0.1, 0.0001,  0.0);
 
  //p[3]:pid.Init(0.01, 0.0001,  0.0);

  //p[4]:pid.Init(0.05, 0.0001,  0.0);

  //pid.Init(0.05, 0.0001,  0.0);

  //d[1]:pid.Init(0.05, 0.0001,  1.0);
  
  //d[2]:pid.Init(0.05, 0.0001,  2.0);
  
  //d[3]:pid.Init(0.05, 0.0001,  3.0);
  
  //pid.Init(0.05, 0.0001,  2.0);
  
  //x[1]:pid.Init(0.075, 0.0001,  2.0);
  
  //x[2]:pid.Init(0.075, 0.0005,  2.0);
  
  //x[3]:pid.Init(0.075, 0.0005,  2.0);
  
  //x[4]:pid.Init(0.1, 0.0005,  2.0);
  
  //x[5]:pid.Init(0.1, 0.0005,  2.5);
  
  //x[6]:pid.Init(0.1, 0.00075,  2.5);
  
  //x[7]:pid.Init(0.25, 0.0005,  2.5);
  
  //x[8]:pid.Init(0.25, 0.00025,  2.5);
  
  //x[9]:pid.Init(0.275, 0.0002,  2.75);

  //x[10]:pid.Init(0.2, 0.00025,  2.75);
    
  pid.Init(0.2, 0.0002,  2.75);
  
① Changed the I-coefficient at the beginning, confirmed bias reduction and over-reaction.
 （　i[1] ～ i[6]　step　 ） 
 The degree to which the CTE gradually converges to 0 was confirmed, and the initial value (indication) of the I coefficient was set to 0.0001.
 
② Next, I changed the P coefficient while keeping the I coefficient fixed, and confirmed cornering characteristics.
  （　p[1] ～ p[4]　step ） 
 Similarly the initial value (indication) of the P coefficient was set to 0.05.
 
③　In succession　I changed the D coefficient while keeping the I&P coefficient fixed, and confirmed the runout and controllability.
  （　d[1] ～ d[3]　step ）
  The initial values (indicated values) of P, I, D coefficients were assumed to be 0.05, 0.0001, 3.0.

④ The P, I and D coefficients were finely adjusted from the initial value to the optimum value to obtain the last hyper parameter.

 
 
---

## Dependencies

* cmake >= 3.5
 * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1(mac, linux), 3.81(Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools]((https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)
* [uWebSockets](https://github.com/uWebSockets/uWebSockets)
  * Run either `./install-mac.sh` or `./install-ubuntu.sh`.
  * If you install from source, checkout to commit `e94b6e1`, i.e.
    ```
    git clone https://github.com/uWebSockets/uWebSockets 
    cd uWebSockets
    git checkout e94b6e1
    ```
    Some function signatures have changed in v0.14.x. See [this PR](https://github.com/udacity/CarND-MPC-Project/pull/3) for more details.
* Simulator. You can download these from the [project intro page](https://github.com/udacity/self-driving-car-sim/releases) in the classroom.

There's an experimental patch for windows in this [PR](https://github.com/udacity/CarND-PID-Control-Project/pull/3)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./pid`. 

Tips for setting up your environment can be found [here](https://classroom.udacity.com/nanodegrees/nd013/parts/40f38239-66b6-46ec-ae68-03afd8a601c8/modules/0949fca6-b379-42af-a919-ee50aa304e6a/lessons/f758c44c-5e40-4e01-93b5-1a82aa4e044f/concepts/23d376c7-0195-4276-bdf0-e02f1f3c665d)

## Editor Settings

We've purposefully kept editor configuration files out of this repo in order to
keep it as simple and environment agnostic as possible. However, we recommend
using the following settings:

* indent using spaces
* set tab width to 2 spaces (keeps the matrices in source code aligned)

## Code Style

Please (do your best to) stick to [Google's C++ style guide](https://google.github.io/styleguide/cppguide.html).

## Project Instructions and Rubric

Note: regardless of the changes you make, your project must be buildable using
cmake and make!

More information is only accessible by people who are already enrolled in Term 2
of CarND. If you are enrolled, see [the project page](https://classroom.udacity.com/nanodegrees/nd013/parts/40f38239-66b6-46ec-ae68-03afd8a601c8/modules/f1820894-8322-4bb3-81aa-b26b3c6dcbaf/lessons/e8235395-22dd-4b87-88e0-d108c5e5bbf4/concepts/6a4d8d42-6a04-4aa6-b284-1697c0fd6562)
for instructions and the project rubric.

## Hints!

* You don't have to follow this directory structure, but if you do, your work
  will span all of the .cpp files here. Keep an eye out for TODOs.

## Call for IDE Profiles Pull Requests

Help your fellow students!

We decided to create Makefiles with cmake to keep this project as platform
agnostic as possible. Similarly, we omitted IDE profiles in order to we ensure
that students don't feel pressured to use one IDE or another.

However! I'd love to help people get up and running with their IDEs of choice.
If you've created a profile for an IDE that you think other students would
appreciate, we'd love to have you add the requisite profile files and
instructions to ide_profiles/. For example if you wanted to add a VS Code
profile, you'd add:

* /ide_profiles/vscode/.vscode
* /ide_profiles/vscode/README.md

The README should explain what the profile does, how to take advantage of it,
and how to install it.

Frankly, I've never been involved in a project with multiple IDE profiles
before. I believe the best way to handle this would be to keep them out of the
repo root to avoid clutter. My expectation is that most profiles will include
instructions to copy files to a new location to get picked up by the IDE, but
that's just a guess.

One last note here: regardless of the IDE used, every submitted project must
still be compilable with cmake and make./

## How to write a README
A well written README file can enhance your project and portfolio.  Develop your abilities to create professional README files by completing [this free course](https://www.udacity.com/course/writing-readmes--ud777).


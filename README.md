# A working example of Catch framework working correctly with Visual studio Catch2 Test adapter

As an experienced systems architect I am used to just starting at a running pace, with presetup systems working as planned and examples and demos that just work.
I have had the need to go back to Cpp, and my memories are not fond from my CS degree.

I am working on a windows system.
I tried installing many types and versions of cpp on this computer and they all had an issue and didnt want to work.
I decided to default back to visual studio, and installed visual studio 2022.

I then looked for a testing framework that did not require an expternal package manager of submodaling a git (such as google tests).
I found catch2.hpp as a single dependency and was very happy.

Here is how to run this simple testing:

1. clone the repo to your directory of choice
1. install visual studio 2022
1. open the extensions and install [**Catch2 Test Adapter** extension](https://marketplace.visualstudio.com/items?itemName=JohnnyHendriks.ext01)
1. Go to [Test]->[Configure run Settings]->[Select Solutions Wide runsettings File]
     select test.runsettings located in test_project

1. Clean and Build the solution
1. Open test explorer and (hopefully) all the tests (3 tests) will appear there._

![](https://github.com/bugsnag/screensaver/raw/master/docs/preview.gif)

# Installation

1. Download the screensaver [here](https://github.com/bugsnag/screensaver/releases/download/v0.0.1/Bugsaver.saver.zip)
2. Unzip the file and double click to install. (Note, this is an unsigned application so if you get a warning about it being from an unidentified developer you may need to right click to open it)

# Development

### Changing the animation

The screensaver application essentially just renders the video at
[Bugsaver/Animation.mp4](https://github.com/bugsnag/screensaver/blob/master/Bugsaver/Animation.mp4).

This video is generated from the [screensaver.aep](https://github.com/bugsnag/screensaver/blob/master/screensaver.aep) After Effects document.

In order to modify the animation, edit the after effects document and generate a new video. Then proceed to the build instructions below.


### Building and Installing

1. Open Bugsaver.xcodeproj in Xcode
2. Build using (CMD-SHIFT-R)
3. Find the Bugsaver.saver file in the file navigator (in the Products folder).
   Right click it and select "Open with External Editor"

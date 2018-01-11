//
//  BugsaverView.h
//  Bugsaver
//
//  Created by Christian Schlensker on 1/10/18.
//  Copyright © 2018 Bugsnag. All rights reserved.
//

#import <ScreenSaver/ScreenSaver.h>
#import <AVFoundation/AVFoundation.h>

@interface BugsaverView : ScreenSaverView
@property (strong) AVPlayer *player;
@property (strong) AVPlayerLayer *playerLayer;
-(void)playerItemDidReachEnd:(NSNotification *)notification;
@end

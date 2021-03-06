//
//  GBAEmulationViewController.h
//  GBA4iOS
//
//  Created by Riley Testut on 7/19/13.
//  Copyright (c) 2013 Riley Testut. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GBAController.h"
#import "GBAROM.h"

@interface GBAEmulationViewController : UIViewController

@property (strong, nonatomic) GBAROM *rom;
@property (assign, nonatomic) CGFloat blurAlpha;
@property (strong, nonatomic) UIImageView *blurredContentsImageView;

- (void)blurWithInitialAlpha:(CGFloat)alpha darkened:(BOOL)darkened;
- (void)removeBlur;

- (void)refreshLayout;

- (void)resumeEmulation;

@end

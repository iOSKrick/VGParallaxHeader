//
//  SecondViewController.h
//  Example
//
//  Created by Marek Serafin on 26/09/14.
//  Copyright (c) 2014 Marek Serafin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIScrollView+VGParallaxHeader.h"

@interface SecondViewController : UIViewController <UIScrollViewDelegate>

@property (nonatomic, weak) IBOutlet UIScrollView *scrollView;

@end


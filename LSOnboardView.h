#import <UIKit/UIKit.h>
#import "LSDesignViewController.h"
#define ONBOARD_VIEW_SHOW_ANIMATION_DURATION                0.5
@interface LSOnboardView : UIView
- (instancetype)initWithDesignViewController:(LSDesignViewController*)vc;
- (void)showInstruction;
- (void)showTips;
@end

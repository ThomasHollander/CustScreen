#import <UIKit/UIKit.h>
#import "LSThemeModel.h"
@class LSDesignViewController;
@interface LSThemesViewController : UIViewController
@property (nonatomic, weak) LSDesignViewController                  *designViewController;
- (void)prepareToShowView;
- (void)showViewCompletion:(void(^)(void))completion;
- (void)hideViewCompletion:(void(^)(void))completion;
@end

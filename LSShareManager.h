#import <UIKit/UIKit.h>
typedef void(^LSShareCompletion)(NSError* error, BOOL success);
@interface LSShareManager : UIView
- (void)shareToFacebookImage:(UIImage*)image fromViewController:(UIViewController*)vc withCompletion:(LSShareCompletion)completion;
@end

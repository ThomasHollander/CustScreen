#import "HFImageEditorViewController.h"
@class  LSImageEditorViewController;
@protocol LSImageEditorViewControllerDelegate <NSObject>
- (void)editImageViewController:(LSImageEditorViewController*)viewController didPressRetakeButton:(UIButton*)button;
- (void)editImageViewController:(LSImageEditorViewController*)viewController didPressUseImageButton:(UIButton*)button withImage:(UIImage*)image;
@end
@interface LSImageEditorViewController : HFImageEditorViewController
@property (nonatomic, weak) id<LSImageEditorViewControllerDelegate>                 delegate;
- (void)prepareControlsView;
- (void)showControlsWithCompletion:(void(^)(void))completion;
- (void)hideControlsWithCompletion:(void(^)(void))completion;
@end

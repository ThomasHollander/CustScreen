#import <UIKit/UIKit.h>
@class LSPhotoMenu;
@protocol LSPhotoMenuDelegate <NSObject>
- (void)didPressPhototButtonPhotoMenu:(LSPhotoMenu*)phototMenu;
- (void)didPressGalleryButtonPhotoMenu:(LSPhotoMenu*)phototMenu;
@end
@interface LSPhotoMenu : UIView
@property (nonatomic, weak) id<LSPhotoMenuDelegate>     delegate;
@property (nonatomic, assign) BOOL                      showPhotoButton;
@property (nonatomic, assign) BOOL                      showGalleryButton;
- (void)showPhotoMenuWithCompletion:(void(^)(void))completion;
- (void)hidePhotoMenuWithCompletion:(void(^)(void))completion;
@end

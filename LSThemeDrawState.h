#import <Foundation/Foundation.h>
@interface LSThemeDrawState : NSObject
@property (nonatomic, strong) NSIndexPath                   *mainBackgroundColorIndexPath;
@property (nonatomic, strong) NSIndexPath                   *mainBackgroundImageIndexPath;
@property (nonatomic, strong) NSIndexPath                   *clockViewCornerRadiusIndexPath;
@property (nonatomic, strong) NSIndexPath                   *clockViewColorIndexPath;
@property (nonatomic, strong) NSIndexPath                   *clockViewImageIndexPath;
@property (nonatomic, strong) NSIndexPath                   *slideViewCornerRadiusIndexPath;
@property (nonatomic, strong) NSIndexPath                   *slideViewColorIndexPath;
@property (nonatomic, strong) NSIndexPath                   *slideViewImageIndexPath;
@property (nonatomic, strong) NSIndexPath                   *photoViewCornerRadiusIndexPath;
@property (nonatomic, strong) NSIndexPath                   *photoBorderViewCornerRadiusIndexPath;
@property (nonatomic, strong) NSIndexPath                   *photoBorderViewColorIndexPath;
@property (nonatomic, strong) NSIndexPath                   *photoBorderViewImageIndexPath;
@end

#import <Foundation/Foundation.h>
extern const NSInteger                          themesCount;
@class LSThemeModel;
@interface LSThemeManager : NSObject
@property (nonatomic, assign) BOOL              themeWasChanged;
@property (nonatomic, strong) LSThemeModel      *currentThemeModel;
@property (nonatomic, strong) NSArray           *themesList;
@property (nonatomic, assign) BOOL              checkPurchasesAlert;
+ (instancetype)sharedManager;
@end

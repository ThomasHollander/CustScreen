#import <UIKit/UIKit.h>
@interface LSColorTableViewCell : UITableViewCell
@property (nonatomic, strong) UIColor               *cellColor;
@property (nonatomic, assign) BOOL                   selectCell;
@property (nonatomic, assign) BOOL                   showCell;
@property (nonatomic, assign) BOOL                   showCellWithoutAnimation;
- (void)selectCellWithoutAnimation:(BOOL)select;
@end

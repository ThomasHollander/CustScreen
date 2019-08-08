#import <Foundation/Foundation.h>
typedef NS_ENUM(NSInteger, LSElementShapeType) {
    LSElementShapeNone,
    LSElementShapeCurveNone,
    LSElementShapeCurveSmall,
    LSElementShapeCurveLarge,
    LSElementShapeCircle
};
@interface LSDesignElementShape : NSObject
@property (nonatomic, assign) LSElementShapeType                shapeType;
@property (nonatomic, assign) CGFloat                           curveRadius;
@property (nonatomic, strong) UIImage                           *previewImage;
@end

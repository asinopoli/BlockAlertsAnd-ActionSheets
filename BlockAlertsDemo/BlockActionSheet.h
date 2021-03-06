//
//  BlockActionSheet.h
//
//

#import <UIKit/UIKit.h>

/**
 * A simple block-enabled API wrapper on top of UIActionSheet.
 */
@interface BlockActionSheet : NSObject {
@private
    UIView *_view;
    NSMutableArray *_blocks;
    CGFloat _height;
    NSString* _title;
}

@property (nonatomic, readonly) UIView *view;

+ (id)sheetWithTitle:(NSString *)title;

- (id)initWithTitle:(NSString *)title;

- (void)setCancelButtonWithTitle:(NSString *) title block:(void (^)()) block;
- (void)setDestructiveButtonWithTitle:(NSString *) title block:(void (^)()) block;
- (void)addButtonWithTitle:(NSString *) title block:(void (^)()) block;

- (void)setCancelButtonWithTitle:(NSString *) title atIndex:(NSInteger)index block:(void (^)()) block;
- (void)setDestructiveButtonWithTitle:(NSString *) title atIndex:(NSInteger)index block:(void (^)()) block;
- (void)addButtonWithTitle:(NSString *) title atIndex:(NSInteger)index block:(void (^)()) block;

// attributed title support
- (void)addButtonWithAttributedTitle:(NSAttributedString *) title block:(void (^)()) block;
- (void)addButtonWithAttributedTitle:(NSAttributedString *) title atIndex:(NSInteger)index block:(void (^)()) block;

- (void)showInView:(UIView *)view;

- (NSUInteger)buttonCount;

@end

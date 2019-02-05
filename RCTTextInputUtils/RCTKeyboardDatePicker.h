#import <UIKit/UIKit.h>
#import <React/RCTViewManager.h>
#import <React/RCTConvert.h>

// The contents of what would be in React/RCTDatePicker.h, if it were an exported header.
@interface RCTDatePicker : UIDatePicker

@end

// The contents of what would be in React/RCTDatePickerManager.h, if it were an exported header.
@interface RCTConvert(UIDatePicker)

+ (UIDatePickerMode)UIDatePickerMode:(id)json;

@end

@interface RCTDatePickerManager : RCTViewManager

@end

// The contents of RCTKeyboardDatePicker.h
@interface RCTKeyboardDatePicker : UIDatePicker

@property (nonatomic, retain) id callbackObject;
@property (nonatomic, assign) SEL callbackSeletor;

- (void)setOptions:(NSDictionary*)options;
- (void)setCallbackObject:(id)anObject withSelector:(SEL)selector;

@end

/*!
 @header    UITextField+Helper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   14.0.1
 */

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UITextField (Helper)

/*!
 * @abstract SET maximum length of input text. TextField will not appear if user continues to enter from keyboard.
 */
@property (nonatomic) IBInspectable NSInteger  maximumCharactersAllowed NS_AVAILABLE_IOS(5_0);

/*!
 * @abstract GET maximum length of input text.
 */
- (NSInteger) maximumCharactersAllowed NS_AVAILABLE_IOS(5_0);

@end

NS_ASSUME_NONNULL_END

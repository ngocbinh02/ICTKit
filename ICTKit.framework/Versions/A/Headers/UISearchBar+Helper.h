/*!
 @header    UISearchBar+Helper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version  7.0
 */

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UISearchBar (Helper)

/*!
 * @abstract Custom Cancel button.
 */
- (void) setCancelButton:(UIButton *)cancelButton NS_DEPRECATED_IOS(2_0, 6_0, "setCancelButton: has been replaced by currentCancelBarButtonItem");

/*!
 * @abstract Custom SegmentedControl.
 */
- (void) setSegmentedControl:(UISegmentedControl *)segmented NS_DEPRECATED_IOS(2_0, 6_0);

/*!
 * @abstract Custom TextField.
 */
- (void) setSearchField:(UITextField *)textField NS_DEPRECATED_IOS(2_0, 6_0);

/*!
 * @abstract Custom background image.
 */
- (void) setBackgroundImage:(UIImage *)backgroundImage NS_AVAILABLE_IOS(7_1);

/*!
 * @abstract Get the current textField
 */
@property (nonatomic, strong, readonly, nonnull) UITextField *currentTextField  NS_AVAILABLE_IOS(7_1);

/*!
 * @abstract Get the current cancel button item
 */
@property (nonatomic, strong, readonly, nonnull) UIBarButtonItem *currentCancelBarButtonItem NS_DEPRECATED_IOS(7_0, 9_0);


@end

NS_ASSUME_NONNULL_END
/*!
 @header    UISafariViewController
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   7.0
 */

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

typedef NS_OPTIONS(NSInteger, UISafariViewComposeResult) {
    UISafariViewComposeResultCancelled = 0,
    UISafariViewComposeResultSuccessfullyLoaded = 1,
    UISafariViewComposeResultFailureLoaded = 2,
    UISafariViewComposeResultSuccessfullyOpened = 3,
    UISafariViewComposeResultInProcessOpening = 4
};

NS_ASSUME_NONNULL_BEGIN

@class UISafariViewController;

typedef void(^UISafariViewControllerCompletion)(UISafariViewController *safariViewController,
                                                UISafariViewComposeResult result,
                                                NSError  * _Nullable error) NS_AVAILABLE_IOS(7_0);

@interface UISafariViewController : UINavigationController

@property (nonatomic, strong, readonly, nonnull) UIViewController       *viewController  NS_AVAILABLE_IOS(7_0);
@property (nonatomic, strong, readonly, nonnull) UIBarButtonItem        *leftBarButtonItem  NS_AVAILABLE_IOS(7_0);
@property (nonatomic, strong, readonly, nullable) UIWebView              *webView  NS_DEPRECATED_IOS(6_0, 8_1, "@property -webView has been replaced by @property -wkWebView");
@property (nonatomic, strong, readonly, nonnull) UIBarButtonItem        *actionButton  NS_AVAILABLE_IOS(7_0);
@property (nonatomic, strong, readonly, nonnull) UIBarButtonItem        *refreshButton  NS_AVAILABLE_IOS(7_0);
@property (nonatomic, strong, readonly, nonnull) UIActivityIndicatorView*activityIndicator  NS_AVAILABLE_IOS(7_0);
@property (nonatomic, strong, readonly, nonnull) UINavigationBar        *currentNavigationBar  NS_AVAILABLE_IOS(7_0);
@property (nonatomic, assign, readwrite)         BOOL                   hidesToolBar NS_AVAILABLE_IOS(7_0);
@property (nonatomic, strong, readonly, nullable) WKWebView              *wkWebView  NS_AVAILABLE_IOS(8_0);


- (instancetype) new NS_UNAVAILABLE;
- (instancetype) initWithRootViewController:(UIViewController *)rootViewController NS_UNAVAILABLE ;
- (instancetype) initWithCoder:(NSCoder *)aDecoder NS_UNAVAILABLE;
- (instancetype) initWithNibName:(nullable NSString *)nibNameOrNil bundle:(nullable NSBundle *)nibBundleOrNil NS_UNAVAILABLE;

/**
 *  Create the viewcontroller.
 *
 *  @return UISafariViewController
 */
+ (instancetype) shareInstance NS_AVAILABLE_IOS(8_0);

/**
 *  Show the viewcontroler with the URL and the completion handler.
 *
 *  @param URL          URL need to be loaded.
 *  @param completion_t Completion block.
 */
- (void) showWithURL:(NSURL *)URL completion:(UISafariViewControllerCompletion)completion_t NS_AVAILABLE_IOS(8_0);
+ (void) openWithURL:(NSURL *)URL completion:(UISafariViewControllerCompletion)completion_t  NS_DEPRECATED_IOS(6_0, 9_0, "openWithURL:completion: has been replaced by showWithURL:completion:");

@end

NS_ASSUME_NONNULL_END


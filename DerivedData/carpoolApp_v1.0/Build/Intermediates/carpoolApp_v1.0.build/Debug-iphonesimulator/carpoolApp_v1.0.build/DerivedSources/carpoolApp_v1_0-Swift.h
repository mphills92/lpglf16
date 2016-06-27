// Generated by Apple Swift version 2.2 (swiftlang-703.0.18.8 clang-703.0.31)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreGraphics;
@import Foundation;
@import MessageUI;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC15carpoolApp_v1_021AboutUsViewController")
@interface AboutUsViewController : UIViewController
- (IBAction)closeViewButtonPressed:(id _Nonnull)sender;
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIWindow;
@class UIApplication;
@class NSObject;

SWIFT_CLASS("_TtC15carpoolApp_v1_011AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * _Nullable window;
- (BOOL)application:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary * _Nullable)launchOptions;
- (void)applicationWillResignActive:(UIApplication * _Nonnull)application;
- (void)applicationDidEnterBackground:(UIApplication * _Nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * _Nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * _Nonnull)application;
- (void)applicationWillTerminate:(UIApplication * _Nonnull)application;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UICollectionViewLayoutAttributes;
@class UILabel;
@class UIButton;

SWIFT_CLASS("_TtC15carpoolApp_v1_020AvailableCaddiesCell")
@interface AvailableCaddiesCell : UICollectionViewCell
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified nameLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified roundsCaddiedLabel;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified reserveCaddyButton;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified caddyHandicapLabel;
- (void)applyLayoutAttributes:(UICollectionViewLayoutAttributes * _Null_unspecified)layoutAttributes;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC15carpoolApp_v1_025BecomeCaddyViewController")
@interface BecomeCaddyViewController : UIViewController
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified getStartedButton;
- (IBAction)closeViewButtonPressed:(id _Nonnull)sender;
@property (nonatomic) CGRect screenSize;
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIView;
@class UINavigationBar;

SWIFT_CLASS("_TtC15carpoolApp_v1_030CaddiesAvailableViewController")
@interface CaddiesAvailableViewController : UIViewController
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified popoverView;
@property (nonatomic, weak) IBOutlet UINavigationBar * _Null_unspecified navigationBar;
- (IBAction)cancelViewButtonPressed:(id _Nonnull)sender;
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC15carpoolApp_v1_026CaddyHistoryViewController")
@interface CaddyHistoryViewController : UITableViewController
@property (nonatomic) BOOL dataExistsForTableView;
- (void)viewDidLoad;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UITableView;

@interface CaddyHistoryViewController (SWIFT_EXTENSION(carpoolApp_v1_0))
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView;
@end

@class UITextField;

SWIFT_CLASS("_TtC15carpoolApp_v1_025ChangeEmailViewController")
@interface ChangeEmailViewController : UITableViewController <UITextFieldDelegate>
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified currentEmailTextField;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified newEmailTextField;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified confirmNewEmailTextField;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified saveChangesButton;
@property (nonatomic, copy) NSString * _Nonnull newEmailToValidate;
@property (nonatomic) BOOL newEmailIsValid;
@property (nonatomic, copy) NSString * _Nonnull confirmedEmailToValidateMatch;
- (void)viewDidLoad;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface ChangeEmailViewController (SWIFT_EXTENSION(carpoolApp_v1_0))
- (void)textFieldDidBeginEditing:(UITextField * _Nonnull)textField;
- (BOOL)textFieldShouldReturn:(UITextField * _Nonnull)textField;
- (BOOL)validateNewEmail:(NSString * _Nonnull)newEmailToValidate;
- (void)saveChangesButtonEnabledState;
- (void)saveChangesButtonDisabledState;
- (IBAction)saveChangesButtonPressed:(id _Nonnull)sender;
@end


SWIFT_CLASS("_TtC15carpoolApp_v1_028ChangePasswordViewController")
@interface ChangePasswordViewController : UITableViewController <UITextFieldDelegate>
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified currentPasswordTextField;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified newPasswordTextField;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified confirmNewPasswordTextField;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified saveChangesButton;
@property (nonatomic, copy) NSString * _Nonnull confirmedPasswordToValidateMatch;
- (void)viewDidLoad;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface ChangePasswordViewController (SWIFT_EXTENSION(carpoolApp_v1_0))
- (void)textFieldDidBeginEditing:(UITextField * _Nonnull)textField;
- (BOOL)textFieldShouldReturn:(UITextField * _Nonnull)textField;
- (void)saveChangesButtonEnabledState;
- (void)saveChangesButtonDisabledState;
- (IBAction)saveChangesButtonPressed:(id _Nonnull)sender;
@end


SWIFT_CLASS("_TtC15carpoolApp_v1_025ChangePhoneViewController")
@interface ChangePhoneViewController : UITableViewController <UITextFieldDelegate>
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified currentPhoneTextField;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified newPhoneTextField;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified saveChangesButton;
- (void)viewDidLoad;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface ChangePhoneViewController (SWIFT_EXTENSION(carpoolApp_v1_0))
- (BOOL)textField:(UITextField * _Nonnull)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString * _Nonnull)string;
- (void)saveChangesButtonEnabledState;
- (void)saveChangesButtonDisabledState;
- (IBAction)saveChangesButtonPressed:(id _Nonnull)sender;
@end

@class UITouch;
@class UIEvent;

SWIFT_CLASS("_TtC15carpoolApp_v1_034ChooseServiceLevelSegmentedControl")
@interface ChooseServiceLevelSegmentedControl : UIControl
@property (nonatomic, strong) UIView * _Nonnull thumbView;
@property (nonatomic, strong) UIView * _Nonnull lineView;
@property (nonatomic, strong) UIView * _Nonnull pillView;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull items;
@property (nonatomic) NSInteger selectedIndex;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (void)setupView;
- (void)setupLabels;
- (void)layoutSubviews;
- (BOOL)beginTrackingWithTouch:(UITouch * _Nonnull)touch withEvent:(UIEvent * _Nullable)event;
- (void)displayNewSelectedIndex;
- (void)addIndividualItemConstraints:(NSArray<UIView *> * _Nonnull)items mainView:(UIView * _Nonnull)mainView padding:(CGFloat)padding;
@end


SWIFT_CLASS("_TtC15carpoolApp_v1_032ConfirmReservationViewController")
@interface ConfirmReservationViewController : UIViewController
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified popoverView;
@property (nonatomic, weak) IBOutlet UINavigationBar * _Null_unspecified navigationBar;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified confirmReservationButton;
- (IBAction)cancelViewButtonPressed:(id _Nonnull)sender;
- (void)viewDidLoad;
- (IBAction)confirmReservationButtonPressed:(id _Nonnull)sender;
- (void)closeAllReservationProcesses;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UITableViewCell;

SWIFT_CLASS("_TtC15carpoolApp_v1_030ContainerAboutUsViewController")
@interface ContainerAboutUsViewController : UITableViewController
@property (nonatomic, weak) IBOutlet UITableViewCell * _Null_unspecified goToWebsiteTableViewCell;
- (void)viewDidLoad;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class NSIndexPath;

@interface ContainerAboutUsViewController (SWIFT_EXTENSION(carpoolApp_v1_0))
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end

@class UICollectionViewLayout;

SWIFT_CLASS("_TtC15carpoolApp_v1_039ContainerCaddiesAvailableViewController")
@interface ContainerCaddiesAvailableViewController : UICollectionViewController
- (void)viewDidLoad;
- (nonnull instancetype)initWithCollectionViewLayout:(UICollectionViewLayout * _Nonnull)layout OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UICollectionView;

@interface ContainerCaddiesAvailableViewController (SWIFT_EXTENSION(carpoolApp_v1_0))
- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView * _Nonnull)collectionView;
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end


SWIFT_CLASS("_TtC15carpoolApp_v1_041ContainerConfirmReservationViewController")
@interface ContainerConfirmReservationViewController : UITableViewController
- (void)viewDidLoad;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface ContainerConfirmReservationViewController (SWIFT_EXTENSION(carpoolApp_v1_0))
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForHeaderInSection:(NSInteger)section;
- (IBAction)infoButtonPressed:(id _Nonnull)sender;
@end


SWIFT_CLASS("_TtC15carpoolApp_v1_025EditProfileViewController")
@interface EditProfileViewController : UIViewController
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC15carpoolApp_v1_028HelpAndSupportViewController")
@interface HelpAndSupportViewController : UIViewController
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified viewFAQsButton;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified fileComplaintButton;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface HelpAndSupportViewController (SWIFT_EXTENSION(carpoolApp_v1_0))
@end


SWIFT_CLASS("_TtC15carpoolApp_v1_018HelpViewController")
@interface HelpViewController : UITableViewController
- (IBAction)closeViewButtonPressed:(id _Nonnull)sender;
- (void)viewDidLoad;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC15carpoolApp_v1_020InviteViewController")
@interface InviteViewController : UIViewController <MFMessageComposeViewControllerDelegate>
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified referralCodeLabel;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified viaTextButton;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified viaEmailButton;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified viaFacebookButton;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified viaTwitterButton;
- (IBAction)closeViewButtonPressed:(id _Nonnull)sender;
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class MFMessageComposeViewController;

@interface InviteViewController (SWIFT_EXTENSION(carpoolApp_v1_0))
- (IBAction)sendSMSTextMessage:(id _Nonnull)sender;
- (void)messageComposeViewController:(MFMessageComposeViewController * _Nonnull)controller didFinishWithResult:(MessageComposeResult)result;
@end

@class UIStoryboardSegue;
@class UIBarButtonItem;
@class NSLayoutConstraint;

SWIFT_CLASS("_TtC15carpoolApp_v1_025LandingPageViewController")
@interface LandingPageViewController : UIViewController
@property (nonatomic, weak) IBOutlet UIBarButtonItem * _Null_unspecified menuButton;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified findCaddyButton;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified constraintToBottomFindCaddyButton;
@property (nonatomic) CGRect screenSize;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (IBAction)findCaddyButtonPressed:(id _Nonnull)sender;
- (void)presentReservationView;
- (void)submitReservationView;
- (void)prepareForSegue:(UIStoryboardSegue * _Nonnull)segue sender:(id _Nullable)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC15carpoolApp_v1_019LoginViewController")
@interface LoginViewController : UIViewController <UITextFieldDelegate>
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified backgroundView;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified emailTextField;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified passwordTextField;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified loginButton;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified loginButtonTopConstraint;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified loginButtonCenterConstraint;
@property (nonatomic) CGRect screenSize;
@property (nonatomic, copy) NSString * _Nonnull emailToValidate;
@property (nonatomic, copy) NSString * _Nonnull passwordToValidate;
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface LoginViewController (SWIFT_EXTENSION(carpoolApp_v1_0))
- (void)textFieldDidBeginEditing:(UITextField * _Nonnull)textField;
- (BOOL)textFieldShouldReturn:(UITextField * _Nonnull)textField;
- (void)loginButtonInView;
- (void)loginButtonOutOfView;
@end


@interface NSLayoutConstraint (SWIFT_EXTENSION(carpoolApp_v1_0))
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
@end


SWIFT_CLASS("_TtC15carpoolApp_v1_035NotificationsSettingsViewController")
@interface NotificationsSettingsViewController : UITableViewController
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface NotificationsSettingsViewController (SWIFT_EXTENSION(carpoolApp_v1_0))
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForHeaderInSection:(NSInteger)section;
@end


SWIFT_CLASS("_TtC15carpoolApp_v1_027NotificationsViewController")
@interface NotificationsViewController : UITableViewController
@property (nonatomic) BOOL dataExistsForTableView;
- (void)viewDidLoad;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface NotificationsViewController (SWIFT_EXTENSION(carpoolApp_v1_0))
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView;
@end


SWIFT_CLASS("_TtC15carpoolApp_v1_029PrivacySettingsViewController")
@interface PrivacySettingsViewController : UITableViewController
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface PrivacySettingsViewController (SWIFT_EXTENSION(carpoolApp_v1_0))
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForHeaderInSection:(NSInteger)section;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForFooterInSection:(NSInteger)section;
@end


SWIFT_CLASS("_TtC15carpoolApp_v1_023ProfileSegmentedControl")
@interface ProfileSegmentedControl : UIControl
@property (nonatomic, strong) UIView * _Nonnull thumbView;
@property (nonatomic, strong) UIView * _Nonnull lineView;
@property (nonatomic, strong) UIView * _Nonnull pillView;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull items;
@property (nonatomic) NSInteger selectedIndex;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (void)setupView;
- (void)setupLabels;
- (void)layoutSubviews;
- (BOOL)beginTrackingWithTouch:(UITouch * _Nonnull)touch withEvent:(UIEvent * _Nullable)event;
- (void)displayNewSelectedIndex;
- (void)addIndividualItemConstraints:(NSArray<UIView *> * _Nonnull)items mainView:(UIView * _Nonnull)mainView padding:(CGFloat)padding;
@end

@class NSNotification;
@class UIScrollView;
@class UIImageView;

SWIFT_CLASS("_TtC15carpoolApp_v1_021ProfileViewController")
@interface ProfileViewController : UIViewController <UIScrollViewDelegate>
@property (nonatomic, readonly) CGRect screenSize;
@property (nonatomic) NSInteger selectedIndex;
@property (nonatomic, weak) IBOutlet UIScrollView * _Null_unspecified scrollView;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified userProfileImage;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified stickySegmentedTab;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified constrainedStickyTabToNavBar;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified upcomingReservationsContainer;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified pastCaddiesContainer;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified notificationsContainer;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified userNameLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified lifetimeRoundsLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified currentCreditLabel;
- (IBAction)closeViewButtonPressed:(id _Nonnull)sender;
- (void)viewDidLoad;
- (void)notifyWithSelectedIndex:(NSNotification * _Nonnull)notification;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface ProfileViewController (SWIFT_EXTENSION(carpoolApp_v1_0))
- (void)scrollViewDidScroll:(UIScrollView * _Nonnull)scrollView;
@end


SWIFT_CLASS("_TtC15carpoolApp_v1_022SettingsViewController")
@interface SettingsViewController : UITableViewController
@property (nonatomic, weak) IBOutlet UITableViewCell * _Null_unspecified signOutCell;
- (IBAction)closeViewButtonPressed:(id _Nonnull)sender;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface SettingsViewController (SWIFT_EXTENSION(carpoolApp_v1_0))
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForHeaderInSection:(NSInteger)section;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForFooterInSection:(NSInteger)section;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end


SWIFT_CLASS("_TtC15carpoolApp_v1_025SidebarMenuViewController")
@interface SidebarMenuViewController : UIViewController
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class NSDate;
@class NSDateFormatter;
@class UIDatePicker;

SWIFT_CLASS("_TtC15carpoolApp_v1_039StartReservationContainerViewController")
@interface StartReservationContainerViewController : UITableViewController
@property (nonatomic) BOOL viewJustLaunched;
@property (nonatomic) BOOL cellTapped;
@property (nonatomic) BOOL locationCellTapped;
@property (nonatomic) BOOL dateCellTapped;
@property (nonatomic) BOOL timeCellTapped;
@property (nonatomic) BOOL aCellIsExpanded;
@property (nonatomic) NSInteger currentRow;
@property (nonatomic, strong) UIButton * _Nonnull locationButtonForFormatting;
@property (nonatomic, copy) NSString * _Nonnull selectedLocation;
@property (nonatomic, strong) NSDate * _Nonnull selectedDate;
@property (nonatomic, strong) NSDateFormatter * _Nonnull dateFormatter;
@property (nonatomic) BOOL morningButtonSelected;
@property (nonatomic) BOOL afternoonButtonSelected;
@property (nonatomic) NSInteger selectedIndex;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified chooseLocationLabel;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified chooseLocationDisclosureIndicator;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified location1Button;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified location2Button;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified location3Button;
@property (nonatomic, weak) IBOutlet UIScrollView * _Null_unspecified chooseDateScrollView;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified chooseDateDisclosureIndicator;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified chooseTimeLabel;
@property (nonatomic, weak) IBOutlet UIDatePicker * _Null_unspecified chooseTimePicker;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified chooseTimeDisclosureIndicator;
- (IBAction)location1ButtonPressed:(id _Nonnull)sender;
- (IBAction)location2ButtonPressed:(id _Nonnull)sender;
- (IBAction)location3ButtonPressed:(id _Nonnull)sender;
- (void)viewDidLoad;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)setLocationButtonProperties:(UIButton * _Nonnull)locationButtonForFormatting;
- (void)updateChooseLocationLabel;
- (void)selectedCellIndex;
- (void)timeChangedValue:(NSDate * _Nonnull)date;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC15carpoolApp_v1_030StartReservationViewController")
@interface StartReservationViewController : UIViewController
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified popoverView;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified blackFadedBackground;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified containerView;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified bottomWhiteView;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified findAvailableCaddiesButton;
- (IBAction)cancelReservationButtonPressed:(id _Nonnull)sender;
- (IBAction)blackFadedBackgroundButtonPressed:(id _Nonnull)sender;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface UIImage (SWIFT_EXTENSION(carpoolApp_v1_0))
@property (nonatomic, readonly, strong) UIImage * _Nonnull decompressedImage;
@end


SWIFT_CLASS("_TtC15carpoolApp_v1_017UltravisualLayout")
@interface UltravisualLayout : UICollectionViewLayout
@property (nonatomic, readonly) CGFloat dragOffset;
@property (nonatomic, copy) NSArray<UICollectionViewLayoutAttributes *> * _Nonnull cache;
@property (nonatomic, readonly) NSInteger featuredItemIndex;
@property (nonatomic, readonly) CGFloat nextItemPercentageOffset;
@property (nonatomic, readonly) CGFloat width;
@property (nonatomic, readonly) CGFloat height;
@property (nonatomic, readonly) NSInteger numberOfItems;
- (CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (NSArray<UICollectionViewLayoutAttributes *> * _Nullable)layoutAttributesForElementsInRect:(CGRect)rect;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)newBounds;
- (CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)proposedContentOffset withScrollingVelocity:(CGPoint)velocity;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC15carpoolApp_v1_034UpcomingReservationsViewController")
@interface UpcomingReservationsViewController : UITableViewController
@property (nonatomic) BOOL dataExistsForTableView;
- (void)viewDidLoad;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface UpcomingReservationsViewController (SWIFT_EXTENSION(carpoolApp_v1_0))
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView;
@end

#pragma clang diagnostic pop

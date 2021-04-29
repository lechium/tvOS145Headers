/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <TVSettingKit/TVSUITextEntryControllerDelegate.h>
#import <libobjc.A.dylib/SFPasswordSharingServiceDelegate.h>
#import <libobjc.A.dylib/TSKSettingItemEditingController.h>

@protocol TSKSettingItemEditingControllerDelegate;
@class TVSUITextEntryHeaderView, SFPasswordSharingService, TVSUITextEntryController, TSKSettingItem, NSString;

@interface TSKTextInputViewController : UIViewController <TVSUITextEntryControllerDelegate, SFPasswordSharingServiceDelegate, TSKSettingItemEditingController> {

	TVSUITextEntryHeaderView* _headerView;
	SFPasswordSharingService* _passwordSharingService;
	TVSUITextEntryController* _textEntryController;
	BOOL _secureTextEntry;
	BOOL _allowsEmptyInput;
	BOOL _supportsPasswordSharing;
	TSKSettingItem* _editingItem;
	id<TSKSettingItemEditingControllerDelegate> _editingDelegate;
	NSString* _headerText;
	NSString* _messageText;
	NSString* _initialText;
	NSString* _recentsCategory;
	long long _capitalizationType;
	long long _keyboardType;
	NSString* _networkName;

}

@property (assign,nonatomic) BOOL supportsPasswordSharing;                                                    //@synthesize supportsPasswordSharing=_supportsPasswordSharing - In the implementation block
@property (nonatomic,retain) NSString * networkName;                                                          //@synthesize networkName=_networkName - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) BOOL secureTextEntry;                                                            //@synthesize secureTextEntry=_secureTextEntry - In the implementation block
@property (nonatomic,copy) NSString * headerText;                                                             //@synthesize headerText=_headerText - In the implementation block
@property (nonatomic,copy) NSString * messageText;                                                            //@synthesize messageText=_messageText - In the implementation block
@property (nonatomic,copy) NSString * initialText;                                                            //@synthesize initialText=_initialText - In the implementation block
@property (nonatomic,copy) NSString * recentsCategory;                                                        //@synthesize recentsCategory=_recentsCategory - In the implementation block
@property (assign,nonatomic) long long capitalizationType;                                                    //@synthesize capitalizationType=_capitalizationType - In the implementation block
@property (assign,nonatomic) long long keyboardType;                                                          //@synthesize keyboardType=_keyboardType - In the implementation block
@property (assign,nonatomic) BOOL allowsEmptyInput;                                                           //@synthesize allowsEmptyInput=_allowsEmptyInput - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TSKSettingItem * editingItem;                                                    //@synthesize editingItem=_editingItem - In the implementation block
@property (assign,nonatomic,__weak) id<TSKSettingItemEditingControllerDelegate> editingDelegate;              //@synthesize editingDelegate=_editingDelegate - In the implementation block
-(void)dealloc;
-(long long)keyboardType;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setKeyboardType:(long long)arg1 ;
-(BOOL)secureTextEntry;
-(void)setSecureTextEntry:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setEditingDelegate:(id<TSKSettingItemEditingControllerDelegate>)arg1 ;
-(id<TSKSettingItemEditingControllerDelegate>)editingDelegate;
-(NSString *)networkName;
-(void)setNetworkName:(NSString *)arg1 ;
-(void)service:(id)arg1 receivedNetworkInfo:(id)arg2 ;
-(BOOL)service:(id)arg1 shouldPromptForNetwork:(id)arg2 ;
-(NSString *)headerText;
-(void)setHeaderText:(NSString *)arg1 ;
-(NSString *)messageText;
-(void)setMessageText:(NSString *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)_textFieldTextDidChange:(id)arg1 ;
-(id)_titleStringAttributes;
-(id)_messageStringAttributes;
-(void)textEntryControllerDidFinish:(id)arg1 ;
-(void)_configureTextField;
-(TSKSettingItem *)editingItem;
-(void)setEditingItem:(TSKSettingItem *)arg1 ;
-(NSString *)recentsCategory;
-(void)setRecentsCategory:(NSString *)arg1 ;
-(void)_configureTitleView;
-(void)_donePressed:(id)arg1 ;
-(void)_configureSubmitButton;
-(void)_menuPressed;
-(BOOL)supportsPasswordSharing;
-(void)_passwordSharingEnsureStarted;
-(void)_passwordSharingEnsureStopped;
-(NSString *)initialText;
-(void)setInitialText:(NSString *)arg1 ;
-(void)setCapitalizationType:(long long)arg1 ;
-(long long)capitalizationType;
-(BOOL)allowsEmptyInput;
-(void)setAllowsEmptyInput:(BOOL)arg1 ;
-(void)setSupportsPasswordSharing:(BOOL)arg1 ;
@end

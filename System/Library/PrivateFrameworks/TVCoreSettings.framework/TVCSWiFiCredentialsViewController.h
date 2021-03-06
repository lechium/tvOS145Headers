/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVCoreSettings.framework/TVCoreSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVCoreSettings/TVCoreSettings-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <TVCoreSettings/TVCSWiFiModeDelegate.h>
#import <TVCoreSettings/TVCSWiFiChooseIdentityDelegate.h>
#import <TVCoreSettings/TVSUITextEntryControllerDelegate.h>
#import <libobjc.A.dylib/WFOtherNetworkProvider.h>

@protocol WFCredentialsProviderContext;
@class NSString, NSNumber, TVCSWiFiFieldCollector, TVSStateMachine, UINavigationController;

@interface TVCSWiFiCredentialsViewController : UIViewController <UINavigationControllerDelegate, TVCSWiFiModeDelegate, TVCSWiFiChooseIdentityDelegate, TVSUITextEntryControllerDelegate, WFOtherNetworkProvider> {

	BOOL _joining;
	NSString* _activityString;
	id<WFCredentialsProviderContext> _context;
	NSNumber* _selectedMode;
	TVCSWiFiFieldCollector* _fieldCollector;
	TVSStateMachine* _stateMachine;
	UINavigationController* _childNavigationController;
	SecIdentityRef _TLSIdentity;
	NSString* _username;
	NSString* _password;
	NSString* _SSID;

}

@property (nonatomic,retain) TVCSWiFiFieldCollector * fieldCollector;                         //@synthesize fieldCollector=_fieldCollector - In the implementation block
@property (nonatomic,retain) TVSStateMachine * stateMachine;                                  //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) UINavigationController * childNavigationController;              //@synthesize childNavigationController=_childNavigationController - In the implementation block
@property (assign,nonatomic) SecIdentityRef TLSIdentity;                                      //@synthesize TLSIdentity=_TLSIdentity - In the implementation block
@property (nonatomic,copy) NSString * username;                                               //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;                                               //@synthesize password=_password - In the implementation block
@property (setter=SID,nonatomic,copy) NSString * SSID;                                        //@synthesize SSID=_SSID - In the implementation block
@property (nonatomic,readonly) id<WFCredentialsProviderContext> context;                      //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSNumber * selectedMode;                                           //@synthesize selectedMode=_selectedMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long securityMode; 
@property (assign,nonatomic) BOOL joining;                                                    //@synthesize joining=_joining - In the implementation block
@property (assign,nonatomic) NSString * activityString;                                       //@synthesize activityString=_activityString - In the implementation block
@property (nonatomic,readonly) id WAPIIdentity; 
@property (nonatomic,readonly) id WAPIRootCertificate; 
@property (nonatomic,readonly) BOOL wantsModalPresentation; 
-(NSString *)password;
-(NSString *)username;
-(id<WFCredentialsProviderContext>)context;
-(void)setPassword:(NSString *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(void)viewDidLoad;
-(TVSStateMachine *)stateMachine;
-(void)setStateMachine:(TVSStateMachine *)arg1 ;
-(void)setSSID:(NSString *)arg1 ;
-(NSString *)SSID;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)_textFieldTextDidChange:(id)arg1 ;
-(id)_titleStringAttributes;
-(id)_messageStringAttributes;
-(void)textEntryControllerDidFinish:(id)arg1 ;
-(void)setActivityString:(NSString *)arg1 ;
-(NSString *)activityString;
-(void)setJoining:(BOOL)arg1 ;
-(SecIdentityRef)TLSIdentity;
-(void)setTLSIdentity:(SecIdentityRef)arg1 ;
-(BOOL)joining;
-(void)receiveSharedPassword:(id)arg1 ;
-(void)_didPressMenu:(id)arg1 ;
-(void)tableView:(id)arg1 didChooseIdentity:(const void*)arg2 atIndex:(unsigned long long)arg3 ;
-(void)modeViewController:(id)arg1 didSelectMode:(long long)arg2 ;
-(id)_childNavigationController;
-(NSNumber *)selectedMode;
-(id)_newSpinnerViewController;
-(id)_textEntryViewControllerForField:(id)arg1 ;
-(id)_modeViewControllerForField:(id)arg1 ;
-(id)_chooseIdentityViewControllerForField:(id)arg1 ;
-(void)_didPressContinue:(id)arg1 ;
-(BOOL)_shouldGatherCredentials;
-(TVCSWiFiFieldCollector *)fieldCollector;
-(BOOL)_autoCollectField:(id)arg1 ;
-(id)_viewControllerForField:(id)arg1 ;
-(UINavigationController *)childNavigationController;
-(void)setSelectedMode:(NSNumber *)arg1 ;
-(void)setFieldCollector:(TVCSWiFiFieldCollector *)arg1 ;
-(void)setChildNavigationController:(UINavigationController *)arg1 ;
@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, NSDictionary, NSString, NSURL;

@interface SYDAccount : NSObject
{
    _Bool _allowsCellular;	// 8 = 0x8
    _Bool _needsToReloadAccount;	// 9 = 0x9
    _Bool _registeredForNotifications;	// 10 = 0xa
    NSString *_invalidCredential;	// 16 = 0x10
    ACAccount *_account;	// 24 = 0x18
    NSDictionary *_accountProperties;	// 32 = 0x20
}

+ (id)enabledAccount;	// IMP=0x00000001000091f0
+ (id)primaryAccount;	// IMP=0x0000000100008e40
+ (id)sharedAccountStore;	// IMP=0x0000000100008dd4
- (void).cxx_destruct;	// IMP=0x000000010000a218
@property(nonatomic) _Bool registeredForNotifications; // @synthesize registeredForNotifications=_registeredForNotifications;
@property(nonatomic) _Bool needsToReloadAccount; // @synthesize needsToReloadAccount=_needsToReloadAccount;
@property(retain, nonatomic) NSDictionary *accountProperties; // @synthesize accountProperties=_accountProperties;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(nonatomic) _Bool allowsCellular; // @synthesize allowsCellular=_allowsCellular;
- (id)description;	// IMP=0x000000010000a0c8
- (id)credentials;	// IMP=0x000000010000a028
@property(retain, nonatomic) NSString *invalidCredential; // @synthesize invalidCredential=_invalidCredential;
@property(readonly, nonatomic) NSURL *serverURL;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)_deviceUnlockedSinceBootChangeNotification;	// IMP=0x0000000100009b74
- (void)_passwordChangedNotification;	// IMP=0x0000000100009ae4
- (void)_accountsChangedNotification;	// IMP=0x00000001000096f4
- (void)_loadAccountIfNecessary;	// IMP=0x00000001000093c4
- (id)init;	// IMP=0x0000000100008d78

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Accounts/ACAccount.h>

@class NSString;

@interface ACAccount (SYDAccount)
- (_Bool)syd_useCellularForDataclass:(id)arg1;	// IMP=0x0000000100008230
@property(readonly, nonatomic) NSString *syd_authToken;
@property(readonly, nonatomic) _Bool syd_needsToVerifyTerms;
@property(readonly, nonatomic) _Bool syd_isPrimaryEmailVerified;
@property(readonly, nonatomic) _Bool syd_isPrimaryAccount;
@property(readonly, nonatomic) NSString *syd_primaryEmail;
@property(readonly, nonatomic) NSString *syd_personID;
@end


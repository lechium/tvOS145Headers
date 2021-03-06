//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface AppReceiptRefreshOperationOptions : NSObject <NSCopying>
{
    long long _authenticationPromptStyle;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
    unsigned long long _flags;	// 24 = 0x18
    _Bool _needsAuthentication;	// 32 = 0x20
    _Bool _performSinfMirartionCheckBeforeFailing;	// 33 = 0x21
    NSNumber *_targetAccount;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001001b1460
@property(copy, nonatomic) NSNumber *targetAccount; // @synthesize targetAccount=_targetAccount;
@property(nonatomic) unsigned long long receiptFlags; // @synthesize receiptFlags=_flags;
@property(nonatomic) _Bool performSinfMirartionCheckBeforeFailing; // @synthesize performSinfMirartionCheckBeforeFailing=_performSinfMirartionCheckBeforeFailing;
@property(nonatomic) _Bool needsAuthentication; // @synthesize needsAuthentication=_needsAuthentication;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) long long authenticationPromptStyle; // @synthesize authenticationPromptStyle=_authenticationPromptStyle;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001b1344
@property(readonly, nonatomic) NSString *URLBagKey;
- (id)initWithReceiptFlags:(unsigned long long)arg1;	// IMP=0x00000001001b12c4

@end


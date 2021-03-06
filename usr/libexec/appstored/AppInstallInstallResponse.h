//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface AppInstallInstallResponse : NSObject
{
    long long _installID;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    long long _result;	// 24 = 0x18
}

+ (id)terminateInstallID:(long long)arg1;	// IMP=0x0000000100261718
+ (id)finishInstallID:(long long)arg1;	// IMP=0x00000001002616e0
+ (id)failInstallID:(long long)arg1 withError:(id)arg2;	// IMP=0x000000010026167c
+ (id)continueInstallID:(long long)arg1;	// IMP=0x0000000100261644
+ (id)approveInstallID:(long long)arg1;	// IMP=0x000000010026160c
- (void).cxx_destruct;	// IMP=0x00000001002617fc
@property(readonly) long long result; // @synthesize result=_result;
@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) long long installID; // @synthesize installID=_installID;
- (id)_initWithInstallID:(long long)arg1 result:(long long)arg2 error:(id)arg3;	// IMP=0x0000000100261750

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SOSAccount;

__attribute__((visibility("hidden")))
@interface SOSCircleStorageTransport : NSObject
{
    SOSAccount *account;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001001c94b0
@property(retain, nonatomic) SOSAccount *account; // @synthesize account;
- (struct __CFArray *)handleCircleMessagesAndReturnHandledCopy:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00000001001c9480
- (struct __CFDictionary *)handleRetirementMessages:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00000001001c945c
- (_Bool)postRetirement:(struct __CFString *)arg1 peer:(struct __OpaqueSOSPeerInfo *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001001c9454
- (_Bool)postCircle:(struct __CFString *)arg1 circleData:(struct __CFData *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001001c944c
- (_Bool)flushChanges:(struct __CFError **)arg1;	// IMP=0x00000001001c9444
- (_Bool)expireRetirementRecords:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00000001001c943c
- (long long)getTransportType;	// IMP=0x00000001001c9434
- (long long)circleGetTypeID;	// IMP=0x00000001001c942c
- (id)getAccount;	// IMP=0x00000001001c9420
- (id)initWithAccount:(id)arg1;	// IMP=0x00000001001c93ac
- (id)init;	// IMP=0x00000001001c9378

@end

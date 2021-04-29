//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FTServices/FTIDSMessage.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSDictionary;

@interface IDSProfileGetHandlesMessage : FTIDSMessage <NSCopying>
{
    NSArray *_responseHandles;	// 232 = 0xe8
    NSDictionary *_selfHandle;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x00000001005cc3ec
@property(copy) NSDictionary *selfHandle; // @synthesize selfHandle=_selfHandle;
@property(copy) NSArray *responseHandles; // @synthesize responseHandles=_responseHandles;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x00000001005cc1c8
- (double)anisetteHeadersTimeout;	// IMP=0x00000001005cc1b0
- (id)messageBody;	// IMP=0x00000001005cc148
- (id)requiredKeys;	// IMP=0x00000001005cc0e0
- (id)bagKey;	// IMP=0x00000001005cc0c4
- (int)maxTimeoutRetries;	// IMP=0x00000001005cc0ac
- (_Bool)wantsExtraTimeoutRetry;	// IMP=0x00000001005cc090
- (id)additionalMessageHeaders;	// IMP=0x00000001005cbf4c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001005cbe7c
- (id)init;	// IMP=0x00000001005cbdc0

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface ExpiredDownloadRecoveryResponse : NSObject
{
    long long _downloadIdentifier;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    long long _result;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001001a1244
@property(nonatomic) long long result; // @synthesize result=_result;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long downloadIdentifier; // @synthesize downloadIdentifier=_downloadIdentifier;

@end


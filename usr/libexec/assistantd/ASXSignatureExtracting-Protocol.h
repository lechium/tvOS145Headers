//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData;

@protocol ASXSignatureExtracting <NSObject>
- (oneway void)reset;
- (oneway void)getSignature:(void (^)(NSData *))arg1;
- (oneway void)appendAcousticData:(NSData *)arg1 sampleCount:(int)arg2 sampleRate:(int)arg3;
- (oneway void)setSampleRate:(int)arg1;
@end

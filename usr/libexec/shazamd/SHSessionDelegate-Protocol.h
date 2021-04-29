//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SHMatch, SHSession, SHSignature;

@protocol SHSessionDelegate <NSObject>

@optional
- (void)session:(SHSession *)arg1 didNotFindMatchForSignature:(SHSignature *)arg2 error:(NSError *)arg3;
- (void)session:(SHSession *)arg1 didFindMatch:(SHMatch *)arg2;
- (_Bool)session:(SHSession *)arg1 shouldAttemptToMatchSignature:(SHSignature *)arg2;
@end


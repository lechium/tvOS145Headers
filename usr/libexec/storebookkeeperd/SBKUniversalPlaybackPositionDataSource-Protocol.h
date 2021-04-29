//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SBKUniversalPlaybackPositionTransactionContext;

@protocol SBKUniversalPlaybackPositionDataSource <NSObject>
- (void)commitUniversalPlaybackPositionTransaction:(id <SBKUniversalPlaybackPositionTransactionContext>)arg1 domainVersion:(NSString *)arg2 metadataEnumerationBlock:(SBKUniversalPlaybackPositionMetadata * (^)(void))arg3;
- (void)cancelUniversalPlaybackPositionTransaction:(id <SBKUniversalPlaybackPositionTransactionContext>)arg1;
- (id <SBKUniversalPlaybackPositionTransactionContext>)beginTransactionWithItemsToSyncEnumerationBlock:(void (^)(id <SBKUniversalPlaybackPositionMediaItem>))arg1;
@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ASConnectionManager : NSObject
{
    struct __CFArray *_downloadObserverConnections;	// 8 = 0x8
    struct __CFArray *_cancelClientConnections;	// 16 = 0x10
    struct __CFArray *_pauseClientConnections;	// 24 = 0x18
    struct __CFArray *_resumeClientConnections;	// 32 = 0x20
}

+ (id)connectionManagerWithAsset:(struct __MobileAsset *)arg1 replyingToMessage:(id)arg2 onConnection:(id)arg3 messageKind:(int)arg4;	// IMP=0x000000010002e4f8
+ (id)managersDict;	// IMP=0x000000010002e494
+ (id)managersDictQueue;	// IMP=0x000000010002e42c
- (void)tearDown;	// IMP=0x000000010002eb90
- (void)sendConnectionTerminationToClients:(int)arg1;	// IMP=0x000000010002eae0
- (void)sendProgressMessageWithOperation:(id)arg1 progress:(float)arg2 callbackState:(id)arg3 toClients:(int)arg4;	// IMP=0x000000010002ea30
- (void)sendErrorMessageWithError:(id)arg1 toClients:(int)arg2;	// IMP=0x000000010002e998
- (void)sendStatus:(int)arg1 toClients:(int)arg2;	// IMP=0x000000010002e888
- (void)sendStatus:(int)arg1 toClientConnections:(struct __CFArray *)arg2;	// IMP=0x000000010002e81c
- (void)addClientOfMessageKind:(int)arg1 replyingToMessage:(id)arg2 onConnection:(id)arg3;	// IMP=0x000000010002e710
- (void)dealloc;	// IMP=0x000000010002e308
- (id)init;	// IMP=0x000000010002e264

@end


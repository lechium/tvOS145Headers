//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NWConnection;
@protocol GKNWConnectionWrapperDelegate, OS_dispatch_queue;

@interface GKNWConnectionWrapper : NSObject
{
    id <GKNWConnectionWrapperDelegate> _delegate;	// 8 = 0x8
    NWConnection *_connection;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_writeQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000f8e64
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *writeQueue; // @synthesize writeQueue=_writeQueue;
@property(nonatomic) __weak NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain, nonatomic) NWConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id <GKNWConnectionWrapperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cancelConnection;	// IMP=0x00000001000f8de4
- (void)readData;	// IMP=0x00000001000f8de0
- (void)_sendData:(id)arg1;	// IMP=0x00000001000f8ddc
- (_Bool)sendData:(id)arg1;	// IMP=0x00000001000f8d70
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000f8b44
- (void)dealloc;	// IMP=0x00000001000f8aa8
- (id)initWithConnection:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;	// IMP=0x00000001000f89b0

@end

